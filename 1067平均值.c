#include<stdio.h>
int main(){
	int i,num[11],sum=0;
	double range;
	for(i=0;i<10;i++){
		if(scanf("%d",&num[i])>0){sum+=num[i];}else{num[i]=0;}
	}
	range=sum/10.0;
	printf("%.2lf\n",range);
	for(i=0;i<10;i++){
		if(num[i]>range){
			if(i!=10){printf("%d ",num[i]);}else{printf("%d",num[i]);}
		}
	}printf("\n");
}
//最后空格未处理好 