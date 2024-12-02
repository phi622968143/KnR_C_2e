#include <stdio.h>
// only print single blank
int main(){
	int c,b = 0;
	while( (c = getchar()) != EOF){
		if(c == ' ') {
			b++;		
			if(b == 2){
				c = 0; //null
				b = 0;
			} 
		}
		putchar(c);	
	}	
}
