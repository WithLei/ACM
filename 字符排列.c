#include<stdio.h>
#include<string.h>
int main(){
	int length,i,j;
	char t,str[100];
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i<length-1;i++){
		for(j=1;j<length-i-2;j++){
			if(str[j]<str[j+1]){
				t=str[j];
				str[j]=str[j+1];
				str[j+1]=t;}
		}
	}printf("%s\n",str);
}