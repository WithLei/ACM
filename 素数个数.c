#include <stdio.h>
#include <math.h>
int main(){
	int N,i,t,x;
	scanf("%d",&N);
	int num=N-1;//numΪ������������ʼֵΪN-1 
	if(N>=1&&N<=10000){
		for(x=2;x<=N;x++){//����2��ʼ�жϣ�xΪ��ǰ�ж��� 
			for(i=0;i<sqrt(x);i++);//x�����������i 
			for(t=2;t<=i;t++){//�жϵ�ǰx�Ƿ�Ϊ������������-1 
				if(x%t==0&&x!=t){num-=1;break;} }
	}printf("%d\n",num);
} 
}
//����N��1=<N<=10000),ͳ����1~N֮���ж��ٸ�������