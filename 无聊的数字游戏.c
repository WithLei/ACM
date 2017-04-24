#include<stdio.h>
#include<math.h>
int main(){
	int N,i,num1,num2;
	scanf("%d",&N);
	if(0<N&&N<=100000){
		for(i=1;i<=N;i++){
			num1=sqrt(i+100);
			num2=sqrt(i+268);
			if(num1*num1==(i+100)&&num2*num2==(i+268)){
				printf("%d\n",i);
			}
		}
	}
}