#include<stdio.h>
int main()
{
    unsigned int a=1;
    char *c = (char*)&a;
    if(*c)
        printf("Little Endlian");
    else 
        printf("Big Endian");
    return (0);
}