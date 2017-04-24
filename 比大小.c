#include<stdio.h>
#include<string.h>
int main(){
	char num1[101],num2[101];
	int i,c,length1,length2;
	int range=0;
	while(scanf("%s%s",num1,num2)!=EOF){
	length1=strlen(num1);
	length2=strlen(num2);
	if(length1>length2){printf("LARGE\n");}
	else if(length2>length1){printf("LITTLE\n");}
	else{//长度相同 
		for(i=0;i<length1;i++){
		if(num1[i]>num2[i]){printf("LARGE\n");range=0;}
		else if(num2[i]>num1[i]){printf("LITTLE\n");range=0;}
		else{range=1;}
	}
	if(range==1){printf("EQUAL\n");}	
	}}
}