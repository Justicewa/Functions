#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int Menu(){
//	int choise;
//	printf("******************\n");
//	printf("**1.开始游戏******\n");
//	printf("**0.游戏结束******\n");
//	printf("******************\n");
//	printf("**输入一个1-100的数\n");
//	printf("******************\n");
//	scanf("%d", &choise);
//	return choise;
//}
//
//int Game() {
//	//1.随机生成一个1-100的数字
//	int to_guess = rand()%100+1;
//	//2.用户根据提示输入一个数字
//	int i = 0;
//	while (1) {
//		printf("请输入一个数字: \n");
//		int num = 0;
//		scanf("%d", &num);
//		//3.拿输入的数字与生成的数字进行比较,得出结论
//		if (num < to_guess) {
//			printf("低了!\n");
//		}
//		else if (num>to_guess){
//			printf("高了!\n");
//		}
//		else {
//			printf("恭喜您,答对了!\n");
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
//	//1.输入密码
//	//2.判断密码是否相等,遍历每一位数,
//	int i = 0, j = 0;
//	//如果设置成b[4]会产生错误 因为还有一个 '\0' 产生溢出
//	char b[5] = { 0 };
//	printf("请输入密码:\n");
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
//		printf("登陆成功!\n");
//	}
//	else{
//		printf("密码错误!\n");
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
//	printf("请输入一个字符\n");
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

