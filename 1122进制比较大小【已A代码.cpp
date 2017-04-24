#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int Alength,Blength;
void getLength(char *a,char *b){
	Alength=strlen(a);
	Blength=strlen(b);
} 
double bignum(int length,char *a){//¡Á?¡ä¨®?????¨´¡À¨ª¨º?¦Ì??¦Ì 
	double sum=0;
	for(int i=0;i<length;i++){
		switch(a[i]){
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':sum+=(a[i]-48)*pow(16,length-i-1);break;
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':sum+=(a[i]-55)*pow(16,length-i-1);break;
		}
	}
	return sum;
}
int R(int length,char *a){
	int r=a[0];
	for(int i=0;i<length-1;i++){
		if(a[i]<a[i+1]){r=a[i+1];}
	}
	if(r>='A'&&r<='F'){r-=55;}
	else if(r>='0'&&r<='9'){r-=48;}
	return r+1;
}
double smallnum(int length,int r,char *a){
	double sum=0;
	for(int i=0;i<length;i++){
		switch(a[i]){
			case '0':
			case '1':
			case '2':
			case '3':
			case '4':
			case '5':
			case '6':
			case '7':
			case '8':
			case '9':sum+=(a[i]-48)*pow(r,length-i-1);break;
			case 'A':
			case 'B':
			case 'C':
			case 'D':
			case 'E':
			case 'F':sum+=(a[i]-55)*pow(r,length-i-1);break;
		}
	}
	return sum;
}

int main(){
	char A[50],B[50];
	while(scanf("%s %s",A,B)!=EOF){
		getLength(A,B);
		if(bignum(Alength,A)<=smallnum(Blength,R(Blength,B),B)||bignum(Alength,A)>10000.0||bignum(Blength,B)>10000.0||
		smallnum(Alength,R(Alength,A),A)>10000.0||smallnum(Blength,R(Blength,B),B)>10000.0){printf("B\n");}
		else if(bignum(Blength,B)<=smallnum(Alength,R(Alength,A),A)){printf("A\n");}
		else{
			printf("Can't Comparable\n");
		}
	}
}
