#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int num,lastspace=0,length,l;
	char str[1001],c,newstr[1001];
	scanf("%d",&num);
	getchar();
	for(int i=0;i<num;i++){
		memset(newstr,0,sizeof(newstr[0])*1001);
		lastspace=-1;
		gets(str);
		length=strlen(str);
		for(int ii=0;ii<length;ii++){//iiÎªµ±Ç°str[ii] 
			if(str[ii]==' '){int tt=ii-1;newstr[ii]=' ';
			for(int t=lastspace+1;t<ii;t++,tt--){
				newstr[t]=str[tt];}
				lastspace=ii;}
		}
		l=length-1;
		for(int t=lastspace+1;t<length;t++,l--){
				newstr[t]=str[l];
			}printf("%s\n",newstr);
		}
}