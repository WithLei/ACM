#include<stdio.h>                                            
#include<stdlib.h>  
#include<string.h>                                         
#include<time.h>
int scorecpy[200];
struct Play_Game{
	int score;
	int num;
}pg[200];   
int cmp( const void *a ,const void *b) 
{ 
return (*(Play_Game *)a).score < (*(Play_Game *)b).score ? 1 : -1; 
} 
//按照score从大到小排序                                     
int main(){                                                   
	int num,input,i,max=0,min=100,maxnum,minnum;                                       
	srand(time(NULL));
	for(i=0;i<10;i++){
	pg[i].num=i+1;                                     
	num=rand()%100+1;                                         
	printf("第%d次游戏：猜数游戏\n请输入一个数字：\n",i+1);                   
	for(pg[i].score=100;pg[i].score>0;pg[i].score-=10){                                         
		scanf("%d",&input);                                     
	if(input==num){	printf("Right!\n");break;}                                         
	else if(input>num){printf("Too high!\n");}                        
	else{printf("Too low!\n"); }                             
	}
	if(max<pg[i].score){max=pg[i].score;maxnum=i;}
	if(min>pg[i].score){min=pg[i].score;minnum=i;}
	}
	for(i=0;i<10;i++){
		printf("第%d次得分：%d\n",i+1,pg[i].score);
	}
	qsort(pg,10,sizeof(pg[0]),cmp);
	printf("最高分：%d，位于第%d位\n最低分：%d,位于第%d位\n",max,maxnum+1,min,minnum+1);
	printf("以下为积分榜得分情况:\n");
	for(i=0;i<10;i++){
		printf("得分:%d-------题号:%d\n",pg[i].score,pg[i].num);
	}
}

