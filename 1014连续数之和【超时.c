#include<stdio.h>
int main(){
	int time,num,sum=0,i,ii,t,range=0,k; 
	scanf("%d",&time);
	for(k=0;k<time;k++){
		scanf("%d",&num);	
		for(i=1;i<num/2;i++){//��һ������ 
			sum=0;
			for(ii=i;num!=sum;ii++){//iiΪ��ǰ���� 
				sum+=ii;
				if(sum>num){break;}//���һ��ii++�����ͣ�������ǰѭ�� 
				else if(sum==num){//��ǰ����� 
					printf("%d =%d",num,i);
					for(t=i+1;t<=ii;t++){printf(" + %d",t);}
					printf("\n");range=1;break; 
				}
			}
			if(range==1){break;}
		}
		if(range==0){printf("IMPOSSIBLE\n");} 
		range=0;	
		}
} 