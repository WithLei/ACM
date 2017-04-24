#include<stdio.h>
int Cnt(char c)
{
	if(c<='9'&&c>='0') return c-'0';
	else return c-'A'+10;
}
int Cal(char *s,int f)
{
	int i;
	int sum=0;
	for(i=0;s[i];i++)
	{
		sum=sum*f+Cnt(s[i]);
		if(Cnt(s[i])>=f) return -1;
		else if(sum>10000) return -1;
	}
	return sum;
}
int main()
{
	FILE * fp1 = fopen("input.txt", "r");//�������ļ�
    FILE * fp2 = fopen("output2.txt", "w");//������ļ�
    if (fp1==NULL || fp2==NULL) {//�����ļ�ʧ�����˳�
        puts("���ܴ��ļ���");
        return 0;
    }
	int maxA,maxB,minA,minB,t,i;
	char A[20],B[20];
	while(fscanf(fp1,"%s %s",A,B)!=EOF)
	{
		maxA=-1;
		maxB=-1;
		minA=100000;
		minB=100000;
		for(i=2;i<=16;i++)
		{
		   t=Cal(A,i);
			if(t>maxA) maxA=t;
			if(t>0&&t<minA) minA=t;
			t=Cal(B,i);	
			if(t>maxB) maxB=t;
			if(t>0&&t<minB) minB=t;
		}
		if(maxA<=minB) fprintf(fp2,"B\n");
		else if(minA>=maxB) fprintf(fp2,"A\n");
		else fprintf(fp2,"Can't Comparable\n");
	}
	fclose(fp1);//�ر������ļ�
    fclose(fp2);//�ر�����ļ����൱�ڱ���
    return 0;
}