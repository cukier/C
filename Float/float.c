/*
 * float.c
 *
 *  Created on: 09/11/2011
 *      Author: cuki
 */
#include <stdio.h>

float degrees;

float convDPS(short int toConvert) {

	float converted;
	converted = toConvert * (float) 100 / (float) 0x2CA4;

	return converted;
}

int main(int argc, char **argv) {

	int i;
	char *p;

	for(i = 0; i < argc; i++){
		printf("\n%s  %d", argv[i], atoi(argv[i]));
	}

	*p = argv[1];
	for(;)

	return 0;
}

