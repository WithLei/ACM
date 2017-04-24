#include<stdio.h>
#include<string.h>
int main(){
	int length,i,upsum,downsum;
	char num[100];
	while(scanf("%s",num)!=EOF){
		upsum=downsum=0;
		length=strlen(num);
		if((num[0]=='0')&&(length==1)){break;}
		if(length%2==0){
			for(i=0;i<length/2;i++){
				upsum+=num[i]-48;}
			for(i=length-1;i>=length/2;i--){
				downsum+=num[i]-48;}
				if(upsum==downsum){
					printf("YES\n");}
				else{
					printf("NO\n");}
		}else{
		
		for(i=0;i<(length/2)+1;i++){
				upsum+=num[i]-48;}
			for(i=length-1;i>=length/2;i--){
				downsum+=num[i]-48;}
				if(upsum==downsum){
					printf("YES\n");}
				else{
					printf("NO\n");}
					
		}
	}
}
