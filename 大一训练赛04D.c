#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
	return (*(int *)a-*(int *)b);
}
int main(){
	int sum=0,cow[10002],i,cownum,time=0,median;
	double average;
	while(scanf("%d",&cownum)!=EOF){
	for(i=0;i<cownum;i++){scanf("%d",&cow[i]);sum+=cow[i];}
	average=sum*1.0/cownum;
	qsort(cow,cownum,sizeof(cow[0]),cmp);
//	median=cow[0];
//	if(cownum%2!=0){median=cow[(cownum-1)/2];}
//	else {median=(cow[cownum/2]+cow[cownum/2-1])/2;}
	printf("%d\n",cow[cownum/2]);}
}