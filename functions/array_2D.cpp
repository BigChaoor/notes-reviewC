#include<stdio.h>
/**
tic-tac-toe��Ϸ
1 ����һ��3*3���󣬾����е�����Ϊ1��ʾ
��λ���ϸ���һ��X��Ϊ0��ʾΪO
2 �����жϸþ������Ƿ��л�ʤ��һ�������
��ʾ��ʤһ�����ַ�X��O����������˻�ʤ 
**/

int main(void){

 const int size = 3;
 int board[size][size];
 int i,j;
 int numofX;
 int numofO;
 int result = -1;
 
 // �������
 for ( i=0; i<size; i++ ){
 	for ( j=0; j<size; j++ ){
 		scanf("%d", &board[i][j]);
	 }
 } 
 
 // �����
 for ( i=0; i<size && result == -1; i++ ){
 	numofO = numofX = 0;
 	for ( j=0; j<size; j++ ){
 		if ( board[i][j] == 1 )
 			numofX ++;
 		else
 		    numofO ++;
	 }
 	if ( numofO == size){
 		result = 0;
	 } else if (numofX == size){
	 	result = 1;
	 }
 } 
 
// ����У��ͼ���еĴ���ϲ���board[j][i]�� 
if ( result == -1 ) {
 for ( j=0; j<size && result == -1; j++ ){
 	numofO = numofX = 0;
 	for ( i=0; i<size; i++ ){
 		if ( board[i][j] == 1 )
 			numofX ++;
 		else
 		    numofO ++;
	 }
 	if ( numofO == size){
 		result = 0;
	 } else if (numofX == size){
	 	result = 1;
	 }
 }
}

// ������Խ���
numofO = numofX = 0;
for ( i=0; i<size; i++ ){
	if ( board[i][j] == 1 ){
		numofX ++;
	} else {
		numofO ++;
	}
} 
if ( numofO == size ){
	result = 0;
} else if (numofX == size){
	result = 1;
}
// ��鷴�Խ���
numofO = numofX = 0;
for ( i=0; i<size; i++ ){
	if (board[i][size-i-1] == 1){
		numofX++;
	} else {
		numofO++;
	}
}

if ( result == 1 ){
	printf("X\n"); 
} else if (result == 0){
	printf("O\n");
} else {
	printf("���˻�ʤ"); 
}

return 0;
}

