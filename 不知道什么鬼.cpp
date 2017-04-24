#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int N,sum=0,po,t,k,i,length;
	char str[50];
	scanf("%d",&N);
	getchar();
	for(i=0;i<N;i++){
		sum=0;
		gets(str);
		length=strlen(str);
		for(t=length-1;t>=0;t--){
			po=1;
			if(t>0){
			for(k=0;k<t;k++){po*=26;}	
			}
			sum+=po*(str[length-t-1]-65);
		}
		printf("%d\n",sum);
	}
} 