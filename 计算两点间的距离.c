#include<stdio.h>
#include<math.h>
int main(){
	double x1,y1,x2,y2;
	float lenth;
	while(scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2)!=EOF){
		lenth=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		printf("%.2f\n",lenth);
	}
}
//     �����������꣨X1,Y1��,��X2,Y2��,���㲢��������ľ��롣 
//Input
//    ���������ж��飬ÿ��ռһ�У���4��ʵ����ɣ��ֱ��ʾx1,y1,x2,y2,����֮���ÿո������
//Output
//    ����ÿ���������ݣ����һ�У����������λС����