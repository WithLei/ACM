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
	int cases;
	scanf("%d",&cases);
		int num[102],t[102];
		int now=1,n,k=1;
		scanf("%d",&t[0]);
		num[0]=t[0];
		for(int i=1;i<cases;i++){
			bool flag=true;
			scanf("%d",&n);
			for(int ii=0;ii<k;ii++){
				if(n==num[ii]){
				flag=false;break;
			}
			}
			if(flag){
				t[now]=n;
				num[k]=n;
				k++;
				now++;
			}
		}
		printf("%d",t[0]);
		for(int i=1;i<now;i++){
			printf(" %d",t[i]);
		}
		printf("\n");
}