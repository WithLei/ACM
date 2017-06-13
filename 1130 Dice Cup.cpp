#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<vector>
#include<map>
#include<list>
#include<cmath>
#include<set>
#include<queue>
using namespace std;

void swp(int* a,int* b){
	if(*a>*b){
	int t=*a;
	*a=*b;
	*b=t;
	}
}

int main(){
	int a,b,num[42]={0};
	scanf("%d%d",&a,&b);
	swp(&a,&b);
	int range=0;
	for(int i=1;i<=a;i++){
		for(int ii=1;ii<=b;ii++){
			num[i+ii]++;
			if(num[i+ii]>range)range=num[i+ii];
		}
	}
	for(int i=1;i<=a+b;i++){
		if(range==num[i])printf("%d\n",i);
	}
} 