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
//����score�Ӵ�С����                                     
int main(){                                                   
	int num,input,i,max=0,min=100,maxnum,minnum;                                       
	srand(time(NULL));
	for(i=0;i<10;i++){
	pg[i].num=i+1;                                     
	num=rand()%100+1;                                         
	printf("��%d����Ϸ��������Ϸ\n������һ�����֣�\n",i+1);                   
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
		printf("��%d�ε÷֣�%d\n",i+1,pg[i].score);
	}
	qsort(pg,10,sizeof(pg[0]),cmp);
	printf("��߷֣�%d��λ�ڵ�%dλ\n��ͷ֣�%d,λ�ڵ�%dλ\n",max,maxnum+1,min,minnum+1);
	printf("����Ϊ���ְ�÷����:\n");
	for(i=0;i<10;i++){
		printf("�÷�:%d-------���:%d\n",pg[i].score,pg[i].num);
	}
}

