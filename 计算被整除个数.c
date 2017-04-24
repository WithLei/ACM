#include <stdio.h>
#include <math.h>
int main(){
	int N,i,t;
	scanf("%d",&N);
	int num=N-1;
	if(N>=1&&N<=10000){
		for(i=0;sqrt(N)<i||sqrt(N)>(i+1);i++);//N最大整数开方i 
		for(t=1;t<=i;t++){
			if(N%t==0){
				printf("%d\n",t);
				num-=2;} }
	}printf("%d\n",num);
} 
//该程序计算的为N个数字内不能被整除的个数 