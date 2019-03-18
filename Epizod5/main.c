/*
 * main.c
 *
 *  Created on: Mar 14, 2019
 *      Author: stingray
 */

#include <stdio.h>
#include <math.h>

int main (int argc, const char* argv[]) {

	int number = 71;
	printf("Input a number, please");
//	scanf("%d", &number);
	printf("\n");
	int d = 0, i = 1;
	while (i <= number) {
		if (number % i++ == 0)
			d++;
		else
			continue;

		if (d == 3) break;
	}
	printf("Введенное число %d %sявляется простым \n", number, (d==2) ? "" : "не ");

//	int i;
	int significative = 10;
	int base = 2;
	int result = 1;
	for (i = 0; i < significative; i++) {
		//result = result * base;
		result *= base;
	}
	printf("%d powered by %d is %d \n", base, significative, result);

	multiple_main();

	return 0;
}

