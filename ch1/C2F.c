#include <stdio.h>

int main(){
	float C,F;
	float lower,upper,step;//can write in symbolic const
	lower=0;
	upper=100;
	step=1.5;
	C=lower;
	
	//table start
	printf("  C\t  F\n");
	while(C<=upper){
		printf("%5.1f \t %5.1f\n",C,(9.0/5.0)*C+32.0);
		C+=step;
	}
}
