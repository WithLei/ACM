#include<stdio.h>
#include<math.h>
int main(){
	int N,i,a,b;
	double length[40],max;
	scanf("%d",&N);
	if(0<N&&N<=20){
	for(i=0;i<N;i++){//输入数据，并把每个数据距离写进length[] 
		scanf("%d%d",&a,&b);
		if(a<1000&&b<1000){
			length[i]=sqrt(a*a+b*b);}
	}
	max=length[0];
	for(i=1;i<N;i++){
		if(max<length[i]){
			max=length[i];}
	}
	printf("%.2lf\n",max);
	}} 