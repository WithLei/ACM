#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int length,i;
	scanf("%s",str);
	length=strlen(str);
	for(i=0;i<length;i++){
		if(str[i]>='A'&&str[i]<'Z'){printf("%c",str[i]+1);}
		else if(str[i]=='Z'){printf("A");}
		else if(str[i]>='a'&&str[i]<'z'){printf("%c",str[i]+1);}
		else if(str[i]=='z'){printf("a");}
		else{printf("%c",str[i]);}
	}printf("\n");
}