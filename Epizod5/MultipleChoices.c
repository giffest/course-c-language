/*
 * MultipleChoices.c
 *
 *  Created on: Mar 18, 2019
 *      Author: stingray
 */

#include <stdio.h>

int multiple_main() {
	float first;
	float second;
	int operator;
	printf("enter first operand: ");
	scanf("%f", &first);
	printf("\nenter 1 for +, 2 for -, 3 for *, 4 for / operations: ");
	scanf("%d", &operator);
	if (operator == 4) {
		do {
			printf("\nenter second operand: ");
			scanf("%f", &second);
		} while (second == 0);
	} else {
		printf("\nenter second operand: ");
		scanf("%f", &second);
	}
	float result;
	char c;
	switch (operator) {
		case 1:
			c = '+';
			result = first + second;
			printf("%f %c %f = %f", first, c, second, result);
			break;
		case 2:
			c = '-';
			result = first - second;
			printf("%f %c %f = %f", first, c, second, result);
			break;
		case 3:
			c = '*';
			result = first * second;
			printf("%f %c %f = %f", first, c, second, result);
			break;
		case 4:
			c = '/';
			result = first / second;
			printf("%f %c %f = %f", first, c, second, result);
			break;
		default:
			printf("Unknown operation!");
			break;
	}

	return 0;
}
