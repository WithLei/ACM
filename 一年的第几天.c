#include <stdio.h>
int main(){
	int year,month,date,day;
	scanf("%d%d%d",&year,&month,&date);
	if(year>0){
	if(year%400==0){
		if(month==1){
	day=date;
}
else if(month==2){
	day=31+date;
}
else if(month==3){
	day=31+29+date;
}
else if(month==4){
	day=31*2+29+date;
}
else if(month==5){
	day=31*2+30+29+date;
}
else if(month==6){
	day=31*3+30+29+date;
}
else if(month==7){
	day=31*3+30*2+29+date;
}
else if(month==8){
	day=31*4+30*2+29+date;
} 
else if(month==9){
	day=31*5+30*2+29+date;
}
else if(month==10){
	day=31*5+30*3+29+date;
}
else if(month==11){
	day=31*6+30*3+29+date;
}
else if(month==12){
	day=31*6+30*4+29+date;
}
	}else{
		if(year%100==0){
			if(month==1){
	day=date;
}
else if(month==2){
	day=31+date;
}
else if(month==3){
	day=31+28+date;
}
else if(month==4){
	day=31*2+28+date;
}
else if(month==5){
	day=31*2+30+28+date;
}
else if(month==6){
	day=31*3+30+28+date;
}
else if(month==7){
	day=31*3+30*2+28+date;
}
else if(month==8){
	day=31*4+30*2+28+date;
} 
else if(month==9){
	day=31*5+30*2+28+date;
}
else if(month==10){
	day=31*5+30*3+28+date;
}
else if(month==11){
	day=31*6+30*3+28+date;
}
else if(month==12){
	day=31*6+30*4+28+date;
}
		}else{
			if(year%4==0){
				if(month==1){
	day=date;
}
else if(month==2){
	day=31+date;
}
else if(month==3){
	day=31+29+date;
}
else if(month==4){
	day=31*2+29+date;
}
else if(month==5){
	day=31*2+30+29+date;
}
else if(month==6){
	day=31*3+30+29+date;
}
else if(month==7){
	day=31*3+30*2+29+date;
}
else if(month==8){
	day=31*4+30*2+29+date;
} 
else if(month==9){
	day=31*5+30*2+29+date;
}
else if(month==10){
	day=31*5+30*3+29+date;
}
else if(month==11){
	day=31*6+30*3+29+date;
}
else if(month==12){
	day=31*6+30*4+29+date;
}
			}else{
				if(month==1){
	day=date;
}
else if(month==2){
	day=31+date;
}
else if(month==3){
	day=31+28+date;
}
else if(month==4){
	day=31*2+28+date;
}
else if(month==5){
	day=31*2+30+28+date;
}
else if(month==6){
	day=31*3+30+28+date;
}
else if(month==7){
	day=31*3+30*2+28+date;
}
else if(month==8){
	day=31*4+30*2+28+date;
} 
else if(month==9){
	day=31*5+30*2+28+date;
}
else if(month==10){
	day=31*5+30*3+28+date;
}
else if(month==11){
	day=31*6+30*3+28+date;
}
else if(month==12){
	day=31*6+30*4+28+date;
}
			}
		}
	}
}printf("%d\n",day);}