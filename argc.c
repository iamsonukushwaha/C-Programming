#include<stdio.h>

int main(int argc, char* argv[]) {
	printf("Argument count : %d\n",argc);   // program name is also counted as an argument

	int i;
	if(argc == 1) {
		printf("No elements to display.\n");
	} else {
		printf("List of elements: \n");
		for(i=1;i<argc;i++) {
			printf("%s\n",argv[i]);
		}
	}

	return 0;
}