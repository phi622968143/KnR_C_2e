#include <stdio.h>
//tot in countN won't dead after countN used.
void countN(int n);
int main(int argc, char *argv[])
{   
    int ppl;
    printf("pls add ppl come\n:");
    while(scanf("%d",&ppl)!=EOF){
        countN(ppl);
    }
    return 0;
}
 void countN(int n){
    static int tot=0;
    tot+=n;
    printf("%d\n",tot);
 }
