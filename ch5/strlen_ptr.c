#include <stdio.h>
size_t strlen_ptr(char* s);
int main(int argc, char *argv[])
{
    printf("%zu\n",strlen_ptr("HelloWorld"));
    return 0;
}
size_t strlen_ptr(char* s){
    char* p=s;
    while(*p!='\0') p++;
    return p-s;
}
