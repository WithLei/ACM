#include<stdio.h>
int main(){
	int n,i,ii,t;
	char str[300];
		scanf("%s",str);
		for(ii=0;str[ii]!='\0';ii++);//iiÎª×Ö·û³¤¶È 
		for(t=0;t<(ii-1)/2;t++){
			if(str[t]!=str[ii-1-t]){printf("0\n");break;}
			else{if(t==(ii-2)/2||t==(ii-3)/2){
				printf("1\n");
			}else{
				continue;
			}
		}}
}