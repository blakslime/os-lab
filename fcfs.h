
void sort(int p[],int bt[],int at[],int n) 
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
  
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
  
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;

	temp=at[i];
        at[i]=at[pos];
        at[pos]=temp;
    }


}  
