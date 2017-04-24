#include<stdio.h>
struct student{
	int score[300];
};
int main(){
	struct student stu[300];
	int n,m,i,ii,sum[300],total,lessonsum[300];
	while(scanf("%d%d",&n,&m)!=EOF){
		int flag=0,range=1;
	for(ii=0;ii<m;ii++){
		lessonsum[ii]=0;}
	for(i=0;i<n;i++){
		sum[i]=0;
		for(ii=0;ii<m;ii++){
			scanf("%d",&stu[i].score[ii]);
			sum[i]+=stu[i].score[ii];
			lessonsum[ii]+=stu[i].score[ii];
			}
		}
	for(i=0;i<n;i++){total+=sum[i];}//total为所有分数
	printf("%.2lf",sum[0]*1.0/m);
	 for(i=1;i<n;i++){printf(" %.2lf",sum[i]*1.0/m);}
	 printf("\n%.2lf",lessonsum[0]*1.0/n);
	 for(i=1;i<m;i++){printf(" %.2lf",lessonsum[i]*1.0/n);}
	 printf("\n");
	 for(i=0;i<n;i++){
	 	range=1;
 		for(ii=0;ii<m;ii++){
		 	if(stu[i].score[ii]<(lessonsum[ii]*1.0/n)){range=0;}
		 }
		 if(range!=0){flag++;}
 	}
 	printf("%d\n\n",flag);
}}