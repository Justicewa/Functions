#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//1.�����ϵ����Ϣ
//2.ɾ��ָ����ϵ����Ϣ
//3.����ָ����ϵ����Ϣ
//4�޸�ָ����ϵ����Ϣ
//5.��ʾ������ϵ����Ϣ
//6.���������ϵ��
//7.����������������ϵ��
//8. ������ϵ�˵��ļ�
//9. ������ϵ��

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
	printf("1.�����ϵ����Ϣ\n");
	printf("2.ɾ����ϵ����Ϣ\n");
	printf("3.����ָ����ϵ����Ϣ\n");
	printf("4.�޸���ϵ����Ϣ\n");
	printf("5.��ʾ������ϵ����Ϣ\n");
	printf("6.���������ϵ��\n");
	printf("7.������������ϵ����Ϣ\n");
	printf("8.������ϵ����Ϣ\n");
	printf("9.������ϵ��\n");
	printf("*************************\n");
	printf("����������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}

void Empty(){
	//ռ�� Ϊ��ת�Ʊ��˳���±��Ӧ
}

void AddPeronInfo(){
	printf("������ϵ��\n");
	if (g_address_book.size >= MAX_PERSON_INFO_SIZE){
		printf("������ϵ��ʧ��!\n");
		return;
	}
	printf("��������ϵ������\n");
	//���ȥ��* �� & person_info �Ǹղų�ʼ���Ŀ��� �޷�Ӱ�쵽֮ǰ���� ����Ҫ��ָ��
	PersonInfo* person_info = &g_address_book.persons[g_address_book.size];
	scanf("%s", person_info->name);
	printf("��������ϵ�˵绰\n");
	scanf("%s", person_info->phone);
	++g_address_book.size;
	printf("������ϵ�˳ɹ�\n");
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
			printf("�������ѡ������!\n");
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