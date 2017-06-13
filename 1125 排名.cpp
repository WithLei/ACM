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

struct node{
	char name[12];
	int score;
}man[100002];

bool cmp(node x,node y){
	if(x.score!=y.score)return x.score > y.score;
	else return strcmp(x.name,y.name) < 0;//ÉýÐò 
}

int main(){
	int cases;
	scanf("%d",&cases);
	for(int i=0;i<cases;i++){
		scanf("%s%d",man[i].name,&man[i].score);
	}
	sort(man,man+cases,cmp);
	for(int i=0;i<cases;i++){
		printf("%s\n",man[i].name);
	}
}