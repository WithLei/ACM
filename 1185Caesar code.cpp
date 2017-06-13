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
	char s[202],abc[26];
	while(~scanf("%s",s)){
		int range=26;
		memset(abc,0,sizeof(abc));
		for(int i=0;i<strlen(s);i++){
			if(abc[s[i]-97]==0){
				abc[s[i]-97]=1;
				range--;
			}
		}
		if(range==0)printf("impossible\n");
		else printf("%d\n",range);
	}
}