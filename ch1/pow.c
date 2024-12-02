#include <stdio.h>
int power(int b ,int n);    
int main(int argc, char *argv[])
{
    printf("%d\n",power(3,10));
    return 0;
}

int power(int b,int n){
    int i,p=1;
    for ( i = 0;  i < n; ++ i) {
         p*=b;

    }
    return p;
} 
