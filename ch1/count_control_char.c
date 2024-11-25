#include <stdio.h>
int main(){
	int c;
	int b,t,n;
	b=t=n=0;
	while((c=getchar())!=EOF){
		if(c==' ') b++;
		else if(c=='\t') t++;
		else if(c=='\n') n++;
	}
	printf("blank:%d tab:%d new line:%d",b,t,n);
}
