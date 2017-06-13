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
	int num;
	char graph[13][36]={0};
	graph[0][0]='A';
	for(int k=0;k<11;k++){
		for(int i=1;i<35;i++){
			graph[k][i]=' ';
		}
	}
	for(int i=1;i<12;i++){
		graph[i][0]='|';
	}
	for(int i=1;i<34;i++){
		graph[11][i]='-';
	}
	graph[11][34]='>';
	/*
	for(int i=0;i<12;i++){
		puts(graph[i]);
	}
	*/
	//Ô¤´¦Àí
	while(~scanf("%d",&num)){
		for(int k=0;k<11;k++){
		for(int i=1;i<35;i++){
			graph[k][i]=' ';
		}
	}
		for(int t=0;t<num;t++){
			for(int k=1;k<=3;k++){
				graph[10-t][2+k]='*';
			}
		}
		graph[10-num][2+2]=num+48;
		for(int i=1;i<6;i++){
			scanf("%d",&num);
				for(int t=0;t<num;t++){
				for(int k=1;k<=3;k++){
					graph[10-t][2*(i+1)+3*i+k]='*';
				}
			}
				graph[10-num][2*(i+1)+3*i+2]=num+48;
		}
		for(int i=0;i<12;i++){
			puts(graph[i]);
		}
	} 
}