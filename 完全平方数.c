#include<stdio.h>
#include<math.h>
int main(){
	int n,i,num;
	double x;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		x=sqrt(num);
		if((x-(int)x)>0){
			printf("NO\n");
		}else{
			printf("YES\n");
		}
	}
}