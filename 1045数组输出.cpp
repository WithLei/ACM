#include<stdio.h>
int main(){
	int N,i,M,a[100],range=0,time;
	while(scanf("%d",&N)!=EOF){
		time=0;
	for(i=0;i<N;i++){scanf("%d",&a[i]);}
	scanf("%d",&M);
	for(i=0;i<N;i++){
		if(a[i]>M&&time==1){printf(" %d",a[i]);}
		if(a[i]>M&&time==0){printf("%d",a[i]);time=1;range=1;}
	}
	if(range==0){printf("NO");}
	printf("\n");
	range=0;
} }
