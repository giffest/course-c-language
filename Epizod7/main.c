/*
 * main.c
 *
 *  Created on: Mar 21, 2019
 *      Author: stingray
 */

#include <stdio.h>

void swap_variables(int *x, int *y) { // void - так как фукнция ничего не возращает
	//*x = 50;
	//*y = 40;
	*x ^= *y;
	*y ^= *x;
	*x ^= *y;
}

int main(int argc, const char* argv[]) {
	int a = 50;
	printf("value if a is %d \n", a);
	printf("address of a is %p \n", &a); // разыменовывание
	int * pointer;
	pointer = &a;
	printf("value if a is %d \n", pointer);
	printf("address of a is %p \n", &pointer);

	printf("variable 'pointer' points at: %d \n", *pointer);
	*pointer = 70;
	printf("value if a is %d \n", a);

	int first = 50;
	int second = 40;
	printf("first = %d, second = %d \n", first, second);
	swap_variables(&first, &second);
	printf("first = %d, second = %d \n", first, second);

	return 0;
}
