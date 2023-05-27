#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int hour1, minute1;
	int hour2, minute2;
	
	printf("Input the time:\n");
	scanf("%d %d", &hour1, &minute1);
	scanf("%d %d", &hour2, &minute2);
	
	int n = minute2 - minute1;
	int i = hour2 - hour1;
	if (i>0){
		if (n < 0){
		n = 60 + n;
		i--;
		}
		printf("time minus is %d hours and %d minutes", i, n);
	}
	else{
			printf("inputs is wrong");
	}	
	
	// 分段函数：嵌套if... else if...... else... 
	// else if 代替 else { if ...} 
	 float x = 0, f = 0.0;
	 scanf("%f", &x);
	 if (x<0) {
	 	f = -1.0;
	 } else if (x == 0){
	 	f = 0.0;
	 } else {
	 	f = 2*x;
	 }
	printf("%f", f); 
	
	// 多路分支：switch-case
	int type;  // type类型必须是整型 
	scanf("%d", &type);
	// switch 和if elseif 不同，运行时会直接跳转到判断正确的那一行，而if elseif会做逐个判断 
	switch (type) {
		case 1:  // 如果type的值是1，执行后面的代码块 
			printf("你好！");
			break;  // 如果没有break，会顺序执行到switch语句块的下一行直到遇到break跳转出去
			// 或者顺序执行到代码结束，case只是一个入口
			// 如果两个case以上的情况要做同样的指令，可以利用这个特性，灵活使用break 
		case 2:
			printf("早上好！");
			break;
		case 3:
			printf("午安！");
			break;
		default:
			printf("晚上好！"); 
	} 
	
	// switch-case应用例子：成绩转换（每十分一个等级）
	int grade = 0;
	printf("请输入成绩：\n");
	scanf("%d", &grade);
	grade /= 10;
	switch (grade){
		case 10:
		case 9:
			printf("You get a A\n");
			break;
		case 8:
			printf("B\n");
			break;
		case 7:
			printf("C\n");
			break;
		case 6:
			printf("D\n");
			break;
		default:
			printf("E\n");
	} 
	 
	return 0;
}
 
