#include <stdio.h>
int main(){
	int special,normal,i,ii;
	float x;
	int s_sum=0,n_sum=0,a[100],b[100];
	scanf("%d%d",&special,&normal);
	if(special>0&&special<100&&normal>0&&normal<100){
		for(i=0;i<special;i++){
			scanf("%d",&a[i]);
		}
		for(i=0;i<special;i++){
			s_sum+=a[i];
		}
		for(ii=0;ii<normal;ii++){
			scanf("%d",&b[ii]);
		}
		for(ii=0;ii<normal;ii++){
			n_sum+=b[ii];
		}
		x=s_sum*0.6/special+n_sum*0.4/normal;
		printf("%.2lf\n",x);
	}
}