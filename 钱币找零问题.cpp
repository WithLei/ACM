#include<stdio.h>
//假设1元、2元、5元、10元、20元、50元、100元的纸币分别有c0, c1, c2, c3, c4, c5, c6张。
//现在要用这些钱来支付K元，至少要用多少张纸币 
void ccl(int c1,int c2,int c5,int c10,int c20,int c50,int c100,int k){
	k%
}
int main(){
	int c1,c2,c5,c10,c20,c50,c100,k;
	printf("请分别输入1元、2元、5元、10元、20元、50元、100元的纸币分别有多少张：\n");
	scanf("%d%d%d%d%d%d%d",&c1,&c2,&c5,&c10,&c20,&c50,&c100);
	if(c1+c2*2+c5*5+c10*10+c20*20+c50*50+c100*100<k){
		printf("钱不够\n");
	}else{
		ccl(c1,c2,c5,c10,c20,c50,c100,k);
	}
}