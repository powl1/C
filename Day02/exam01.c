#define _CRT_SECURE_NO_WARNINGS  // scanf 보안 경고로 인한 컴파일 에러 방지
#include <stdio.h>

int main() {
	
	int x;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &x);

	printf("%d\n", x);
	printf("%o\n", x);
	printf("%x\n", x);


}