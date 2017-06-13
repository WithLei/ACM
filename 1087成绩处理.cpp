#include<cstdio>
#include<cstring>
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

struct{
	int a,b,c,d;
}man[5];

int main(){
	for(int i=0;i<5;i++){
		scanf("%d%d%d%d",&man[i].a,&man[i].b,&man[i].c,&man[i].d);
		if(man[i].a<60||man[i].b<60||man[i].c<60||man[i].d<60){
			printf("%d %d %d %d %d\n",i,man[i].a,man[i].b,man[i].c,man[i].d);
		}
	}
}