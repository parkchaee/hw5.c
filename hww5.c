#include <stdio.h> 
int main(void)
{
	int arr[5];
	int hol[5];
	int jak[5];
	printf("5���� ������ �Է��ϼ���:");
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
	printf("Ȧ�� ���:");
	for (int i = 0;i < n;i++) {
		printf(" % d", hol[i]);
	}
	printf("\n");
	printf("¦�� ���:");
	for (int i = 0;i < m;i++) {
		printf(" % d", jak[i]);
	}
	return 0;
}
