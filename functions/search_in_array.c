# include<stdio.h>

int search( int key, int a[], int length )
{
	/**
	�ҳ�key������a�е�λ��
	@param key ҪѰ�ҵ�����
	@param a ҪѰ�ҵ�����
	@param length ����ĳ���
	@return ����ҵ�����������a�е�λ�ã��Ҳ����򷵻�-1 	
	**/ 
	int ret = -1;
	int i;
	for ( i=0; i<length; i++ ){
		if ( a[i] == key ){
			ret = i;
			break;
		}
	}
	return ret;
}

int main(){
	int a[] = {2,4,6,3,6,8,9,10,6,1,8,};
	int x;
	int loc;
	printf("�����һ�����֣�");
	scanf("%d", &x);
	loc = search(x, a, sizeof(a)/sizeof(a[0]));
	if ( loc != -1 ){
		printf("%d�ڵ�%d��λ����\n", x, loc);
	} else{
		printf("%d������\n", x);
	}
	
	return 0;
}


