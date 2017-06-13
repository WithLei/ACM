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

int main(){
	int total,out=0,now=1,court=0;
	int man[1002]={0};
	man[0]=1;
	scanf("%d",&total);
	while(out!=total-1){
		while(court!=5){
		now++;
		if(now>total)now-=total; 
		if(man[now]==0)court++;
		}
		man[now]=1;
		out++;
		court=0;
	}
	for(int i=0;i<total;i++){
		if(man[i]==0){
			printf("%d\n",i-1);
			return 0;
		}
	}
}