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
	
	// �ֶκ�����Ƕ��if... else if...... else... 
	// else if ���� else { if ...} 
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
	
	// ��·��֧��switch-case
	int type;  // type���ͱ��������� 
	scanf("%d", &type);
	// switch ��if elseif ��ͬ������ʱ��ֱ����ת���ж���ȷ����һ�У���if elseif��������ж� 
	switch (type) {
		case 1:  // ���type��ֵ��1��ִ�к���Ĵ���� 
			printf("��ã�");
			break;  // ���û��break����˳��ִ�е�switch�������һ��ֱ������break��ת��ȥ
			// ����˳��ִ�е����������caseֻ��һ�����
			// �������case���ϵ����Ҫ��ͬ����ָ���������������ԣ����ʹ��break 
		case 2:
			printf("���Ϻã�");
			break;
		case 3:
			printf("�簲��");
			break;
		default:
			printf("���Ϻã�"); 
	} 
	
	// switch-caseӦ�����ӣ��ɼ�ת����ÿʮ��һ���ȼ���
	int grade = 0;
	printf("������ɼ���\n");
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
 
