#include<stdio.h>
int main(){
	int i,ii,N,M,t=1,sum[200],num[200];
	num[0]=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		sum[i]=0;
		scanf("%d",&M);
		for(ii=0;ii<M;ii++){
			scanf("%d",&num[t]);
			sum[i]+=num[t];
			t++;}
	}
	for(i=0;i<N-1;i++){
		printf("%d\n\n",sum[i]);
	}printf("%d\n",sum[N-1]);
}