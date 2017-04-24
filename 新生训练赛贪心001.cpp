#include<stdio.h>
#include<stdlib.h>
struct In{
	int p;
	int h;
}Ti[1002];

int cmp( const void *a , const void *b ) 
	{ 
	struct In *c = (In *)a; 
	struct In *d = (In *)b; 
	if(c->p != d->p) return c->p - d->p; 
	else return d->h - c->h; 
	}
	
double greedy(int m,int n,struct In Ti[]){
	double num=0;
	for(int i=0;i<m;i++){
		if(n>=Ti[i].p*Ti[i].h){
			n-=Ti[i].p*Ti[i].h;
			num+=(double)Ti[i].h;
			continue;
		}else{
			num+=(double)n/Ti[i].p;break;
		}
	}
	return num;
}
int main(){
	int time,n,m;
	while(~scanf("%d",&time)){
	while(time--){
		struct In Ti[1002];
		scanf("%d%d",&n,&m);
		for(int i=0;i<m;i++){
			scanf("%d%d",&Ti[i].p,&Ti[i].h);}
		qsort(Ti,m,sizeof(Ti[0]),cmp);
		printf("%.2lf\n",greedy(m,n,Ti));
	}
}
}