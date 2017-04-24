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
//     给定三条边，请你判断一下能不能组成一个三角形。 
//Input
 //   输入数据第一行包含一个数M，接下有M行，每行一个实例，包含三个正数A,B,C。其中A,B,C <1000;
//Output
  //  对于每个测试实例，如果三条边长A,B,C能组成三角形的话，输出YES，否则NO。