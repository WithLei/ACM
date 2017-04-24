#include<stdio.h>
int main(){
	int n,i,a,sum=0;
	int range[1000];
	while(scanf("%d",&n)!=EOF){
		for(a=1;a<n+1;a++){
			range[a]=1;
		for(i=1;i<a+1;i++){//当前数n的阶乘 
			range[a]*=i;}}
		for(a=1;a<n+1;a++){
		sum+=range[a];}
		printf("%d\n",sum);
		sum=0;
	}
} 