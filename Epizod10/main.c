/*
 * main.c
 *
 *  Created on: Mar 21, 2019
 *      Author: stingray
 */


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

void printArray(int* array, int length) {
	int i;
	for (i = 0; i < length; i++)
			printf("%d ", array[i]);
}

float average(int* array, int length) {
	float result = 0;
	int i;
	for (i = 0; i < length; i++)
			result += *(array + i);
	return result / length;
}


void advancedArraysMain();

int main (int argc, const char* argv[]) {

	advancedArraysMain();

/*
	int arr[ARRAY_LENGTH];  // [ [][][][][][][][][][][] ]
	//arr[0] = 20;          // [ []                     ]
	//arr[1] = 50;          // [   []                   ]
	//arr[10] = 60;         // [                        ][]

	int i = 0;
//	float result = 0;
	while (i < ARRAY_LENGTH) {
		printf("Введите значение по %d:\n", i);
		scanf("%d", arr + i);
		i++;
	}
	printf("Наш массти:");
*/
/*	for (i = 0; i < ARRAY_LENGTH; i++)
		printf("%d ", arr[i]);
*/
/*
	printArray(arr, ARRAY_LENGTH);

	printf("\n И среднее арифметическое: ");
*/
/*	for (i = 0; i < ARRAY_LENGTH; i++)
		result += *(arr + i);
*/
/*
	//printf("%f \n", result / ARRAY_LENGTH);
	printf("%f \n", average(arr, ARRAY_LENGTH));
*/

	//int a = ARRAY_LENGTH;
/*
	int array[ARRAY_LENGTH];
	array[0] = 10;
	array[1] = 20;
	//...

	int array2[5] = {0, 1, 2, 3, 4};
*/
/*
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
*/

	return 0;
}
