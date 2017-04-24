#include<stdio.h>
#define PI 3.1415926
int main(){
	float R,r;
	int z;
	while(scanf("%f",&R)!=EOF){
		z=100*R;r=z/100.0;
		if(0<R&&R<=100&&r==R){
		printf("%.2lf %.2lf\n",4*R*R*PI,4*R*R*R*PI/3);	
		}
	}
}