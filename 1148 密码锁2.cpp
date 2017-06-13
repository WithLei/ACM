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
		int l;
		char s1[102],s2[102]; 
		memset(s1,0,sizeof(s1));
		memset(s2,0,sizeof(s2));
		scanf("%d%s%s",&l,s1,s2);
		int range=0;
		for(int i=0;i<l;i++){
			if(s1[i]=='0')range+=min(abs(s2[i]-48),abs(58-s2[i]));
			else if(s2[i]=='0')range+=min(abs(s1[i]-48),abs(58-s1[i]));
			else
			range+=min(abs(s1[i]-s2[i]),abs(10+s1[i]-s2[i]));
		}
		printf("%d\n",range);
	}
} 