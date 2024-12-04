#include <stdio.h>
int strl(char *s);
int main(int argc, char *argv[])
{
    printf("len of world : %d",strl("Hello world"));
    return 0;
}
int strl(char *s){
    int n;
    for(n=0;*s!='\0';s++)
        n++;
    return n;
}
