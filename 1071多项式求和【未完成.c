#include<stdio.h>
#include<math.h>
int main(){
	int a,n,i;
	float sum=0;
	scanf("%d%d",&a,&n);
	for(i=0;i<n;i++){
		sum=pow(10,n)*a+2*sum;
	}printf("%.0lf\n",sum);
}