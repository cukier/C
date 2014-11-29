#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>

int navegar(char *caminho) {
    DIR *dp = NULL;
    struct dirent *dptr = NULL;
    
    dp = opendir(caminho);
    if(dp == NULL) {
        printf("\n Impossivel abrir %s", caminho);
        return 1;
    } else {
    	while (NULL != (dptr = readdir(dp))) {
			printf(" [%s] %d\n", dptr->d_name, dptr->d_type);
            if(strcmp(dptr->d_name, ".") == 0 || strcmp(dptr->d_name, "..") == 0) {
                navegar(dptr->d_name);
            }
		}
		closedir(dp);
	}
	return 0;
}

int main(void) {
    
	char *path = get_current_dir_name();
	
	if(navegar(path)) {
		return 1;
	} else {
		return 0;
	}
}