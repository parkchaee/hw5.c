#include <stdio.h> 
int main(void)
{
	int arr[5];
	int hol[5];
	int jak[5];
	printf("5개의 정수를 입력하세요:");
	for (int j = 0;j < 5;j++)
	{
		scanf_s("%d", &arr[j]);
	}
	printf("\n");
	int m = 0;
	int n = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			jak[m] = arr[i];
			m++;
		}
		if (arr[i] % 2 != 0) {
			hol[n] = arr[i];
			n++;
		}
	}
	printf("홀수 출력:");
	for (int i = 0;i < n;i++) {
		printf(" % d", hol[i]);
	}
	printf("\n");
	printf("짝수 출력:");
	for (int i = 0;i < m;i++) {
		printf(" % d", jak[i]);
	}
	return 0;
}
