#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char str[10000],length;
int mmp(const void *a,const void *b){
	return (*(char *)a-*(char *)b);
}
int main(){
	scanf("%s",str);
	length=strlen(str);
	qsort(str,length,sizeof(str[0]),mmp);
	printf("%s",str);
}
//qsort×Ö·ûÅÅÐò 