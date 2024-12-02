#include <stdio.h>
#include <string.h>
/*set two f(first),l(last) start and end to reverse words*/
void reverse(char s[]);
void reverse(char s[]){
    char c;
    int f,l;
    for(f=0,l=strlen(s)-1;f<l;f++,l--)
        c=s[f],s[f]=s[l],s[l]=c;
    
}
int main(){
    char s[100]="Hello World!";
    reverse(s);
    printf("%s",s);
}
