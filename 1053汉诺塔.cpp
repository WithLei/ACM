#include<stdio.h>
#include<math.h>
int range;
int ccl(int N){	
	range=0;
	for(int i=0;i<N;i++){
		range=(range*2+1)%20142014;
	}
	return range;
}
int main(){
	int M,N;
	scanf("%d",&M);
	for(int i=0;i<M;i++){
		scanf("%d",&N);
		printf("%d\n",ccl(N));
	}
}
//1-1
//2--3
//3--7
//4--15
//5--31
//6--63