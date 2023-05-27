#include<stdio.h>
/**
tic-tac-toe游戏
1 读入一个3*3矩阵，矩阵中的数字为1表示
该位置上个有一个X，为0表示为O
2 程序判断该矩阵中是否有获胜的一方，输出
表示获胜一方的字符X或O，或输出无人获胜 
**/

int main(void){

 const int size = 3;
 int board[size][size];
 int i,j;
 int numofX;
 int numofO;
 int result = -1;
 
 // 读入矩阵
 for ( i=0; i<size; i++ ){
 	for ( j=0; j<size; j++ ){
 		scanf("%d", &board[i][j]);
	 }
 } 
 
 // 检查行
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
 
// 检查列（和检查行的代码合并？board[j][i]） 
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

// 检查正对角线
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
// 检查反对角线
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
	printf("无人获胜"); 
}

return 0;
}

