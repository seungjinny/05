#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number;
	
	printf("������ �Է��Ͻÿ�:");
	scanf("%i", &number);
	
	if(number < 0) 
		number = number*(-1);
	
	printf("������ %i �Դϴ�.\n", number);
	
	return 0;
}
