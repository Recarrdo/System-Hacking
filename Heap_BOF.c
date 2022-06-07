#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    FILE* fd = fopen("secret","r");
    char* input = malloc(40);
    char* secret = malloc(40);
 
    fread(secret, 1, 40, fd);
    fclose(fd);
 
    read(0, input, 100);  // Overflow!
    printf("%s\n", input);
}
