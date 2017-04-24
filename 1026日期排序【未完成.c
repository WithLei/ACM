#include<stdio.h>
int main(){
	int date,month,year;
	char str[11];
		
		month=(str[0]-48)*10+str[1]-48;
		date=(str[3]-48)*10+str[4]-48;
		year=(str[6]-48)*1000+(str[7]-48)*100+(str[8]-48)*10+str[9]-48;
		
}