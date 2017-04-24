#include <stdio.h>
int main()
{
	int N;
    int mul,k,kk,ll;
	while(scanf("%d",&N)!=EOF)
	{	if(0<=N&&N<20000000){
		for(mul=N,k=1;(mul/=10)>0;k*=10);
		kk=k*10; 		
		mul=0; 		
		ll=10; 
		
		while(k>0){
		mul=(mul+(N%(k*10))*(N%ll-N%(ll/10)))%kk;
		k/=10; 
		ll*=10;
		}

		if(N==mul) 			
			printf("YES\n");
		else
			printf("NO\n");}
	}
}

