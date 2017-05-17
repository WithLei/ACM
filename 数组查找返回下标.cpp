#include<stdio.h>
#define N 10
void input(int *num,int *x){
	for(int i=0;i<N;i++){
		scanf("%d",num+i);
	}
	scanf("%d",x);
}
int search(int *list,int n,int x){
	int flag=0,k;
	for(int i=0;i<N;i++){
		if(*(list+i)==x){flag=1;return i;}
	}
	if(flag==0)return -1;
}

int main(){
	int num[N],x,n=N,range;
	input(num,&x);
	range=search(num,n,x);
	if(range==-1){
		puts("Not found");
	}else printf("num[%d]=%d\n",range,x);
} 
//test
//1 2 3 4 5 6 7 8 9 11
//8