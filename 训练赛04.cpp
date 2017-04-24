#include<stdio.h>
int main(){
	int N,M,num[45];
	num[0]=0,num[1]=1,num[2]=2;
	for(int i=3;i<41;i++){
		num[i]=num[i-1]+num[i-2];
	}
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%d",&M);
		printf("%d\n",num[M-1]);
	}
} 