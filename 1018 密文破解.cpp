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
	char str[200];
	int num[200]={0};
	gets(str);
	int m;
	bool flag=false;
	for(int i=0;i<strlen(str);i++){
		num[str[i]]++;
		if(str[i]<='z' && str[i]>='a' && !flag){
			m=str[i];flag=true;
		}
	}
	for(int i=1;i<strlen(str);i++){
		if(num[m]<num[str[i]] && str[i]<='z' && str[i]>='a')m=str[i];
	}
	printf("%c\n",m);
}