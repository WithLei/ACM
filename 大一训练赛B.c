#include<stdio.h>
int main(){
	int A,B,i,time=0,range=0;
	int num[]={153,370,371,407};
	
	while(scanf("%d%d",&A,&B)!=EOF){
		range=0;time=0;
		
		for(i=0;i<4;i++){
		if(A<=num[i]&&B>=num[i]){
				if(time==0){
			printf("%d",num[i]);time++;}
				else{
			printf(" %d",num[i]);}
			range=1;}}	
			
		if(range==0){printf("no");}
		printf("\n");
		
		}
		
}