#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// 如果是固定次数
// 如果必须执行一次，用do {} while
// 其他情况用while 
int main(int argc, char *argv[]) {
	int x;
	int n = 0;
	printf("开始计算一个数的位数，请输入你想要计算的正整数：\n");
	scanf("%d", &x);
	n++;  // 保证能正确判断0是1位 
	x /= 10;  // 可以改成 do{  } while ();
	while ( x>0 ) {
		n++;
		x /= 10;
		printf("x = %d, n = %d\n", x, n); // 代替逐行调试 
	}
	printf("%d\n", n); 
	
	// 猜数游戏
	srand(time(0)); 
	int number = rand()%100 + 1;  // rand()是库函数 
	int a = 0;
	int count = 0;
	printf("猜数(1~100)游戏开始：\n");
	do{
		printf("请输入你猜的数字:\n");
		count++;
		scanf("%d", &a);
		if (a > number){
			printf("你猜的数大了");
		} else{
			printf("你猜的数小了");
		} 
	} while(a != number);
	printf("你猜对了，这个数是%d，你一共猜了%d次", a, count);
	
	// for循环：求阶乘 for(初始条件; 循环条件; 循环变量计数)
	// 若能用for循环，for == while
	int num;
	scanf("%d", &num);
	
	int fact = 1, i = 1;
	for ( i=1; i<=num; i++){
		fact *= i;
	} 
	printf("%d != %d", num, fact);
	
	return 0;
}

