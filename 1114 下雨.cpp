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
	int cases;
	scanf("%d",&cases);
	while(cases--){
		int x,y;
		char graph[502][502];
		memset(graph,0,sizeof(graph));
		scanf("%d%d",&y,&x);
		for(int i=0;i<x;i++){
			scanf("%s",graph[i]);
		}
		int num,range=0,a=x-1,b=0;
		char str[6];
		scanf("%d",&num);
		if(graph[a][b]=='.')range++;
		while(num--){
			scanf("%s",str);
			if(str[0]=='u')a--;
			else if(str[0]=='d')a++;
			else if(str[0]=='r')b++;
			else if(str[0]=='l')b--;
			if(graph[a][b]=='.')range++;
		}
		printf("%d\n",range);
	}
}