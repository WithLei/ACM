#include <stdio.h>
#include <math.h>
int ctsum(long m,long n,long sum){
		int i,t,x;
	for(x=m;x<=n;x++){ 
			for(i=0;i<sqrt(x);i++);
			for(t=2;t<=i;t++){
				if(x%t==0&&x!=t){sum-=x;break;} }
	}
	return sum;
}
int main(){
	long m,n,sum=0;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++){//计算mn之间的数总和
	sum+=i;}
	printf("%d\n",ctsum(m,n,sum));
}