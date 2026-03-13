#include <string.h>
#include <stdio.h>
int main () {
	printf("Hello World!\n");
	char str [20] = "Hello";
	strcat (str, "World");
	printf("%s", str);
	return 0;
}

