    #include<stdio.h>
    #include<stdlib.h>
	struct In   
    {   
        int x;   
        int y;   
    }s[100]={{7,2},{2,0},{4,3},{6,5},{9,1}};   
      
    //����x��С�������򣬵�x���ʱ����y�Ӵ�С����   
      
    int cmp( const void *a , const void *b ) 
	{ 
	struct In *c = (In *)a; 
	struct In *d = (In *)b; 
	if(c->y != d->y) return c->y - d->y; 
	else return d->x - c->x; 
	}  
	 
    int main(){
    	qsort(s,5,sizeof(s[0]),cmp);   
    	for(int i=0;i<5;i++){
	    	printf("%d  %d\n",s[i].x,s[i].y);
	    }
	
    }
 