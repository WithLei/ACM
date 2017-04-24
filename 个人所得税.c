#include<stdio.h>
int main(){
	int salary;
	double tax;
	scanf("%d",&salary);
	if(salary<=1000){
		printf("0\n");}
		else if(salary<=1500){
			printf("%.2lf\n",(salary-1000)*0.05);
		}
		else if(1500<salary&&salary<=3000){
			printf("%.2lf\n",(salary-1000)*0.1);
		}
		else if(3000<salary&&salary<=6000){
			printf("%.2lf\n",(salary-1000)*0.15);
		}
		else if(6000<salary&&salary<=21000){
			printf("%.2lf\n",(salary-1000)*0.2);
		}else{
			printf("%.2lf\n",(salary-1000)*0.25);
		}
}