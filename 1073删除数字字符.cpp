#include<stdio.h>
#include<string.h>
void f(char *str){
	int length=strlen(str);
	for(int i=0;i<length;i++){
		if(str[i]>='0'&&str[i]<='9'){
			for(int t=i;t<length;t++){
				str[t]=str[t+1];}
				i--;
		}
	}
}
int main(){
	char str[100];
	memset(str,0,sizeof(str[0])*100);
	gets(str);
	f(str);
	puts(str);
}