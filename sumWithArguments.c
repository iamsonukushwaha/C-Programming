#include <stdio.h>
#include <stdlib.h>


int main(int argc, char* argv[]) {
	int i, sum = 0;
	if(argc == 1) {
		printf("No elements to add.\n");
	} else if(argc <= 2){ 
		printf("Give at least two numbers to add\n");
		} 
	else {
		for(i=1;i<argc;i++) {
			sum += atoi(argv[i]);
		}
		printf("Sum = %d\n",sum);
	}
	
	
	return 0;
}