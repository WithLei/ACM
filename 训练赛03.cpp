#include<stdio.h>
int main(){
	int n;
	double num[52];
	num[0]=1,num[1]=2;
	for(int i=2;i<51;i++){
		num[i]=num[i-1]+num[i-2];
	}
	while(scanf("%d",&n)!=EOF){
	printf("%.0lf\n",num[n-1]); 
	} 
}