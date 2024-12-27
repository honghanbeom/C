#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Chapter1.h"

void Example1(){
	int a, b, c, d;
	printf("첫 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &a);
	printf("두 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &b);
	printf("세 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &c);
	printf("네 번째 계산할 값을 입력하세요 ==> ");
	scanf("%d", &d);
	printf("%d + %d + %d + %d = %d",a,b,c,d, a+b+c+d);
}
void Example2() {
	int a, b, op, result;
	printf("첫 번째 계산할 값을 입력하세요 ==>");
	scanf("%d", &a);

	printf("<1>덧셈 <2>뺄셈 <3>곱셈 <4>나눗셈 ==>");
	scanf("%d", &op);


	printf("두 번째 계산할 값을 입력하세요 ==>");
	scanf("%d", &b);
	
	switch (op) {
		case 1:
			result = a + b;
			printf("%d + %d = %d", a, b, result);
			break;
		case 2:
			result = a - b;
			printf("%d - %d = %d", a, b, result);
			break;
		case 3:
			result = a * b;
			printf("%d * %d = %d", a, b, result);
			break;
		case 4:
			if (b == 0) {
				printf("0으로 나누면 안됩니다");
				break;
			}
			result = a / b;
			printf("%d / %d = %d", a,b,result);
			break;
	}

}
void Example3() {
	int a, b, c;
	char op;
	printf("연산 선택 (+또는*) ==> ");
	scanf("%c", &c);
	printf("첫 번째 값 ==> ");
	scanf("%d", &a);
	printf("두 번째 값 ==> ");
	scanf("%d", &b);
	printf("세 번째 값 ==> ");
	scanf("%d", &c);
	printf("%d + %d + %d = %d",a,b,c,a+b+c);
}
void Example4() {
	int a, b;
	printf("## 두 수를 나누기 ##\n");
	printf("첫 번째 값 ==> ");
	scanf("%d", &a);
	printf("두 번째 값 ==> ");
	scanf("%d", &b);

	int tempCount = 0;
	int temp;

	if (b != 0) {
		printf("%d / %d = %d",a,b,a/b);
	}
	else {
		while (tempCount <= 3) {
			switch (tempCount) {
			case 0:
				printf("다시 입력하세요. 두 번째 값 ==> ");
				scanf("%d", &temp);
				break;
			case 1:
				printf("또 다시 입력하세요. 두 번째 값 ==> ");
				scanf("%d", &temp);
				break;
			case 2:
				printf("0을 세번 입력했습니다. 종료합니다");
				break;
			}
			tempCount++;
		}

		if (b != 0) {
			printf("%d / %d = %d", a, b, a / b);
		}
	}

}