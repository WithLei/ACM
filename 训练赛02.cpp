#include<stdio.h>
int main(){
	int time,range,x,y,shit;
	scanf("%d",&time);
	for(int i=0;i<time;i++){
		shit=0;
	scanf("%d%d",&x,&y);
	if(x==y){
		if(x%2==0){range=2*x;}
		else range=2*x-1;
		shit=1;	
	}
	else if(x-2==y){
		if(x%2==0){range=x+y;}
		else range=x+y-1;
		shit=1;
	}
	else printf("No Number\n");	
	if(shit==1)printf("%d\n",range);
	}
}