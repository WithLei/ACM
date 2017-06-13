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

struct node{
	int m,d,y;
	char ns[20];
}day[202];

void to_num(char* s,int i){
	day[i].m=(s[0]-48)*10+s[1]-48;
	day[i].d=(s[3]-48)*10+s[4]-48;
	day[i].y=(s[6]-48)*1000+(s[8]-48)*100+(s[8]-48)*10+s[9]-48;;
}

int cmp(node x,node y){
	if(x.y!=y.y)return x.y < y.y;
	else if(x.m!=y.m)return x.m < y.m;
	else if(x.d!=y.d)return x.d <y.d;
}

void to_str(int i){
	for(int t=0;t<i;t++){
		day[t].ns[0]=day[t].m/10+48;
		day[t].ns[1]=day[t].m%10+48;
		day[t].ns[2]='/';
		day[t].ns[3]=day[t].d/10+48;
		day[t].ns[4]=day[t].d%10+48;
		day[t].ns[5]='/';
		day[t].ns[6]=day[t].y/1000+48;
		day[t].ns[7]=(day[t].y/100)%10+48;
		day[t].ns[8]=(day[t].y/10)%10+48;
		day[t].ns[9]=day[t].y%10+48;
		puts(day[t].ns);
	}
}

int main(){
	char s[20],ns[20];
	int num=0;
	while(~scanf("%s",s)){
		to_num(s,num);
		num++;
	}
		sort(day,day+num,cmp);
		to_str(num);
} 