#include <stdio.h>
#include <string.h>
#include <stdint.h>
int main(void) {
    int32_t x=5;
    printf("%d\n",x);
    int i = -1;
    if (i <(int) strlen("hello")) {
        printf("Hello, World\n");
    } else {
        printf("Hello, ziheng\n");
    
    }
    printf("%u\n",i);
    printf("%d\n",(int)strlen("hello"));
    printf("%llu\n",UINT64_MAX);
    return 0;
}
