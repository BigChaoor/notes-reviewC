#include<stdio.h>
/**
����������
��xΪ2
��2x 3x 4xֱ��ax<n�������Ϊ������
��xΪ��һ��û�б����Ϊ�������������ظ�2��ֱ�����е������Թ� 
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
