#include<stdio.h>
int main(){
	int M,i;
	double A,B,C;
	scanf("%d",&M);
	for(i=0;i<M;i++){
		scanf("%lf%lf%lf",&A,&B,&C);
		if(A<1000&&B<1000&&C<1000){
		if((A+B)<=C||(A+C)<=B||(A+B)<=A){
			printf("NO\n");
		}else if((A-B)>=C||(B-A)>=C||(A-C)>=B||(C-A)>=B||(B-C)>=A||(C-B)>=A){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
		}
	}}
//     ���������ߣ������ж�һ���ܲ������һ�������Ρ� 
//Input
 //   �������ݵ�һ�а���һ����M��������M�У�ÿ��һ��ʵ����������������A,B,C������A,B,C <1000;
//Output
  //  ����ÿ������ʵ������������߳�A,B,C����������εĻ������YES������NO��