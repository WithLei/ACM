#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int min(int a,int b){
	if(a<b)return a;
	else return b;
}

int main(){
	int cases,a,b,num[52][52];
	scanf("%d",&cases);
	while(cases--){
		memset(num,0,sizeof(num[0][0])*52);
		int range=0;
		scanf("%d%d",&a,&b);
		for(int i=0;i<a;i++){
			for(int ii=0;ii<b;ii++){
				scanf("%d",&num[i][ii]);
			}
		}
		
		for(int i=0;i<a;i++){
			for(int ii=0;ii<b;ii++){
				if(num[i][ii]>1) range+=num[i][ii]*4+1;
				else range+=num[i][ii]*5;
//printf("1..%d\n",range);
				if(i!=a-1&&num[i][ii]!=0){
					range-=min(num[i][ii],num[i+1][ii])*2;
//					printf("i==%d\n",i); 
				}
//printf("2..%d\n",range);
				if(ii!=b-1&&num[i][ii]!=0){
					range-=min(num[i][ii],num[i][ii+1])*2;
//					printf("ii==%d\n",ii); 
				}
//printf("3..%d\n",range);
				
				
				
				
			}
		}
		printf("%d\n",range);
		
		
		
	}
}