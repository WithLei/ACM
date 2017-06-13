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
const int num[]={-1,-5,-6,-25,-76,-376,0,1,5,6,25,76,376};
int main(){
	int a;
	scanf("%d",&a);
	for(int i=0;i<13;i++){
		if(a==num[i]){
			printf("YES\n");
			return 0;
		}
	}
	printf("NO\n");
	return 0;
} 