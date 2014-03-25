#include<stdio.h>
#include<string.h>

int ehNr(char c) {
	return c >= 48 && c <= 57;
}

int checkArg(char *s) { //checa se o arguemto tem apenas nrs.
	int ok = 1;
	int len = strlen(s);
	int cont;

	for (cont = 0; cont < len; cont++)
		ok &= ehNr(s[cont]);

	return !ok;
}

int checkNr(char *s) { //checa se o argumento tem um nr > 0xFFFF

	int aux = atoi(s);

	if (!checkArg(s)) {
		if (aux > 0xFFFF) {
			fprintf(stderr, "Argumento fora do tamanho, %d > 0xFFFF\n\r", aux);
			return 2;
		} else
			return 0;
	} else {
		fprintf(stderr, "Argumento em formato errado: %s\n\r", s);
		return 3;
	}
}

int convert(char *ret, int nr) {
	sprintf(ret, "%d", nr);
	return 0;
}

int toChar(char *s, char *ret) {

	int nr = atoi(s);
	int nr1, nr2;
	int erro = 0;

	erro = checkNr(s);

	if (!erro) {
		nr1 = nr & 0xFF;
		nr2 = (nr & 0xFF00) >> 8;
		ret[0] = (char) nr1;
		ret[1] = (char) nr2;
		ret[2] = '\0';
	} else
		ret[0] = '\0';

	return erro;
}

int main(int argc, char **argv) {

	char s[30];
	int cont;
	int erro;

	if (argc < 2) {
		fprintf(stderr, "Erro: Faltando argumentos\n\r");
		return 1;
	} else {
		for (cont = 1; cont < argc; cont++) {
			erro = checkNr(argv[cont]);
			if (erro)
				return erro;
			else {
				toChar(argv[cont], s);
				printf("%s", s);
			}
		}
	}

	return 0;
}
