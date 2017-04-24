#include<stdio.h>
int main(){
	int c,i;
	char str[250];
	for(i=0;(c=getchar())!='0';i++){str[i]=c;}//str[i]为最后空格位置 
	for(i=i-2;i>=0;i--){printf("%c",str[i]);}
	printf("\n");
}
//bug在读取到0就会判断输入结束
//比如输入10 