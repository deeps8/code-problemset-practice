#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
void f(char** str_ptr)
{
    str_ptr++;
}
 
int main()
{
    char *str = (void *)malloc(100*sizeof(char));
    strcpy(str, "AMD_Challenge");
    f(&str);
    puts(str);
    free(str);
    return 0;
}
