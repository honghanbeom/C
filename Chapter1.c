#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "Chapter1.h"

void Example1(){
	int a, b, c, d;
	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &a);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &b);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &c);
	printf("�� ��° ����� ���� �Է��ϼ��� ==> ");
	scanf("%d", &d);
	printf("%d + %d + %d + %d = %d",a,b,c,d, a+b+c+d);
}
void Example2() {
	int a, b, op, result;
	printf("ù ��° ����� ���� �Է��ϼ��� ==>");
	scanf("%d", &a);

	printf("<1>���� <2>���� <3>���� <4>������ ==>");
	scanf("%d", &op);


	printf("�� ��° ����� ���� �Է��ϼ��� ==>");
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
				printf("0���� ������ �ȵ˴ϴ�");
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
	printf("���� ���� (+�Ǵ�*) ==> ");
	scanf("%c", &c);
	printf("ù ��° �� ==> ");
	scanf("%d", &a);
	printf("�� ��° �� ==> ");
	scanf("%d", &b);
	printf("�� ��° �� ==> ");
	scanf("%d", &c);
	printf("%d + %d + %d = %d",a,b,c,a+b+c);
}
void Example4() {
	int a, b;
	printf("## �� ���� ������ ##\n");
	printf("ù ��° �� ==> ");
	scanf("%d", &a);
	printf("�� ��° �� ==> ");
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
				printf("�ٽ� �Է��ϼ���. �� ��° �� ==> ");
				scanf("%d", &temp);
				break;
			case 1:
				printf("�� �ٽ� �Է��ϼ���. �� ��° �� ==> ");
				scanf("%d", &temp);
				break;
			case 2:
				printf("0�� ���� �Է��߽��ϴ�. �����մϴ�");
				break;
			}
			tempCount++;
		}

		if (b != 0) {
			printf("%d / %d = %d", a, b, a / b);
		}
	}

}