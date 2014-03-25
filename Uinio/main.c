#include <stdio.h>

union Data{
	long inteiro;
	float flutuante;
};

int main(int argc, char **argv) {
	
	union Data data;
	
//	data.flutuante = 15;
	data.inteiro = 0xFEEE4107;
	
	printf("0x%lX", data.inteiro);
	printf("\n\r%.2lf", data.flutuante);
	
	return 0;
}
