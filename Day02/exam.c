#define _CRT_SECURE_NO_WARNINGS  // scanf ���� ���� ���� ������ ���� ����
#include <stdio.h>
// # : �ܺ������� ���Խ�Ű�� ��ó����
// stdio.h : 


int main() { // void : ���� ����
	// ���� 3����
	// Ŭ���� ���� : static �� �ٴ�. �ʱ�ȭ �ʿ� ���� (�ڵ����� ��)
	// ���͹� ���� : 
	// ���� ���� : �Լ� �������� ��� ������ ����. �ʱ�ȭ �ʿ�
	int a;
	int b;
	int sum;

	// a = 100;
	// b = 200;

	printf("ù��° �� �Է� : ");
	scanf("%d", &a);
	printf("�ι�° �� �Է� : ");
	scanf("%d", &b);

	sum = a + b;
	printf("%d + %d = %d\n", a, b, sum);

	sum = a - b;
	printf("%d - %d = %d\n", a, b, sum);

	sum = a * b;
	printf("%d * %d = %d\n", a, b, sum);

	sum = a / b;
	printf("%d / %d = %d\n", a, b, sum);

}