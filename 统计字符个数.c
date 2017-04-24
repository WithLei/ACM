#include<stdio.h>
int main(){
	int i;
	int c=0,num=0,space=0,other=0;
	char str[10000];
	gets(str);
	for(i=0;str[i]!='\0';i++){//iÎª×Ö·û´®³¤¶È-1
	if((str[i]>64&&str[i]<91)||(str[i]>96&&str[i]<123)){
		c+=1;
	}
	else if(str[i]>47&&str[i]<58){
		num+=1;
	}
	else if(str[i]==32){
		space+=1;
	}
	else{
		other+=1;
	}
	}printf("%d %d %d %d\n",c,num,space,other);
}
