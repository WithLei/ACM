#include<stdio.h>
int main(){
	int i,time,grey,red,green,blue;
	scanf("%d",&time);
	for(i=0;i<time;i++){
		scanf("%d%d%d",&red,&green,&blue);
		//if(0<=red&&red<255&&0<=green&&green<255&&0<=blue&&blue<255){
			grey=(red*299.0+green*587.0+blue*114.0)/1000.0;
			printf("%d\n",grey);
		//}
	}
	}
	