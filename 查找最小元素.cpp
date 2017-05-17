#include<stdio.h>
int search(int *num,int n){
	int *p=num,min=num[0];
	for(int i=1;i<n;i++){
		if(*(p+i)<min)min=*(p+i);
	}
	return min;
} 
int main(){
	int n=10;
	int num[10]={24,18,32,66,89,34,11,198,8,10};
	printf("%d\n",search(num,n));
}