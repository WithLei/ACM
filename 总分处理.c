#include<stdio.h>
int main(){
	int a[6],b[6],c[6],d[6],e[6],i,totalxsum;
	int asum=0,bsum=0,csum=0,dsum=0,esum=0;
	for(i=0;i<4;i++){
		scanf("%d",&a[i]);asum+=a[i];}
	for(i=0;i<4;i++){
		scanf("%d",&b[i]);bsum+=b[i];}
	for(i=0;i<4;i++){
		scanf("%d",&c[i]);csum+=c[i];}
	for(i=0;i<4;i++){
		scanf("%d",&d[i]);dsum+=d[i];}
	for(i=0;i<4;i++){
		scanf("%d",&e[i]);esum+=e[i];}
		totalxsum=(asum+bsum+csum+dsum+esum)/5;
		printf("%d\n",totalxsum);
	if(asum<totalxsum){
		for(i=0;i<4;i++){printf("%d ",a[i]);}printf("%d\n",asum);
	}
	if(bsum<totalxsum){
		for(i=0;i<4;i++){printf("%d ",b[i]);}printf("%d\n",bsum);
	}
	if(csum<totalxsum){
		for(i=0;i<4;i++){printf("%d ",c[i]);}printf("%d\n",csum);
	}
	if(dsum<totalxsum){
		for(i=0;i<4;i++){printf("%d ",d[i]);}printf("%d\n",dsum);
	}
	eif(esum<totalxsum){
		for(i=0;i<4;i++){printf("%d ",e[i]);}printf("%d\n",esum);
	}
}