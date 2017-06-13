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
	int cases,l;
	scanf("%d",&cases);
	while(cases--){
		int num[102][102];
		memset(num,0,sizeof(num));
		scanf("%d",&l);
		for(int h=0;h<l;h++){
			for(int w=0;w<l;w++){
				scanf("%d",&num[h][w]);
			}
		}
		bool flag = true;
		for(int h=0;h<=l/2;h++){
			for(int w=0;w<=l/2;w++){
				if(num[h][w]!=num[l-h-1][l-w-1]||num[h][w]!=num[h][l-w-1]||num[h][w]!=num[l-h-1][w]){
					printf("no\n");flag=false;break;
				}
			}
			if(!flag)break;
		}
		if(flag)
		printf("yes\n");
	}
	return 0;
} 