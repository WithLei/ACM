#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int hui(char *m,int length){
	int flag=0;
	if(length%2==0){
		for(int i=0;i<length/2;i++){
			if(m[i]!=m[length-i-1]){flag=1;break;}
		}
	}
	else{
		for(int i=0;i<=length/2;i++){
			if(m[i]!=m[length-i-1]){flag=1;break;}
		}
	}
	if(flag==1){return 0;}
	else if(flag==0){return 1;}
	
}
int main(){
	char m[50];
	gets(m);
	int length=strlen(m);
	printf("%d\n",hui(m,length));
}