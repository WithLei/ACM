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

int main(){
	int zero=0,a[202];
	int i=0;
	while(zero!=2){
		int num;
		scanf("%d",&num);
		if(num==0)zero++;
		else {a[i]=num;i++;}
	}
	sort(a,a+i);
	for(int t=0;t<i;t++){
		printf("%d\n",a[t]);
	}
} 