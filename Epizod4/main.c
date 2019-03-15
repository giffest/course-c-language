/*
 * main.c
 *
 *  Created on: Mar 14, 2019
 *      Author: stingray
 */

#include <stdio.h>

int main (int argc, const char* argv[]) {
	int a = 10;
	int b = 20;
	// цикл с предусловием
	// цикл while используется когда мы не знаем сколько нужно выполнить итераций
/*
	while (a < b) {
		printf("%d ", a);
		a++;
	}
*/
	int even = 0;
	while (a < b) {
		if(a % 2 == 0)
			even++;
		a++;
	}
	printf("There are %d even numbers is sequence\n", even); //

	// цикл с постусловием
	int input;
	do {
		printf("Enter a divider for 100 (remember, that you can't divide by zero)\n");
		scanf("%d", &input);
	} while(input == 0);

	printf("100 / %d = %d\n", input, 100 / input);
	printf("and the reminder will be %d, by the way", 100 % input);


	return 0;
}

