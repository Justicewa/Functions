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

	//�� 1! �� 10! �ĺ�
	//int sum = 0;
	//for (int i = 1; i < 11; i++) {
	//	sum += jiecheng(i);
	//}
	//printf("�����:%d\n", sum);


	//����ַ����м��ƶ�

	//char str1[] = "I love   you !";
	//char str2[] = "              ";
	//int right = strlen(str2) - 1; // ȡ���һ��Ԫ�ص��±�
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

	//�û���¼���ξ���������,��Ȼ��������

	char a[10] = { 0 };
	printf("����������:\n");
	int i = 1;
	for (; i <= 3; i++) {
		char password[] = { 0 };
		scanf("%s", password);
		if (strcmp(password, "123456") == 0) {
			break;
		}
			printf("��������������:\n");
	}
	if (i > 3) {
		printf("�������\n");
	}
	else{
		printf("��½�ɹ�\n");
	}
	system("pause");
	return 0;
}