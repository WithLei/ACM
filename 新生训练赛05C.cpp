#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void output(int z,int o,int j){
	while(z+o+j>0){
	if(z>0){
		printf("Z");z--;
	}
	if(o>0){
		printf("O");o--;
	}
	if(j>0){
		printf("J");j--;
	}	
	}
	
}
int main(){
	char str[101];
	int z=0,o=0,j=0,length;
	while(gets(str)){
		if(str[0]=='E'){break;}
		length=strlen(str);
		for(int i=0;i<length;i++){
		switch(str[i]){
			case 'Z':z++;break;
			case 'O':o++;break;
			case 'J':j++;break;
		}}
	output(z,o,j);
	printf("\n");
	z=0,o=0,j=0;
	}
}