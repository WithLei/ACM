#include<stdio.h>
int i=-1,sum=0;
void input(int *score,int *id){
	printf("??????????:\n");
	do{
		i++;
		scanf("%d%d",&id[i],&score[i]);
	}while(score[i]>=0); 
}

void output_notpass(int *score,int *id){
	printf("\n?????????????:\n");
			printf("?? ??\n");
	for(int ii=0;ii<i;ii++){
		sum+=score[ii];
		if(score[ii]<60){
			printf("| %d %d |\n",id[ii],score[ii]);
		}
	}
}

void output_beyondAve(int *score,int *id){
	double ave=sum/i;
	int num=0,beyond[32];//?????? 
	printf("\n????????????????:\n");
			printf("?? ??\n");
	for(int ii=0;ii<i;ii++){
		if(ave<score[ii]){
			num++;
			printf("| %d %d |\n",id[ii],score[ii]);
		}
	}
	printf("??????????????????%d?\n",num);
}

void output_percent(int *score,int *id){
	int num[11]={0};
	double percent;
	for(int ii=0;ii<i;ii++){
		switch(score[ii]/10){
			case 0:num[0]++;break;
			case 1:num[1]++;break;
			case 2:num[2]++;break;
			case 3:num[3]++;break;
			case 4:num[4]++;break;
			case 5:num[5]++;break;
			case 6:num[6]++;break;
			case 7:num[7]++;break;
			case 8:num[8]++;break;
			case 9:num[9]++;break;
			case 10:num[10]++;break;
		}	
	}
	printf("\n?????????????????:\n");
	for(int ii=0;ii<10;ii++){
		percent=(double)num[ii]/i*1.0;
		printf("%d~%d??????:%d  ?????:%.2lf\n",ii*10,10*(ii+1)-1,num[ii],percent);
	}
	percent=(double)num[10]/i;
	printf("????%d ?????%.2lf\n",num[10],percent);
}

int main(){
	int score[32],id[32];
	input(score,id);
	output_notpass(score,id);
	output_beyondAve(score,id);
	output_percent(score,id);
}
