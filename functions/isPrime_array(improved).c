#include<stdio.h>
/**
构造素数表
令x为2
将2x 3x 4x直至ax<n的数标记为非素数
令x为下一个没有被标记为非素数的数，重复2；直到所有的数都试过 
**/

int main(void){
	const int N = 20;
	int isPrime[N];
	int i, j;
	int x = 2;
	for ( i=0; i<N; i++ ){
		isPrime[i] = 1;
	}	
	for ( x=2; x<N; x++ ){
		if ( isPrime[x] ){
			for ( i=2; i*x<N; i++ ){
				isPrime[i*x] = 0;
			}
		}
	}
	for ( i=2; i<N; i++ ){
		if (  isPrime[i] ){
			printf("%d\t", i);
		}
	}
	printf("\n");
	
	return 0;
}
