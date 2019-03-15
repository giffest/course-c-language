/*
 * main.c
 *
 *  Created on: Mar 14, 2019
 *      Author: stingray
 */

#include <stdio.h>

int main(int argc, const char* argv[]) {
/*	char answer;
	printf("Do you want me to salute you? (y/n)");
	scanf("%c", &answer);
	// единый оператор выбора
	if(answer == 'y') {
		printf("Hello, user!");
	} else {
		printf("I didn't want to salute you anyway!");
	}

	// множественный выбор
	if(answer == 'y') {
			printf("Hello, user!");
		} else if(answer == 'n') {
			printf("I didn't want to salute you anyway!");
		} else {
				printf("I can't understand you input!");
		}
*/
/*
	int a = 10;
	int b = 15;
	// тернарный оператор
	a = (a > b) ? b : a;
	if (a > b)
		a = b;
	else
		a = 0;
*/
	printf("\n%s", (1>0) ? "true" : "false");
	printf("\n");
	// операции сравнения: арифметическое, логическое, тернарный оператор
	// арифметические:
	// > < >= <= ==
	// логические:
	// && || ! ^
	if (1 && 0)  printf("false\n");
	if (1 || 0)  printf("true\n");
	if (!(1))  printf("false\n"); // не
	if (1 ^ 1)  printf("false\n"); // исключающее или

	// вложенные условия
/*	if (1) {
		if (1) {
			//...
		})
	}
*/
	// сложные условия - более одного сравнения
	printf("\n");
	int x = 7;
	if ((x >= 0) && (x <= 10)) {
		printf("X Fits!");
	}

	// Boolean Algebra
	// &(и) |(или) ^(не) <<(сдвиг влево) >>(сдвиг вправо)
	/*
	 * 1 & 0 = 0
	 * 1 | 0 = 1
	 * 0 ^ 1 = 1
	 * !1 = 0
	 */
	char a = 11;
	char b = 15;
	printf("\n");
	printf("a = %d, b = %d\n", a, b);
	a = a ^ b;			// a = 00000100
	// a = 11 (00001011)
	// b = 15 (00001111)
	// a ^ b = 00000100
	b = b ^ a;			// b = 00001011
	// b = 15 (00001111)
	// a = 4  (00000100)
	// a ^ b = 00001011
	a = a ^ b;			// a = 00001111
	// a = 4  (00000100)
	// b = 11 (00001011)
	// a ^ b = 00001111
	printf("a = %d, b = %d\n", a, b);

	a = a << 3;	// 15 * 8
	b = b >> 2; // 11 / 4

	printf("a = %d, b = %d", a, b);

	return 0;
}
