#include<stdio.h>
#define N 10

void input(int *num){
	for(int i=0;i<N;i++){
		scanf("%d",num+i);
	}
}

void work(int *num){
	int min=0,max=0;
	for(int i=1;i<N;i++){
		if(*(num+i)<*(num+min))min=i;
		if(*(num+i)>*(num+max))max=i;
	}
	int temp=*num;*num=*(num+min);*(num+min)=temp;
	temp=*(num+N-1);*(num+N-1)=*(num+max);*(num+max)=temp;
}

void output(int *num){
	printf("%d",*num);
	for(int i=1;i<N;i++){
		printf(" %d",*(num+i));
	}
	printf("\n");
}

int main(){
	int num[N];
	input(num);
	work(num);
	output(num);
}