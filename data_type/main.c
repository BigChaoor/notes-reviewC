#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	printf("sizeof(char)=%ld\n", sizeof(char));
	printf("sizeof(short)=%ld\n", sizeof(short));
	printf("sizeof(int)=%ld\n", sizeof(int));
	printf("sizeof(long)=%ld\n", sizeof(long));
	printf("sizeof(long long)=%ld\n", sizeof(long long));
	
	char c = 255;
	int i = 255;
	unsigned char u = 255U;
	printf("%d %d %d\n", c, i, u); 
	
	// ������ʽ���������
	int temp = -1;
	printf("temp = %u\n", temp); 
	
	// 8���ƺ�16����
	c = 012;
	i = 0x12;
	printf("c = %d, i = %d\n", c, i); 
	
	// ��������
	printf("%f\n", 1E-10);
	printf("%lf\n", 1E-10);
	printf("%.11f\n", 1E-10); 
	
	// �ַ�����
	char f, d;
	f = 1;
	d = '1';
	if (f == d){
		printf("���\n");
	} else {
		printf("�����\n"); 
	}
	 
	printf("�ֱ�������ߵ�Ӣ�ߺ�Ӣ�磬""������\"5  7\"��ʾ5Ӣ��7Ӣ�磺"); 
	
	
	return 0;
}

