/*
 * main2.c
 *
 *  Created on: Mar 14, 2019
 *      Author: stingray
 */

/*
 * FirstProgram.c
 *
 *  Created on: 17 мая 2017 г.
 *      Author: ivanovcinnikov
 */
//Это тоже комментарий

#include <stdio.h>  // - это директива препроцессора с заголовочным файлом ввода вывода
//#include <stddef.h>

int main (int argc, const char* argv[]) { // // тип int функции main т.к. должна выводить целое число 0 по завершении
	printf("Hello World!");

	// типы форматирования
	// экранированная последовательность:
	// \n - символ новой строки \t - символ табуляции \\ - символ обратного слеша \0 - символ конца строки
	printf("\n");
	printf("This is a new \trow with tab");
	printf("This is a new row with tab \\ symbol\n");
	printf("Hello\0 World!");
	printf("\n");

	// заполнители:
	// %i %d %s %c %p %f %lf %x %%
	// %.2f
	// %05d
	int a = 50;
	printf("%d\n", a); // 50
	printf("text and%5d\n", a); // "text and   50"
	printf("text and%5d%%\n", a); // "text and   50%"
	printf("%05d\n", a); // "00050"
	printf("%05d%%\n", a); // "00050%"

	int number = -56; // 4 байта -2.147.000.000...+2.147.000.000
	unsigned int uint = 4000000000; // 4 байта 0...+4.291.000.000
	char simbol = 'A'; // знаковая переменная
	unsigned char simbol2 = 'A'; // 1 байт 0...+255
	float real = 5.345f; // 4 байта
	double realdouble = 5.345; // 8 байт
	// no boolean type;
	int true = 1;
	int false = 0;
	char sym = 75; // 1 байт -128...+127
	short sh = 345; // 2 байта - 32768...+32767

	// заполнител %p - адрес переменной,  & - для вывода адреса переменной или присваивание значанию
	printf("Переменная А имеет значение %d\n", a);
	printf("Переменная А хранится по адресу: %p\n", &a);
/*
	int input;
	printf("Введит, пожалуйста, число:\n");
	scanf("%d", &input);
	printf("Вы ввели число %d, мы удвоили его для Вас: %d\n", input, input*2);
*/
	// Базовые арифметические операции
	// + - * /
	// операции бинарной арифметики
	// &(и) |(или) !(не) ^(исключающее или) <<(сдвиг влево) >>(сдвиг вправо)

	int variable = 70;
	printf("Переменная variable %d\n", variable);
	// операции с последующим присваиванием в первый операнд
	variable = variable + 50;
	variable += 50;
	printf("К переменной variable дважды прибалено 50 и получилось %d\n", variable);
	variable = variable / 4; // игнорируется дробная часть от деления 42 вместо 42.5
	printf("Целочисленное деление переменной %d\n", variable);

	// оператор взятия по модулю - оператор получения остатка от деления
	int reminder = variable % 4;
	printf("Остаток от деления 170 на 4: %d\n", reminder);

	// операторы инкримента ++, операторы декримента --
	reminder++;
	printf("Инкримент ++: %d\n", reminder);
	reminder--;
	printf("Декримент --: %d\n", reminder);
	++reminder;
	printf("Инкримент ++: %d\n", reminder);
	--reminder;
	printf("Декримент --: %d\n", reminder);


	return 0;
}



