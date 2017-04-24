#include<stdio.h>                                            
#include<stdlib.h>                                           
#include<time.h>
int last;
int cmp(const void *a,const void *b){
	return (*(int*)a-*(int*)b);//正序排列
}                                            
int main(){                                                   
	int num,input,i,score[200];                                          
	srand(time(NULL));
	for(i=0;i<10;i++){                                     
	num=rand()%100+1;                                         
	printf("第%d次游戏：猜数游戏\n请输入一个数字：\n",i+1);                   
	for(score[i]=100;score[i]>0;score[i]-=10){                                         
		scanf("%d",&input);                                     
	if(input==num){	printf("Right!\n");break;}                                         
	else if(input>num){printf("Too high!\n");}                        
	else{printf("Too low!\n"); }                             
	}    
	}
	last=i;
	for(i;i>0;i--){
		printf("第%d次得分：%d\n",i,score[i-1]);
	}
	qsort(score,last,sizeof(score[0]),cmp);
//	printf("最高分：%d，最低分：%d\n",score[last-1],score[0]);
}

