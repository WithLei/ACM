#include<stdio.h>
int main(){
	int N,i,num[100],num0,num1,num2,num3,num4,num5;
	num0=num1=num2=num3=num4=num5=0;
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&num[i]);
		switch(num[i]){
			case 0:num0++;break;
			case 1:num1++;break;
			case 2:num2++;break;
			case 3:num3++;break;
			case 4:num4++;break;
			case 5:num5++;break;
		}
	}printf("%d %d %d %d %d %d\n",num0,num1,num2,num3,num4,num5);
}