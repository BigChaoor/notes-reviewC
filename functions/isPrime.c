#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isPrime( int i ){
	int ret = 1;
	int k;
	for ( k = 2; k<sqrt(i)+1; k++ ){
		if ( i%k == 0 ){
			ret = 0;
			break;
		}
	}
	return ret;
}

void cheer( int );  // ԭ������ 

int main() {
	int m, n;
	int sum = 0;
	int cnt = 0;
	int i;
	
	scanf("%d %d", &m, &n);
	if (m == 1) m= 2;
	for ( i=m; i<=n; i++ ){
		if ( isPrime(i) ){
			sum += i;
			cnt++;
		}
	}
	printf("%d %d\n", cnt, sum);
	
	cheer(2.4);  
	/**���Ͳ���ȷ�����ᱻ�Զ�ת����int��ֵΪ2 
	C���Դ�ͳ������©��������  **/
	
	return 0;
}

void cheer( int i ){
	printf("cheer %d\n", i);
	return;
}

