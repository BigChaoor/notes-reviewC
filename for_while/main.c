#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// ����ǹ̶�����
// �������ִ��һ�Σ���do {} while
// ���������while 
int main(int argc, char *argv[]) {
	int x;
	int n = 0;
	printf("��ʼ����һ������λ��������������Ҫ�������������\n");
	scanf("%d", &x);
	n++;  // ��֤����ȷ�ж�0��1λ 
	x /= 10;  // ���Ըĳ� do{  } while ();
	while ( x>0 ) {
		n++;
		x /= 10;
		printf("x = %d, n = %d\n", x, n); // �������е��� 
	}
	printf("%d\n", n); 
	
	// ������Ϸ
	srand(time(0)); 
	int number = rand()%100 + 1;  // rand()�ǿ⺯�� 
	int a = 0;
	int count = 0;
	printf("����(1~100)��Ϸ��ʼ��\n");
	do{
		printf("��������µ�����:\n");
		count++;
		scanf("%d", &a);
		if (a > number){
			printf("��µ�������");
		} else{
			printf("��µ���С��");
		} 
	} while(a != number);
	printf("��¶��ˣ��������%d����һ������%d��", a, count);
	
	// forѭ������׳� for(��ʼ����; ѭ������; ѭ����������)
	// ������forѭ����for == while
	int num;
	scanf("%d", &num);
	
	int fact = 1, i = 1;
	for ( i=1; i<=num; i++){
		fact *= i;
	} 
	printf("%d != %d", num, fact);
	
	return 0;
}

