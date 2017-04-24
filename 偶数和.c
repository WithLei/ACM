#include<stdio.h>
int main(){
	int N,i,sum=0;
	scanf("%d",&N);
	int a[N+1];
	for(i=0;i<N;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			sum+=a[i];}
		}printf("%d\n",sum);
} 