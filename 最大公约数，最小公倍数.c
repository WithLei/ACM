#include<stdio.h>
int main(){
	int m,n,r,min,max;
	scanf("%d%d",&m,&n);
	if(m>0&&n>0){
		if(m<n){r=m;m=n;n=r;}
		min=n;max=m;
		while(n!=0){
			r=m%n;m=n;n=r;
		}
		printf("%d %d\n",m,max*min/m);
	}
}