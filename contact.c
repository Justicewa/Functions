#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//1.添加联系人信息
//2.删除指定联系人信息
//3.查找指定联系人信息
//4修改指定联系人信息
//5.显示所有联系人信息
//6.清空所有联系人
//7.以名字排序所有联系人
//8. 保存联系人到文件
//9. 加载联系人

typedef struct PersonInfo{
	char name[1024];
	char phone[1024];
}PersonInfo;

#define MAX_PERSON_INFO_SIZE 300

typedef struct AddressBook{
	PersonInfo persons[MAX_PERSON_INFO_SIZE];
	//[0,size)
	int size;
}AddressBook;

AddressBook g_address_book;

void Init(){
	g_address_book.size = 0;
	for (int i = 0; i < MAX_PERSON_INFO_SIZE; ++i){
		g_address_book.persons[i].name[0] = '\0';
		g_address_book.persons[i].phone[0] = '\0';
	}
}

int Menu(){
	printf("*************************\n");
	printf("1.添加联系人信息\n");
	printf("2.删除联系人信息\n");
	printf("3.查找指定联系人信息\n");
	printf("4.修改联系人信息\n");
	printf("5.显示所有联系人信息\n");
	printf("6.清空所有联系人\n");
	printf("7.以名字排序联系人信息\n");
	printf("8.保存联系人信息\n");
	printf("9.加载联系人\n");
	printf("*************************\n");
	printf("请输入您的选择\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Empty(){
	//占空 为了转移表的顺序下标对应
}

void AddPeronInfo(){
	printf("新增联系人\n");
	if (g_address_book.size >= MAX_PERSON_INFO_SIZE){
		printf("新增联系人失败!\n");
		return;
	}
	printf("请输入联系人姓名\n");
	//如果去掉* 和 & person_info 是刚才初始化的拷贝 无法影响到之前内容 所以要用指针
	PersonInfo* person_info = &g_address_book.persons[g_address_book.size];
	scanf("%s", person_info->name);
	printf("请输入联系人电话\n");
	scanf("%s", person_info->phone);
	++g_address_book.size;
	printf("新增联系人成功\n");
}

void DelPersonInfo(){

}

void FindPersonInfo(){

}

void UpdatePersonInfo(){

}

void PrintAllPersonInfo(){

}

void ClearPersonInfo(){

}

void SortPersonInfo(){

}

void SavePersonInfo(){

}

void LoadPersonInfo(){

}

typedef void(*Func)();

int main(){
	Func arr[] = {
		Empty,
		AddPeronInfo,
		DelPersonInfo,
		FindPersonInfo,
		UpdatePersonInfo,
		PrintAllPersonInfo,
		ClearPersonInfo,
		SortPersonInfo,
		SavePersonInfo,
		LoadPersonInfo
	};

	Init();

	while (1){
		int choice = Menu();
		if (choice < 0 || choice >= sizeof(arr) / sizeof(arr[0])){
			printf("您输入的选项有误!\n");
			continue;
		}
		if (choice == 0){
			printf("goodbye!\n");
			break;
		}
		arr[choice]();
	}

	system("pause");
	return 0;
}