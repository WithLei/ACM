#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int num1,num2,sum=0,flag=1,t,i; 
	srand(time(NULL));
	printf("#��ɫ����Ϸ\n");
	for(i=0;i<7;i++){
		printf("������һ������(0��6��Χ)\n");
		num1=rand()%6+1;
		scanf("%d",&num2);
		sum=num1+num2;
		if(flag==1){
		if(sum==7||sum==11){printf("Success\n");break;}
		else if(sum==2||sum==3||sum==12){printf("Fail\n");break;}
		else if(sum==4||sum==5||sum==6||sum==8||sum==9||sum==10){
			flag=0;t=sum;continue;}}
		if(flag==0){
			if(sum==t){printf("Success\n");break;}
		}
	}
	if(i==7){printf("Fail\n");}
} 
