#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

    int cont = 0;

    if(argc > 1) {

        int nr = (unsigned int) atoi(argv[1]);

        printf("%d\n", nr);
        for(cont = 0x8000; cont; cont >>= 1) {
            printf("%d", (cont & nr) ? 1 : 0);
        }
    } else {
        printf("Uso: int_to_bool.exe numero", argc);
    }

    return 0;
}
