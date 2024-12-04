#include <stdio.h>
/*convert num to string*/

void ntos(int n);

 //1,12,123 %10 && add '0' value
void ntos(int n){
       if(n<0){
           putchar('-');
           n*=-1;
       }
       if(n/10) ntos(n/10);
       putchar(n%10 + '0');
}

int main(int argc, char *argv[])
{   
    int n=-798;
    ntos(n);    
    return 0;
}
