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

bool cmp(int x,int y){
	if(x!=y)return x>y;
}

void swp(int* a,int* b){
	if(*a>*b){
	int t=*a;
	*a=*b;
	*b=t;
	}
}

int main(){
	int num[1002],n;
	while(~scanf("%d",&n)){
		memset(num,0,sizeof(num));
		for(int i=0;i<n;i++){
			scanf("%d",&num[i]);
		}
		int flag=0,k=n;
		sort(num,num+n,cmp);
		int range=0;
		while(k){
			range++;
			bool m=false;
			if(num[0]>0){
				num[0]-=4;
				if(num[0]<=0)k--;
			}
			for(int i=1;i<n;i++){
				if(num[i]>0){
					num[i]--;
					if(num[i]==0)k--;
				}
			}
			int t=0;
			while(num[t]<num[t+1]&&t<=n-2){
				int temp=num[t];
				num[t]=num[t+1];
				num[t+1]=temp;
				t++;
			}
		}
		printf("%d\n",range);
	}
}

/*
3
1 2 100
*/