#include<stdio.h>
#include<memory.h>
int main(){
	char num1[1001],num2[1001],num3[1003];
	int i,length1,length2,length3;
	scanf("%s%s",num1,num2);
	length1=strlen(num1);
	length2=strlen(num2);
	
	
	if(length1>=length2){
		memset(num3,'0',sizeof(num3)*(length1+1));//num3��ʼ��0
	for(i=length1;i>0;i--){
		if((num1[i]+num2[i]-96)>10){num3[i+1]+=num1[i]+num2[i]-58;num3[i]='1';}
		else{num3[i+1]=num1[i]+num2[i]-48;printf("%c\n",num3[i+1]);}
	}}
	
	else{
		memset(num3,'0',sizeof(num3)*(length2+1));//num��ʼ��0
	for(i=length2;i>0;i--){
		if((num1[i]+num2[i]-96)>10){num3[i+1]+=num1[i]+num2[i]-58;num3[i]='1';}
		else{num3[i+1]=num1[i]+num2[i]-48;}
	}
	
	length3=strlen(num3);
	if(num3[0]=='0'){//��һλΪ0 ,����������ǰ�� 
		for(i=0;i<length3;i++){num3[i]=num3[i+1];}}
	}
	printf("%s\n",num3);
}