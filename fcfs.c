// First come first served
#include<stdio.h>
#include "fcfs.h"
/*void sort(int p[],int at[],int n) 
{ 
	int i,pos,temp,j;
   for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(at[j]<at[pos]) { 
                pos=j; 
		} 
		printf("i is %d, j is %d , pos is %d\n",i,j,pos);
        }
  
        temp=at[i];
        at[i]=at[pos];
        at[pos]=temp;
  
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }


}  
*/
 int main()
{
    int bt[20],at[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avg_wt,avg_tat;
    printf("Enter number of process:");
    scanf("%d",&n);
  
    printf("nEnter Arrival Time:n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&at[i]);
        p[i]=i+1;         
    }  
    printf("nEnter burst Time:n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
                
    }  
	sort(p,bt,at,n);
 /*  for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(at[j]<at[pos]) { 
                pos=j; 
		} 
		printf("i is %d, j is %d , pos is %d\n",i,j,pos);
        }
  
        temp=at[i];
        at[i]=at[pos];
        at[pos]=temp;
  
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    } */

 wt[0]=0;            
  
    for(i=0;i<n;i++) { 
	printf("	%d,%d\n",p[i],at[i]);
	}

   
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
  
        total+=wt[i];
    }
  
    avg_wt=(float)total/n;      
    total=0;

printf("nProcess\t  Arrival Time  burst time   Waiting Time   Turnaround Time\n");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];   
        total+=tat[i];
        printf("np%d\t\t  %d\t\t %d\t   %d\t\t\t%d\n",p[i],at[i],bt[i],wt[i],tat[i]);
    }
  
    avg_tat=(float)total/n;    
    printf("nnAverage Waiting Time=%f\n",avg_wt);
    printf("nAverage Turnaround Time=%f\n",avg_tat);
} 
