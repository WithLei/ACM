#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int str[10000],n,i;
int mmp(const void *a,const void *b){
	return (*(int*)a-*(int*)b);//ÕıĞòÅÅÁĞ
 	//return (*(int*)b-*(int*)a);//ÄæĞòÅÅÁĞ
}
int main(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&str[i]);}
	qsort(str,n,sizeof(str[0]),mmp);
	for(i=0;i<n;i++){
		printf("%d",str[i]);}
	return 0;
}