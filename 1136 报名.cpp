#include<cstdio>
#include<cstring>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<sstream>
#include<string>
#include<vector>
#include<map>
#include<list>
#include<cmath>
#include<set>
#include<queue>
using namespace std;

int main(){
	set<string> s;
	string name;
	while(cin>>name){
		if(name.length())
            s.insert(name);
	}
	set<string>::iterator is;
 	for(is=s.begin();is!=s.end();is++)cout<<*is<<endl; 
}