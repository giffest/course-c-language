/*
 * main.c
 *
 *  Created on: Mar 21, 2019
 *      Author: stingray
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ARRAY_LENGTH 10
#define NUMBER_AMOUNT 1000000
/*
#define boolean int
#define true 1
#define false 0
*/

int main (int argc, const char* argv[]) {
	//int a = ARRAY_LENGTH;
/*
	int array[ARRAY_LENGTH];
	array[0] = 10;
	array[1] = 20;
	//...

	int array2[5] = {0, 1, 2, 3, 4};
*/
	srand(time(NULL));
	int frequency[ARRAY_LENGTH] = {0};

	int a, i;
	for (i = 0; i < NUMBER_AMOUNT; i++) {
		a = rand() % ARRAY_LENGTH;
		frequency[a]++;
	}

	for (i = 0; i < ARRAY_LENGTH; i++) {
		printf("Number %d generated %6d (%5.2f%%) times \n", i, frequency[i], ((float)frequency[i]/NUMBER_AMOUNT * 100));
	}

	return 0;
}
