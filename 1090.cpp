#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cmp(char *str,char *s,int l1,int l2){
	int flag=0;
	for(int i=0;i<l2;i++){
		if(str[0]==s[i]){//进行下面字符比对 
			flag=1;
			for(int t=1;t<l1;t++){
				if(str[t]!=s[i+t]){//不相等 
					flag=0;break;}
			}
			if(flag==1){
				//printf("111\n");
				return 1;break;}
		}
	}
	if(flag==0){
		return 0;
	}
}
int main(){
	int time,l1,l2,num=0;
	char str[100],s[100];
	gets(str);
	l1=strlen(str);
	scanf("%d",&time);
	getchar();
	while(time--){
		gets(s);
		l2=strlen(s);
		if(cmp(str,s,l1,l2)){
			num++;
		//	printf("%d\n",num);
		}
	}
	printf("%d\n",num);
}