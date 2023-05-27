# include<stdio.h>

// 指针应用1：交换两个变量的值

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
 
 // 应用2：函数返回多个值，某些值只能通过指针返回 
 // 传入的参数需要保存带回的结果的变量 
 
 
