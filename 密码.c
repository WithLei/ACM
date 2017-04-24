#include<stdio.h>
#include<string.h> 
int main(){
	int M,i,ii,c,capital,little,num,other,sum,length;
	char str[51];
	scanf("%d",&M);
	getchar();//吃回车 
	for(i=0;i<M;i++){//遍历M遍 
		capital=little=num=other=0;
		for(ii=0;(c=getchar())!=EOF&&c!='\n';ii++){
			str[ii]=c;
			if(c>='A'&&c<='Z'){capital=1;}
			else if(c>='a'&&c<='z'){little=1;}
			else if(c>='0'&&c<='9'){num=1;}
			else if(c=='~'||c=='!'||c=='@'||c=='#'||c=='$'||c=='%'||c=='^'){other=1;}
			}//输入密码，存入str[]
		length=strlen(str);
		sum=capital+little+num+other;
		if(length<8||length>16){continue;}
		if(sum>=3){printf("YES\n");	}else{
			printf("NO\n");}
	}
}