#include<stdio.h>
int main(){
int i,ii,t[20],num[2000],test,s=0,range=0,N;
scanf("%d",&N);
for(i=0;i<N;i++){
	scanf("%d",&t[i]);
	for(ii=0;ii<t[i];ii++){
		scanf("%d",&num[s]);
		s++;}
}
scanf("%d",&test); 
for(s;s>=0;s--){
	if(num[s]==test){printf("YES\n");range=1;break;}
}
if(range!=1){printf("NO\n");}
} 