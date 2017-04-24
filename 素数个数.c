#include <stdio.h>
#include <math.h>
int main(){
	int N,i,t,x;
	scanf("%d",&N);
	int num=N-1;//num为素数个数，初始值为N-1 
	if(N>=1&&N<=10000){
		for(x=2;x<=N;x++){//，从2开始判断，x为当前判断数 
			for(i=0;i<sqrt(x);i++);//x最大整数开方i 
			for(t=2;t<=i;t++){//判断当前x是否为素数，若是则-1 
				if(x%t==0&&x!=t){num-=1;break;} }
	}printf("%d\n",num);
} 
}
//输入N（1=<N<=10000),统计在1~N之内有多少个素数。