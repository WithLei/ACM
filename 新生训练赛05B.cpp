#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void caculate(char *c,int *num,int length){
	for(int i=0;i<length;i++){
		switch(c[i]){
			case 'a':num[0]++;break;
			case 'b':num[1]++;break;
			case 'c':num[2]++;break;
			case 'd':num[3]++;break;
			case 'e':num[4]++;break;
			case 'f':num[5]++;break;
			case 'g':num[6]++;break;
			case 'h':num[7]++;break;
			case 'i':num[8]++;break;
			case 'j':num[9]++;break;
			case 'k':num[10]++;break;
			case 'l':num[11]++;break;
			case 'm':num[12]++;break;
			case 'n':num[13]++;break;
			case 'o':num[14]++;break;
			case 'p':num[15]++;break;
			case 'q':num[16]++;break;
			case 'r':num[17]++;break;
			case 's':num[18]++;break;
			case 't':num[19]++;break;
			case 'u':num[20]++;break;
			case 'v':num[21]++;break;
			case 'w':num[22]++;break;
			case 'x':num[23]++;break;
			case 'y':num[24]++;break;
			case 'z':num[25]++;break;
		}
	}
}

void output(int *num){
	for(int i=0;i<26;i++){
		printf("%c:%d\n",97+i,num[i]);
	}printf("\n");
}
int main(){
	char str[100001];
	int num[27],length;
	while(gets(str)){
		memset(num,0,sizeof(num[0])*26);
		length=strlen(str);
		caculate(str,num,length);
		output(num);
	}
}