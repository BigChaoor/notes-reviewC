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
	
	// 整数格式化输入输出
	int temp = -1;
	printf("temp = %u\n", temp); 
	
	// 8进制和16进制
	c = 012;
	i = 0x12;
	printf("c = %d, i = %d\n", c, i); 
	
	// 浮点类型
	printf("%f\n", 1E-10);
	printf("%lf\n", 1E-10);
	printf("%.11f\n", 1E-10); 
	
	// 字符类型
	char f, d;
	f = 1;
	d = '1';
	if (f == d){
		printf("相等\n");
	} else {
		printf("不相等\n"); 
	}
	 
	printf("分别输入身高的英尺和英寸，""如输入\"5  7\"表示5英尺7英寸："); 
	
	
	return 0;
}

