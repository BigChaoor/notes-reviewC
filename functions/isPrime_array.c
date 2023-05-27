#include<stdio.h>

// 判断x是否素数，若是素数，返回1 (true) 
int isPrime(int x, int knownPrimes[], int numberofKnownPrimes)
{
	int ret = 1;
	int i;
	for ( i=0; i<numberofKnownPrimes; i++ ){
		if ( x % knownPrimes[i] == 0 ){
			ret = 0;
			break;
		}
	}
	return ret;
}

int main(void){
	const int NUMBER = 100;
	int prime[100] = {2}; 
	int count = 1;
	int i = 3;
	while ( count < NUMBER ){
		if ( isPrime(i, prime, count) ){
			prime[count++] = i;  //编代码套路 
		}
		i++;
	} 
	for ( i=0; i<NUMBER; i++ ){
		printf( "%d", prime[i] );
		if ( (i+1)%5 )  printf("\t");
		else printf("\n");
	}
	return 0;
}
