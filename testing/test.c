#include <stdio.h>
#include <stdlib.h>

#define TRUE 1

int main(void){

	int num = 0;
	char input;

	while(TRUE){
		printf("%d - ",num);
		printf("Ulang lagi ? ");
		scanf("\n%s",&input);

		if((input == 'n') || (input == 'N')) break;
		else{ num++; continue; }
	}

	printf("program selesai\n");

	return EXIT_SUCCESS;
}
