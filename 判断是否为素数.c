#include <stdio.h>
#include <math.h>
int main(){
	int i,t,x,range;
	scanf("%d",&x);
			for(i=0;i<sqrt(x);i++);//x�����������i 
			for(t=2;t<=i;t++){//�жϵ�ǰx�Ƿ�Ϊ����
				if(x%t==0&&x!=t){printf("no\n");break;}
				else{if(t==i){
					printf("yes\n");
				}}} 
	}
//�ж��Ƿ�Ϊ���� 