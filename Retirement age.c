#include<stdio.h>
int main(){
	int workyear,nowyear,birthyear,workmonth,nowmonth,birthmonth,workdate,nowdate,birthdate;
	char birth[9],work[9],now[9];
	scanf("%s",birth);
	scanf("%s",work);
	scanf("%s",now);
	//工作的年份： 
	workyear=(work[0]-48)*1000+(work[1]-48)*100+(work[2]-48)*10+work[3]-48;
	workmonth=(work[4]-48)*10+work[5]-48;
	workdate=(work[6]-48)*10+work[7]-48;  
	//现今年份 
	nowyear=(now[0]-48)*1000+(now[1]-48)*100+(now[2]-48)*10+now[3]-48; 
	nowmonth=(now[4]-48)*10+now[5]-48;
	nowdate=(now[6]-48)*10+now[7]-48;  
	//出生年份
	birthyear=(birth[0]-48)*1000+(birth[1]-48)*100+(birth[2]-48)*10+birth[3]-48;  
	birthmonth=(birth[4]-48)*10+birth[5]-48;
	birthdate=(birth[6]-48)*10+birth[7]-48;  
	if((nowyear-birthyear)>60||(nowyear-workyear)>30){//年龄大于60或工龄大于30 
		printf("YES\n");}
	else if((nowyear-birthyear)<60&&(nowyear-workyear)<30){//年龄小于60以及工龄小于30 
		printf("NO\n");}
	else if((nowyear-birthyear)==60){//年龄等于60 
		if(nowmonth>birthmonth){printf("YES\n");}//比较月份 
		else if(nowmonth<birthmonth){printf("NO\n");}
		else{if(nowdate>birthdate){printf("YES\n");}
			else{printf("NO\n");}
		}
			}
	else if((nowyear-workyear)==30){//工龄=30 
		if(nowmonth>workmonth){printf("YES\n");}//比较月份 
		else if(nowmonth<workmonth){printf("NO\n");}
		else{if(nowdate>workdate){printf("YES\n");}
			else{printf("NO\n");}
		}
			}
}