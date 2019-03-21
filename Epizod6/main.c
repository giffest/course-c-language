/*
 * main.c
 *
 *  Created on: Mar 21, 2019
 *      Author: stingray
 */

#include <stdio.h> // ищет там где компилятор
#include "header.h" // если "", то ищет в папке проекта

int sum(int x, int y) {
	int result = x + y;
	return result;
}

//int isPrime(int number); // прототип функции, если фукнция не описана до точки входа

int main (int argc, const char* argv[]) {
	// тело функции
	int a;
	printf("Введите число: ");
	scanf("%d", &a);
	//sum(50, a);
	printf("%d\n", sum(50, a));

	int num = 71;
	printf("Введенное число %d %sявляется простым \n", num, isPrime(num) ? "" : "не ");

	return 0;
}
