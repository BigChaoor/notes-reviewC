# include<stdio.h>

// ָ��Ӧ��1����������������ֵ

void swap(int *pa, int *pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
 } 
 
 int main(void){
 	int a=6, b=5;
 	swap(&a, &b);
 	printf("a = %d, b = %d\n", a, b);
 	
 	return 0;
 }
 
 // Ӧ��2���������ض��ֵ��ĳЩֵֻ��ͨ��ָ�뷵�� 
 // ����Ĳ�����Ҫ������صĽ���ı��� 
 
 
