#include<bits/stdc++.h>
using namespace std;
int main(){
	int result[107];
	result[0]=0,result[1]=1;
	for(int i=2;i<=100;i++){
		int range=0;
		for(int t=1;t < i;t++){
			range+=(result[i-t]-result[i-t-1])*result[t];
		}
		result[i]=range+1;
	}
	int num;
	while(cin >>num)cout << result[num] << endl;
	return 0;
}
