#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number;
	
	printf("정수를 입력하시오:");
	scanf("%i", &number);
	
	if(number < 0) 
		number = number*(-1);
	
	printf("절댓값은 %i 입니다.\n", number);
	
	return 0;
}
