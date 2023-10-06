#define _CRT_SECURE_NO_WARNINGS  // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>
// # : 외부파일을 포함시키는 전처리기
// stdio.h : 


int main() { // void : 생략 가능
	// 변수 3가지
	// 클래스 변수 : static 이 붙는. 초기화 필요 없다 (자동으로 됨)
	// 인터벌 변수 : 
	// 지역 변수 : 함수 내에서만 사용 가능한 변수. 초기화 필요
	int a;
	int b;
	int sum;

	// a = 100;
	// b = 200;

	printf("첫번째 수 입력 : ");
	scanf("%d", &a);
	printf("두번째 수 입력 : ");
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