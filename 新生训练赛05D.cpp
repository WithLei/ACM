#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char str1[51],str2[51],save[51];
	int num,length,length2;
	scanf("%d",&num);
	for(int i=0;i<num;i++){
		memset(save,0,sizeof(save[0])*50);
		scanf("%s",str1);
		scanf("%s",str2);
		length=strlen(str1);
		for(int ii=0;ii<length/2;ii++){
			save[ii]=str1[ii];
		}
		strcat(save,str2);
		length2=strlen(save);
		for(int ii=length/2;ii<length;ii++,length2++){
			save[length2]=str1[ii];
		}
		printf("%s\n",save);
	}
}