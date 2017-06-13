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
	int n,m;
	int num[202];
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&num[i]);
	}
	int k,time=n; 
	for(int i=0;i<m;i++){
		scanf("%d",&k);
		bool flag=true;
		for(int t=0;t<n;t++){
			if(num[t]==k){
				flag=false;
				break;
			}
		}
		if(flag){
			num[time]=k;
			time++;
		}
	}
	for(int i=0;i<time;i++){
		printf("%d\n",num[i]);
	}
}