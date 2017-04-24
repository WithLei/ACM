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
	puts("��ֱ�����ѧ��ѧ�ţ���ѧ��Ӣ�����ɼ�");
	puts("�����븺ֵ�������롿");
	int i=0;
	while(~scanf("%d",&stu[i].id)&&stu[i].id>=0){
		scanf("%d%d%d",&stu[i].math,&stu[i].en,&stu[i].ph);
		i++;stu_num++;
	} 
	puts("ѧ�ųɼ��������"); 
}

int menu(){
	int num;
	puts("��ѡ�����");
	puts("1.����ÿ��ѧ�����ֺܷ�ƽ����");
	puts("2.���ֳܷɼ��Ӹߵ����ų��ɼ�������");
	puts("3.��ӡ���ε�");
	puts("4.����ѧ�ţ�����ѧ������������"); 
	puts("�����븺ֵ�˳�����");
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
		printf("%d��ѧ���ܷ֣�%d,ƽ���֣�%.2lf\n",stu[i].id,stu[i].sum,(double)stu[i].sum/3.0);
	}
	printf("\n");
}

void output_ranking(){
	qsort(stu,stu_num,sizeof(stu),cmp);
	for(int i=0;i<stu_num;i++){
		printf("ѧ�ţ�%d,�ܷ֣�%d\n",stu[i].id,stu[i].sum);
	}
	printf("\n");
}

void output_ranklist(){
	qsort(stu,stu_num,sizeof(stu),cmp);
		printf("����    ѧ��    ��ѧ    Ӣ��    ����    �ܷ�    ƽ����\n");
	for(int i=0;i<stu_num;i++){
		printf("%d      %d      %d      %d      %d      %d      %.2lf\n",
		i+1,stu[i].id,stu[i].math,stu[i].en,stu[i].ph,stu[i].sum,(double)stu[i].sum/3.0);
		stu[i].rank=i+1;
	}
	printf("\n");
}

void output_source(){
	int idd;
	puts("��������Ҫ���ҵ�ѧ�š��Ը�ֵ����������\n");
	while(~scanf("%d",&idd)&&idd>0){
		for(int i=0;i<stu_num;i++){
			if(stu[i].id==idd){
				printf("������%d,ѧ�ţ�%d,��ѧ��%d,Ӣ�%d,����%d,�ܷ֣�%d,ƽ���֣�%.2lf\n",
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