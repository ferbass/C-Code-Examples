/* Calcules fatorial of given number
 *
 * complile with gcc -std=gnu99 -o fatorial
 *
 *
 * This code is bugged and needs to be improved.
 * Works with numbers between 1-25.
 *
 * */

#include <stdlib.h>
#include <stdio.h>

long long int fatorial(long long int fat);

int main(){

	long long int result, fat;
	printf("Fatorial Program\n");
	printf("Insert a number (1-25): ");
	scanf("%lld", &fat);
	result = fatorial(fat);
	printf("Result %lld\n", result);
	exit(EXIT_SUCCESS);
}

long long int fatorial(long long int fat){
	if( fat <= 1 )
		return 1;
	else
		return fat * fatorial(fat - 1);
}

