#include <stdio.h>
#include <stdlib.h>

int find(int* a,int n){
	for (int i = 1; i < n; ++i){
		a[0] = a[0] ^ a[i];
	}
	return a[0];
}

int main(){
	int a[] = { 1, 2, 1, 3, 3, 4, 4 };
	int size = sizeof(a) / sizeof(a[0]);
	printf("%d\n",find(a, size));

	system("pause");
	return 0;
}

//int main()
//{
//	int arr[] = { 1, 3, 3, 1, 4, 6, 4, 5, 5 };
//	int i = 0;
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	for (i = 1; i<len; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("the single number is:%d", arr[0]);
//
//	system("pause");
//	return 0;
//}