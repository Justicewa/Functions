#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int Menu(){
//	int choise;
//	printf("******************\n");
//	printf("**1.��ʼ��Ϸ******\n");
//	printf("**0.��Ϸ����******\n");
//	printf("******************\n");
//	printf("**����һ��1-100����\n");
//	printf("******************\n");
//	scanf("%d", &choise);
//	return choise;
//}
//
//int Game() {
//	//1.�������һ��1-100������
//	int to_guess = rand()%100+1;
//	//2.�û�������ʾ����һ������
//	int i = 0;
//	while (1) {
//		printf("������һ������: \n");
//		int num = 0;
//		scanf("%d", &num);
//		//3.����������������ɵ����ֽ��бȽ�,�ó�����
//		if (num < to_guess) {
//			printf("����!\n");
//		}
//		else if (num>to_guess){
//			printf("����!\n");
//		}
//		else {
//			printf("��ϲ��,�����!\n");
//			break;
//		}
//	}
//	return 0;
//}
//
//int main(){
//	srand((unsigned int)time(0));
//	
//	while (1) {
//		int choise=Menu();
//		if (choise == 1){
//			Game();
//		}
//		else if (choise == 0) {
//			printf("Game over!\n");
//			break;
//		}
//		else{
//			printf("Wrong number!\n");
//			break;
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//
//int get(int arr[], int find, int size) {
//	int left = 0;
//	int right = size;
//	int mid;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (find < arr[mid]){
//			right = mid-1;
//		}
//		else if (find>arr[mid]) {
//			left = mid + 1;
//		}
//		else{
//			return mid;
//			break;
//		}
//	}
//	return -1;
//}
//
//int main(){
//	int a[] = { 1, 2, 3, 4, 5, 6, 7 };
//	int to_find = 8;
//	int size = sizeof(a) / sizeof(a[0]) - 1;
//	printf("%d\n", get(a, to_find, size));
//
//	system("pause");
//	return 0;
//}
//
//void password(char a[]){
//	//1.��������
//	//2.�ж������Ƿ����,����ÿһλ��,
//	int i = 0, j = 0;
//	//������ó�b[4]��������� ��Ϊ����һ�� '\0' �������
//	char b[5] = { 0 };
//	printf("����������:\n");
//	for ( i = 1; i <= 3; i++) {
//		scanf("%s", b);
//		for ( j = 0; j < 4; j++) {
//			if (b[j] == a[j]){
//				
//			}
//			else {
//				break;
//			}
//		}
//		if (j == 4){
//			break;
//		}
//	}
//	if (i < 3){
//		printf("��½�ɹ�!\n");
//	}
//	else{
//		printf("�������!\n");
//	}
//}
//
//int main(){
//	char right[] = "1234";
//	password(right);
//
//	system("pause");
//	return 0;
//}
//
//void circle() {
//	printf("������һ���ַ�\n");
//	char x;
//
//	scanf("%c", &x);
//	while (getchar() != '\n');
//	if (x <= 'z'&&x >= 'a') {
//		printf("%c\n", x - 32);
//	}
//	else if (x<='Z'&&x>='A'){
//		printf("%c\n", x + 32);
//	}
//	
//}
//
//int main(){
//	while (1){
//		circle();
//	}
//
//	system("pause");
//	return 0;
//}

