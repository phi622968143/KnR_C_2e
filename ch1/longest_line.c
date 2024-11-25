#include <stdio.h>
#define MAXLEN 1024

int gl(char s[],int l);//read string and return len
void cover(char to[],char from[]);//cover the max

int gl(char s[],int lim){
	int i,c;
	for(i=0; i<lim-1 && (c=getchar())!=EOF && c != '\n' ; i++)
		s[i]=c;
	if(c=='\n'){
		s[i]=c;
		++i;// add before return
	}
	s[i]='\0'; // EOL for %s to read
	return i;

}
// read until EOL
void cover(char to[],char from[]){
	int i=0;
	while(from[i]!='\0'){
		to[i]=from[i];
		++i;
	}
}
//return the longlest line
int main(){
	int len,max;
	char line[MAXLEN],maxline[MAXLEN];
	max=0;

	while((len = gl(line,MAXLEN) )>0){
		if(len>max){
			max=len;//update
			cover(maxline,line);
		}
	}
	if(max>0)
		printf("max line:%s\nlen:%d",maxline,max);
	return 0;
}
