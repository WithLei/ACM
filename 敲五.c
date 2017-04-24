#include<stdio.h>
#include<string.h>
int main(){
	int M,i,ii,length,time=0;
	char num[1000];
	scanf("%d",&M);
	for(i=0;i<M;i++){
		scanf("%s",num);
		if(num[0]=='0'){continue;}
		length=strlen(num);
		for(ii=0;ii<length;ii++){
			if(num[ii]=='5'){time+=1;break;}
			else if(num[length-1]=='0'){time+=1;break;}
		}
	}printf("%d\n",time);
} 

//每次会将之前的数组重新覆盖 