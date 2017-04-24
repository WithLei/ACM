#include<stdio.h>
#include<stdlib.h>
int main(){
	char str[202];
	int i,length;
	while(scanf("%s",str)!=EOF){
		length=strlen(str);
		for(i=0;i<length;i++){
			if(str[i]=='1'){str[i]='0';}else{str[i]='1';}
		//	printf("%s\n",str);
			memset(str,0,sizeof(str));
		//	printf("%s\n",str);
		}printf("%s\n",str);
	}
} 