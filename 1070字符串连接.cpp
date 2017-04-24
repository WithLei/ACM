#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void f(char *str,char *cpystr,int length){
for(int i=length-1;i>=0;i--){
	cpystr[i]=str[length-i-1];
}
for(int i=length;i<2*length;i++){
	str[i]=cpystr[i-length];
}
}
int main(){
	char str[100],cpystr[100];
	memset(cpystr,0,sizeof(cpystr[0])*100);
	memset(str,0,sizeof(str[0])*100);
	gets(str);
	int length=strlen(str);
	f(str,cpystr,length);
	puts(str);
}