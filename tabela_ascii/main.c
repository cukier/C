#include <stdio.h>
#include <stdlib.h>

int main() {

    unsigned int i;
    FILE *ofp;

    ofp = fopen("cuki.txt", "w");
    if(ofp != NULL) {
        for(i = 0; i <= 255; i++) {
            fprintf(ofp, "%4d:%c ", i, i);
            if(!(i % 10)) {
                fprintf(ofp, "\n");
            }
        }
    }
    fclose(ofp);

    return 0;
}
