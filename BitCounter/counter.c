/*
 * counter.c
 *
 *  Created on: 04/11/2011
 *      Author: cuki
 */
#include <stdio.h>

char countBit(long value) {

	int retorno = 0;
	char contador = 0;

	for (contador = 0; contador < (8 * sizeof(long)); contador++) {

		if (value & 0x01)
			retorno++;
		value >>= 1;
	}
	return retorno;
}

int main(int argc, char **argv) {
	int i = 0xFFFFFFFF;

	printf("%c\n", (char) 0xFF);
	printf("%x\n", sizeof(char));
	printf("%d\n", countBit(i));

	i = 0xAA54;
	printf("%d\n", countBit(i));

	return 0;

}
