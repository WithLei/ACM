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
int a_month[13]={0,19880100,19880200,19880300,19880400,19880500,19880600,19880700,19880800,19880900,19881000,19881100,19881200};
int b_month[13]={0,19890100,19890200,19890300,19890400,19890500,19890600,19890700,19890800,19890900,19891000,19891100,19891200};
int a_day[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int b_day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

bool is_prime(int num){
	for(int i=2;i<sqrt(num);i++){
		if(num%i==0)return false;
	}
	return true;
}

int main(){
	for(int i=1;i<13;i++){
		for(int d=1;d<=a_day[i];d++){
			if(is_prime(a_month[i]+d)){
				printf("%d\n",a_month[i]+d);
			}
		}
	}
	for(int i=1;i<13;i++){
		for(int d=1;d<=b_day[i];d++){
			if(is_prime(b_month[i]+d)){
				printf("%d\n",b_month[i]+d);
			}
		}
	}
} 