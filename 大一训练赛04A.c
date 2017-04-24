#include<stdio.h>
int main(){
	int i,time,ii,flag[200];
	char c;
	scanf("%d",&time);
	getchar();
	for(i=0;i<time;i++){
		flag[i]=0;
		for(ii=0;(c=getchar())!=EOF&&(c!='\n');ii++){
			if(c>='0'&&c<='9'){flag[i]++;}
			}
	}
	for(i=0;i<time;i++){
		printf("%d\n",flag[i]);
	}
}