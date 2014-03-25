// #include <stdio.h>

// int main()
// {
	// char buffer[48];

	// buffer[0] = '\0';
	// printf("The buffer contains \"%s\"\n",buffer);
	// return 0;
// }

#include <stdio.h>
#include <string.h>

#define BUF_LEN 48

// int main()
// {
	// char buffer[BUF_LEN];

	// memset(buffer,'\0',BUF_LEN);
	
	// printf("The buffer contains \"%s\"\n",buffer);
	// return 0;
// }

// #include <stdio.h>
// #include <string.h>

// #define BUF_LEN 48

int main()
{
	char buffer[BUF_LEN];

	bzero(buffer,BUF_LEN);
	
	printf("The buffer contains \"%s\"\n",buffer);
	return 0;
}