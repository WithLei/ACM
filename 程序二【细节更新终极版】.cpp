#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int stu_num=0;

struct In{
	int id;
	int math;
	int en;
	int ph;
	int sum;
	int rank;
}stu[33]; 

int cmp( const void *a , const void *b ) 
	{ 
	struct In *c = (In *)a; 
	struct In *d = (In *)b; 
	if(c->sum != d->sum) return d->sum - c->sum; 
	else return d->id - c->id; 
	}

void input(){
	puts("请分别输入学生学号，数学，英语，物理成绩");
	puts("【输入负值结束输入】");
	int i=0;
	while(~scanf("%d",&stu[i].id)&&stu[i].id>=0){
		scanf("%d%d%d",&stu[i].math,&stu[i].en,&stu[i].ph);
		i++;stu_num++;
	} 
	puts("学号成绩输入结束"); 
}

int menu(){
	int num;
	puts("请选择服务：");
	puts("1.计算每个学生的总分和平均分");
	puts("2.按总分成绩从高到低排出成绩的名次");
	puts("3.打印名次单");
	puts("4.输入学号，检索学生排名及分数"); 
	puts("【输入负值退出。】");
	scanf("%d",&num);
	return num;
}

void cclsum(){
	for(int i=0;i<stu_num;i++){
		stu[i].sum=stu[i].math+stu[i].en+stu[i].ph;
	}
}

void output_sum(){
	for(int i=0;i<stu_num;i++){
		printf("%d号学生总分：%d,平均分：%.2lf\n",stu[i].id,stu[i].sum,(double)stu[i].sum/3.0);
	}
	printf("\n");
}

void output_ranking(){
	qsort(stu,stu_num,sizeof(stu),cmp);
	for(int i=0;i<stu_num;i++){
		printf("学号：%d,总分：%d\n",stu[i].id,stu[i].sum);
	}
	printf("\n");
}

void output_ranklist(){
	qsort(stu,stu_num,sizeof(stu),cmp);
		printf("排名    学号    数学    英语    物理    总分    平均分\n");
	for(int i=0;i<stu_num;i++){
		printf("%d      %d      %d      %d      %d      %d      %.2lf\n",
		i+1,stu[i].id,stu[i].math,stu[i].en,stu[i].ph,stu[i].sum,(double)stu[i].sum/3.0);
		stu[i].rank=i+1;
	}
	printf("\n");
}

void output_source(){
	int idd;
	puts("请输入您要查找的学号【以负值结束检索】\n");
	while(~scanf("%d",&idd)&&idd>0){
		for(int i=0;i<stu_num;i++){
			if(stu[i].id==idd){
				printf("排名：%d,学号：%d,数学：%d,英语：%d,物理：%d,总分：%d,平均分：%.2lf\n",
				stu[i].rank,stu[i].id,stu[i].math,stu[i].en,stu[i].ph,stu[i].sum,(double)stu[i].sum/3.0);
			}
		}
	}
	printf("\n");
}

int main(){
	int num;
	memset(stu,0,sizeof(stu));
	input();
	cclsum();
	do{
		num=menu();
		switch(num){
			case 1:output_sum();break;
			case 2:output_ranking();break;
			case 3:output_ranklist();break;
			case 4:output_source();break;
		}
	}while(num>=0);
	return 0;
} 