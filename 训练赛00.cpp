#include<stdio.h>
#include<math.h>
int main(){
	int time,num1,num2;
	double range;
	scanf("%d",&time);
	for(int i=0;i<time;i++){
		scanf("%d%d",&num1,&num2);
		if(num1%2==0||num2%2==0){range=num1*num2;}
		else range=num1*num2+sqrt(2)-1;
		printf("Scenario #%d:\n%.2lf\n\n",i+1,range);
	}
}