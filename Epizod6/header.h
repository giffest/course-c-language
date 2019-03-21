/*
 * header.h
 *
 *  Created on: Mar 21, 2019
 *      Author: stingray
 */

#ifndef HEADER_H_
#define HEADER_H_

int isPrime(int number) {
	int d = 0, i = 1;
		while (i <= number) {
			if (number % i++ == 0)
				d++;
			else
				continue;

			if (d == 3) break;
		}
//		if (d == 2) return 1; else return 0;
//		return (d == 2) ? 1 : 0;
		return (d == 2);
}

#endif /* HEADER_H_ */
