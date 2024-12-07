#include <stdio.h>
#include <stdlib.h>
void strcpy_s(char* c,char *o);
int main(int argc, char *argv[])
{
    char a[]="Hiiii Hw's going";
    char b[1000];
    strcpy_s(b,a);
    printf("%s\n",b);
    return 0;
}
void strcpy_s(char* c,char *o){
    while(*c++=*o++) 
        ;
}
