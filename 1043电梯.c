#include<stdio.h>
int main(){
	int T,i,ii,N,M,people[21],sum=0;
	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d%d",&N,&M);
		for(ii=0;ii<N;ii++){scanf("%d",&people[ii]);sum+=people[ii];}
		if(sum<=M){printf("Safe\n");}else{printf("Warning\n");}sum=0;
	}
} 