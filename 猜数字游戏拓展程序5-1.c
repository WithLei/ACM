#include<stdio.h>                                            
#include<stdlib.h>  
#include<string.h>                                         
#include<time.h>
int scorecpy[200];
int cmp(const void *a,const void *b){
	return (*(int*)a-*(int*)b);//��������
}                                            
int main(){                                                   
	int num,input,i,score[200],max,min;                                          
	srand(time(NULL));
	for(i=0;i<10;i++){                                     
	num=rand()%100+1;                                         
	printf("��%d����Ϸ��������Ϸ\n������һ�����֣�\n",i+1);                   
	for(score[i]=100;score[i]>0;score[i]-=10){                                         
		scanf("%d",&input);                                     
	if(input==num){	printf("Right!\n");break;}                                         
	else if(input>num){printf("Too high!\n");}                        
	else{printf("Too low!\n"); }                             
	}    
	}
	for(i;i>0;i--){
		printf("��%d�ε÷֣�%d\n",i,score[i-1]);
	}
	memcpy(scorecpy,score,sizeof(score[0])*10);
	qsort(scorecpy,10,sizeof(scorecpy[0]),cmp);
//	for(i=0;i<10;i++){
//		if(scorecpy[9]==score[i]){max=i+1;}
//		else if(scorecpy[0]==score[i]){min=i+1;}
//	}
	printf("��߷֣�%d\n��ͷ֣�%d\n",scorecpy[9],scorecpy[0]);
}

