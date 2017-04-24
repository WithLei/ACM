#include <iostream>  
using namespace std;  
int main()  
{  
    int n,i;  
    int f[56]={0,1,2,3};  
    for(i=4;i<=55;i++)  
        f[i]=f[i-1]+f[i-3];  
    while(cin>>n&&n!=0)  
    {  
        cout<<f[n]<<endl;  
    }  
    return 0;  
}  