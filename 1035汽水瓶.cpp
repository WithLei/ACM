#include<cstdio>
#include<cstring>
#include<iostream>
#include<algorithm>
#include<vector>
#include<map>
#include<list>
#include<cmath>
#include<set>
#include<queue>
using namespace std;

int bottle(int b){
	int range=0;
	while(b>=3){
		int a = b/3;
		range+=a;
		b=b%3+a; 
	}
	if(b==2)range++;
	return range;
}

int main(){
	int b;
	while(~scanf("%d",&b)&&b!=0){
		printf("%d\n",bottle(b));
	}
}