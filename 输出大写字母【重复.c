#include<stdio.h>
#include<string.h>
int main(){
	char str[1000],a[1000];
	int i,c,ii=0,length;
	for(i=0;(c=getchar())!=EOF&&c!='\n';i++){
		str[i]=c;
		if('A'<=str[i]&&str[i]<='Z'){
			a[ii]=str[i];ii++;}
	}
	length=strlen(a)-1;
	for(i=0;i<length-1;i++){
		printf("%c ",a[i]);}
	printf("%c\n",a[length-1]);
}

