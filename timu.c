#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//3.输入两个正整数,求最大公约数和最小公倍数

int main() {
	int p, r, n, m, t;
	scanf("%d%d", &n, &m);
	if (n < m) {
		t = n;
		n = m;
		m = t;
	}
	p = m*n;
	while (m != 0) {
		r = n%m;
		n = m;
		m = r;
	}
	printf("最大公约数为:%d\n", n);
	printf("最小公倍数为: %d", p / n);
	system("pause");
	return 0;
}

//4. 统计字符个数

//5. 各个位数数值相同求和

//int main() {
//	int n = 0, a = 2;
//	int k = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++) {
//		int j= pow(10, i);
//		k = k+ a*j;
//		sum = sum + k;
//		printf("k=%d\n", k);
//	}
//	printf("sum=%d\n", sum);
//	system("pause");
//	return 0;
//}

//求1-20阶乘的和

//int main() {
//	double sum = 0, t = 1;
//	int n;
//	for (n = 1; n <= 20; n++) {
//		t = t*n;
//		sum = sum + t;
//	}
//	printf("sum= %22.15d\n", sum);
//
//	system("pause");
//	return 0;
//}

//7.求和 1.100 k  1-50k^2  1-10 1/k

//int main() {
//	int n1 = 100, n2 = 50, n3 = 10, k = 1;
//	double s1 = 0, s2 = 0, s3 = 0;
//	for (int k=1; k <= n1; k+=1) {
//		s1 = s1 + k;
//	}
//	printf("s1= %f\n",s1);
//	for (int j=1; j <= n2; j+=1) {
//		s2 = s2 + j*j;
//	}
//	printf("s2= %f\n", s2);
//	for (int i=1; i <= n3; i+=1) {
//		s3 = s3 + (1 / i);
//	}
//	printf("s3=%f\n", s3);
//    printf("sum=%f\n", s1+s2+s3);
//	system("pause");
//	return 0;
//}

//8.水仙花数 

//int main() {
//	int a = 0, b = 0, c = 0;
//	for (int i = 100; i <1000; i +=1) {
//		a = i/100;  
//		b = i / 10 - a * 10; 
//		c = i % 10;
//		if (i == a*a*a + b*b*b + c*c*c) {
//			printf("%d%d%d\n", a, b, c);
//		}
//	}
//
//	system("pause");
//	return 0;
//}

//9.完数

//10.分数序列求和

//int main() {
//	int i, n = 20;
//	double a = 2, b = 1, s = 0, t;
//	for (i = 1; i <= n; i++) {
//		s = s + a / b;
//		t = a;
//		a = a + b;
//		b = t;
//	}
//	printf("sum=%.10f\n", s);
//	system("pause");
//	return 0;
//}

//11.球从100m掉下来 依次减半 第十次路程是多少米,第十次弹多高?

//int main() {
//	int i;
//	double metre = 100,t=100;
//	for (i = 1; i <= 10; i++) {
//		t = t / 2;
//		metre = metre + 2*t;
//	}
//	printf("metre=%f\nt=%f\n", metre,t);
//	system("pause");
//	return 0;
//}

//12.猴子吃桃问题

//int main() {
//	int t=1, n = 0;
//	for (n = 1; n <= 9; n++) {
//		t = t+2 * (n + 1);
//	}
//	printf("一共有%d个桃\n", t);
//	system("pause");
//	return 0;
//}

//16. 输出以下图案

//int main() {
//	int i, j, k;
//	for ( i = 0; i <= 3; i++) {
//		for (j = 0;j <= 2-i; j ++) {
//			printf(" ");
//		}
//		for (k = 0; k <= 2 * i; k++) {
//			printf("*");
//			printf("\n");
//		}
//	}
//	for (i = 0; i <= 2 * i; i++) {
//		for (j = 0; j <= i; j++) {
//			printf(" ");
//		}
//		for (k = 0; k <= 4 - 2 * i; k++) {
//			printf("*");
//			printf(" ");
//		}
//	}
//	system("pause");
//	return 0;
//}

//17.乒乓球比赛

//int main() {
//	char i, j, k; //a的点对手是i; j的对手是b ;k的对手是 c
//	for (i = 'x'; i <= 'z'; i++) {
//		for (j = 'x'; j <= 'z'; j++) {
//			if (i!=j)
//		}
//	}
//}