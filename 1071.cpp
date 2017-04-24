#include<stdio.h>
#include<math.h>
double ccl(int a,int i){
	double num=0;
	for(int t=0;t<i;t++){
		num+=pow(10,t)*a;
	}
	return num;
}
int main(){
	int a,n;
	double sum;
	while(~scanf("%d%d",&a,&n)){
		sum=0;
	for(int i=1;i<=n;i++){
		sum+=ccl(a,i);//i为当前位数 
	}	
	printf("%.0lf\n",sum);
	}
}