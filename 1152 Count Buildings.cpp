#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<cmath>
#include<set>
#include<queue>
using namespace std;

struct node{
	int d,h;
}b[10002];

bool cmp(node x,node y){
	if(x.d!=y.d)return x.d < y.d;
	else if(x.h!=y.h)return x.h < y.h;
}

int main(){
	int cases,building;
	scanf("%d",&cases);
	while(cases--){
		memset(b,0,sizeof(b));
		scanf("%d",&building);
		for(int i=0;i<building;i++){
			scanf("%d%d",&b[i].d,&b[i].h);
		}
		sort(b,b+building,cmp); 
		int range=1;
		for(int i=building-1;i>0;i--){
			bool flag=true;
			for(int m=0;m<i;m++){
				if(b[i].h <= (double)b[m].h*b[i].d/b[m].d){flag=false;break;}
			}
			if(flag)range++;
		}
		printf("%d\n",range);
	}
}