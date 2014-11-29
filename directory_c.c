#include <stdio.h>
#include <sys/stat.h>
#include <dirent.h>

int main(void) {
	
	char path[] = "/home/cuki";
	DIR *dp = NULL;
	struct dirent *dptr = NULL;
	
	dp = opendir(path);
	
	if(dp == NULL) {
		printf("\n Cannot open dir [%s]\n", path);
		return 1;
	} else {
		while (NULL != (dptr = readdir(dp))) {
			printf(" [%s] %d\n", dptr->d_name, dptr->d_type);
		}
		closedir(dp);
	}
	
	return 0;
}