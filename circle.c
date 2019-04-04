#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

int jiecheng(int i) {
	int result = 1;
	for (int x = 1; x <= i; x++) {
		result *= x;
	}
	return result;
}

int main() {

	//求 1! 到 10! 的和
	//int sum = 0;
	//for (int i = 1; i < 11; i++) {
	//	sum += jiecheng(i);
	//}
	//printf("结果是:%d\n", sum);


	//多个字符向中间移动

	//char str1[] = "I love   you !";
	//char str2[] = "              ";
	//int right = strlen(str2) - 1; // 取最后一个元素的下标
	//int left = 0;
	//while (left <= right+1) {
	//	printf("%s\n", str2);
	//	str2[left] = str1[left];
	//	str2[right] = str1[right];
	//	++left;
	//	--right;
	//	Sleep(300);
	//	system("cls");
	//}

	//用户登录三次就输入有误,不然重新输入

	char a[10] = { 0 };
	printf("请输入密码:\n");
	int i = 1;
	for (; i <= 3; i++) {
		char password[] = { 0 };
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {
			break;
		}
			printf("请重新输入密码:\n");
	}
	if (i > 3) {
		printf("密码错误\n");
	}
	else{
		printf("登陆成功\n");
	}
	system("pause");
	return 0;
}