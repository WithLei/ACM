#include <stdio.h>
#include <math.h>
int main(){
	int N,i,t;
	scanf("%d",&N);
	int num=N-1;
	if(N>=1&&N<=10000){
		for(i=0;sqrt(N)<i||sqrt(N)>(i+1);i++);//N�����������i 
		for(t=1;t<=i;t++){
			if(N%t==0){
				printf("%d\n",t);
				num-=2;} }
	}printf("%d\n",num);
} 
//�ó�������ΪN�������ڲ��ܱ������ĸ��� 