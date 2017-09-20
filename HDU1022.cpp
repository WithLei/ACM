#include<bits/stdc++.h>
using namespace std;
#define in true
#define out false 
const int maxn = 10000+7;
bool range[maxn]={true};
int num,a[maxn],b[maxn];
char xa[maxn],xb[maxn];

int main(){
	while(cin >> num >> xa >> xb){
		memset(range,true,sizeof(bool));
		stack<char>q;
		int aa = 0,bb = 0,k = 0;
		while(bb<num){
			if(q.size()&&q.top()==xb[bb]){//Æ¥Åä
				bb++;
				q.pop();
				range[k++]=out;
//				cout << "1." <<endl;
			}
			else{
				if(aa==num)break;
				q.push(xa[aa]);
				range[k++]=in;
				aa++;
//				cout << "2." << endl;
			}
//			cout << "here" << endl;
		}
//		cout << aa << endl;
		if(bb==num){
			cout << "Yes." << endl;
			for(int i=0;i<k;i++)
			if(range[i])cout << "in" << endl;
			else cout << "out" << endl;
		}
		
		else{
			cout << "No." << endl;
		}
		
//		cout << k << endl;	
		cout << "FINISH" << endl;
		
	}
	return 0;
	
}
