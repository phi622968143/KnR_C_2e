#include <stdio.h>
#include "m.h"

int main(int argc, char *argv[])
{
    greeting();
    printf("in main a=%d\n",a);
    a=0;//no repeat def
    printf("in main a=%d\n",a);
    greeting();
    
    return 0;
}
