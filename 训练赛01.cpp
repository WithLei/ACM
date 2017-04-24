#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a,const void *b){
	return (*(int *)a-*(int *)b);
}
int main(){
	int time,pole,ant,num[2000];
	scanf("%d",&time);
	for(int i=0;i<time;i++){
		scanf("%d%d",&pole,&ant);
		for(int t=0;t<ant;t++){scanf("%d",&num[t]);}
		qsort(num,ant,sizeof(num[0]),cmp);
		printf("%d %d\n",pole-num[ant-2],pole-num[0]);
	}
}