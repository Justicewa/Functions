#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

//��� how do you do

//void print_star(){
//	printf("************\n");
//}
//
//void printf_message() {
//	printf("How do you do\n");
//}
//
//int main() {
//	print_star();
//	printf_message();
//	print_star();
//
//	system("pause");
//	return 0;
//}

//��7.2 ����������,������нϴ���

//int big(int x, int y) {
//	int z;
//	z = x > y ? x : y;
//	return z;
//}
//
//int main() {
//	int a, b, c;
//	printf("��������������: \n");
//	scanf("%d %d", &a, &b);
//	c = big(a, b);
//	printf("������� %d\n", c);
//
//	system("pause");
//	return 0;
//}

//��7.3 ��������ֵ������ָ���ĺ������Ͳ�ͬ,���ո�ֵ������

//int main() {
//	int big(double x, double y);
//	double a, b;
//	int c;
//	scanf("%lf %lf", &a, &b);
//	c = big(a, b);
//	printf("%d\n", c);
//
//	system("pause");
//	return 0;
//}
//
//int big(double x, double y) {
//	double z;
//	z = x > y ? x : y;
//	return (z);
//}

// ��7.4 ��������ʵ��,���

//double add(double x, double y) {
//	double z = x + y;
//	return z;
//}
//
//int main() {
//	double a, b, c;
//	scanf("%lf %lf", &a, &b);
//	c = add(a, b);
//	printf("add= %f\n", c);
//	system("pause");
//	return 0;
//}

//��7.5 �����ĸ�����,�ҳ�������� �ú���Ƕ��������

//int max2(int a, int b) {
//	if (a > b) {
//		return a;
//	}
//	else{
//		return b;
//	}
//}
//
//int max4(int a, int b,int c,int d) {
//	int m;
//	m = max2(a, b);
//	m = max2(m, c);
//	m = max2(m, d);
//	return (m);
//}
//
//int main() {
//	int  a, b, c, d, big;
//	scanf("%d %d %d %d", &a, &b, &c, &d);
//	big =max4 (a, b, c, d);
//	printf("%d\n", big);
//	
//	system("pause");
//	return 0;
//}

//��7.6 ������ѧ��������

//int main() {
//	int age(int n);
//	printf("No.5 age: %d\n", age(5));
//
//	system("pause");
//	return 0;
//}
//
//int age(int n) {
//	int c;
//	if (n == 1) {
//		c = 10;
//	}
//	else{
//		c = age(n - 1) + 2;
//	}
//	return (c);
//}

//��7.7 �õݹ鷽���� n!

//int main() {
//	int fac(int n);
//	int n, y;
//	scanf("%d", &n);
//	y = fac(n);
//	printf("%d! = %d\n", n, y);
//
//	system("pause");
//	return 0;
//}
//
//int fac(int n) {
//	int f;
//	if (n < 0) {
//		printf("���������������\n");
//	}
//	else if (n == 0 || n == 1){
//		f = 1;
//	}
//	else {
//		f = fac(n - 1)*n;
//	}
//	return f;
//}

//��7.8 ��ŵ��

//int main() {
//	void hanoi(int n, char one, char two, char three);
//	int m;
//	printf("���������ӵĸ���: \n");
//	scanf("%d", &m);
//	printf("�ƶ�������Ҫ�Ĳ�����: \n");
//	hanoi(m, 'A', 'B', 'C');
//
//	system("pause");
//	return 0;
//}
//
//void hanoi(int n, char one, char two, char three){
//	void move(char x, char y);
//	if (n == 1) {
//		move(one, three);
//	}
//	else {
//		hanoi(n - 1, one, three, two);
//		move(one, three);
//		hanoi(n - 1, two, one, three);
//	}
//}
//
//void move(char x, char y) {
//	printf("%c->%c\n",x, y);
//}

//��7.9 ����ʮ����,�����е����ֵ�͸����ǵڼ���

//int no1(int x,int y) {
//	int z;
//	z = x > y ? x : y;
//	return z;
//}
//
//int main() {
//	int a[10], i, m, n;
//	printf("������ʮ������: \n");
//	for (i = 0; i < 10; i++) {
//		scanf("%d", &a[i]);
//	}
//	printf("\n");
//	for (i = 1,m=a[0],n=0; i < 10; i++) {
//		if (no1(m, a[i])>m) {
//			m = no1(m, a[i]);
//			n = i;
//		}
//		
//	}
//	printf("The largest number is %d \n It's the %dth number", m, n + 1);
//
//	system("pause");
//	return 0;
//}

//��7.10 ����ʮ��ѧ���ĳɼ� ����ƽ��ֵ

//double calc(double b[10]) {
//	double sum = 0;
//	for (int i = 0; i < 10; i++) {
//		sum += b[i];
//	}
//	double aver = sum / 10;
//	return aver;
//}
//
//int main() {
//	double score[10], aver;
//	int i;
//	printf("������ʮ��ѧ���ĳɼ�: \n");
//	for (i = 0; i < 10; i++) {
//		scanf("%lf", &score[i]);
//	}
//	printf("\n");
//	aver = calc(score);
//	printf("The average grade is: %f\n", aver);
//
//	system("pause");
//	return 0;
//}

//��7.11 ����average������������ͬѧ��ƽ��ֵ

//double aver(double b[], int i) {
//	double aver, sum = 0;
//	for (int x = 0; x < i; x++) {
//		sum += b[x];
//	}
//	sum = sum / i;
//	return sum;
//}
//
//int main() {
//	double a[3] = { 2, 5, 9 };
//	double b[5] = { 2, 8, 9, 4, 5 };
//	printf("a���ƽ���ɼ�Ϊ: %f\n", aver(a, 3));
//	printf("b���ƽ���ɼ�Ϊ: %f\n", aver(b, 5));
//
//	system("pause");
//	return 0;
//}

//��7.12 ��ѡ�񷨶������е�5���������ɴ�С��������

int cmp(int b[5]) {

}

int main() {
	int a[5], i;
	printf("Please enter 5 numbers : \n");
	for (i = 0; i < 5; i++) {
		scanf("%d", a[i]);
	}

}