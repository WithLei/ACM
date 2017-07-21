#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int numcpy[100003]={0};

int cmp(const void *a,const void *b){
	return (*(int*)b-*(int*)a);
}

int work(int *num,int now,int n){
	int flag=0;
	int k=0,a=0;
	for(int i=0;i<now;i++){
//		printf("1.now==%d i==%d k==%d num[i]==%d numcpy[k]==%d\n",now,i,k,num[i],numcpy[k]);
		if(num[i]==numcpy[k])k++;
		else {if(a==0){k++,a++,i--;}else{flag=1;return 0;}}
	}
		for(int i=now+1;i<=n-1;i++){
//		printf("2.now==%d i==%d k==%d num[i]==%d numcpy[k]==%d\n",now,i,k,num[i],numcpy[k]);
			if(num[i]==numcpy[k])k++;
			else {if(num[now]==numcpy[k]&&a==0){k++,a++,i--;}else{flag=1;return 0;}}
	}
	
	if(flag==0)return 1;
}

int main(){
	int cases,n,num[100003];
	scanf("%d",&cases);
	while(cases--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		int flag=0;
		memset(numcpy,0,sizeof(numcpy[0])*100003);
		memcpy(numcpy,num,sizeof(numcpy[0])*n);
		qsort(numcpy,n,sizeof(numcpy[0]),cmp);
/*
		for(int i=0;i<3;i++){
		printf("numcpy==%d\n",numcpy[i]);
		printf("numcpy==%d\n",num[i]);
		}*/
		for(int i=0;i<n;i++){
			if(work(num,i,n)){
				flag=1;break;
			}
		}
		if(flag==0)printf("NO\n");
		else printf("YES\n");
	}
}