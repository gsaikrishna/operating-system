//gunturi sai krishna __osprojectcode__roll no 17....//
#include<stdio.h>
#include<string.h>
int check1[10000];
int check2[10000];
int main()
{
	int cases;
	int i,n,passm,passg,p,r,passd,en,ex;
	long int k;
	printf("enter the number of cases");
	scanf("%d",&cases);
	while(cases--)
	{
		memset(check1,0,sizeof(check1));
		memset(check2,0,sizeof(check2));
		printf("enter the n,passm,passg,p,r,k\n");
		scanf("%d%d%d%d%d%ld",&n,&passm,&passg,&p,&r,&k);
		en=0;
		ex=0;
		passd = 0;
		if(n==0)
		{
		    	for(i=1;i<=k;i++)
		{
		   if(i%r == 0)
		   {
		   	if(passm>0)
		   	{
		   	passm--;
		   	passg++;
		    }
		   }
	    }
			printf("0 0 %d %d\n",passm,passg);
		}
		else
		{
		if(n>=passg)
		{
			check1[en]= p;
			check2[en]= passg;
			n = n-passg;
			passg=0;
		
		}
		else
		{
			check1[en]= p;
			check2[en]=n;
			passg = passg-n;
			n=0;
			
		}
			//		printf("%d %d %d %d %d\n",n,passd,passm,passg,k);
		for(i=1;i<=k;i++)
		{
	//		printf("here\n");
		   if(i%r == 0)
		   {
		   	if(passm>0)
		   	{
		   	passm--;
		   	passg++;
		    }
		   }
	//	   printf("here\n");
		   if(check1[ex] == i)
		   {
		   	n= n+check2[ex];
		   	passd+=check2[ex];
		   	ex++;
		   }
		   if((n>0)&&(passg>0))
		   {
		   	en++;
		   	check1[en] = i+p;
		   	 if(n>passg)
		   	 {
		   	 check2[en] = passg;
				n = n-passg;
				passg=0;	
		   	 }
		   	 else
		   	 {
		   	 	check2[en]=n;
		   	 	passg-=n;
		   	 	n = 0;
		   	 } 
		   	 
		   } 	
		}
		printf("No. of cars waiting at the park gate, No. of passengers completed the park ride,\n No. of passengers wandering in the museum, No. of passengers still waiting to take a ride\n");
		printf("%d %d %d %d\n",n,passd,passm,passg);
	   }
	}
	return 0;
}

