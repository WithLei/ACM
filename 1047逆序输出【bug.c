#include<stdio.h>
int main(){
	int c,i;
	char str[250];
	for(i=0;(c=getchar())!='0';i++){str[i]=c;}//str[i]Ϊ���ո�λ�� 
	for(i=i-2;i>=0;i--){printf("%c",str[i]);}
	printf("\n");
}
//bug�ڶ�ȡ��0�ͻ��ж��������
//��������10 