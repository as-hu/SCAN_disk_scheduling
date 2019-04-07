#include<conio.h>
#include<stdio.h>

# define MAX 4999

int main()
{
	int ar1[50],ar2[50],i,j,x,temp,n;
    int head,prev_head;
	
	 printf("Enter the positionof the head--> ");
	 scanf("%d",&ar1[0]);
	 head=ar1[0];
	 printf("\n");
	 
	 printf("Enter the position of previous head--> ");
	 scanf("%d",&prev_head);	
	 printf("\n");
	 	
	 printf("Enter total number of processes-->");
	 scanf("%d",&n);
	 printf("\n");
	 
	 
	 printf("Enter the queue of pending request in FIFO order");
	 for(i=1;i<=n;i++)
	 {
	  scanf("%d",&ar1[i]);
	 }
	 
	 ar1[n+1]=MAX;
	 ar1[n+2]=0;
	 for(i=n+1;i>=0;i--)
	 {for(j=0;j<=i;j++)
	   {
	     if(ar1[j]>ar2[j+1])
		   {
		    temp=ar1[j];
		    ar1[j]=ar1[j+1];
		    ar1[j+1]=temp;
		   }
	   }
	 }
	 
	 for(i=1;i<=n+1;i++)
		{
		  if(head==ar1[i])
		  	x = i;
		}
	 
	j=0;
	int sum=0;
	if(head<prev_head)
	 {
	  for(i=x;i>0;i--)
	  {
	   sum+=(ar1[i]-ar1[i-1]);
	   ar2[j++]=ar1[i];
	  }
	  sum+=ar1[x+1]-ar1[0];
	  ar2[j++]=ar1[0];
	  for(i=x+1;i<n+1;i++)
	  {
	   sum+=(ar1[i+1]-ar1[i]);
	   ar2[j++]=ar1[i];
	  }
	  ar2[j++]=ar1[i];
	 }
	else
	 {
	  for(i=x;i<n+2;i++)
	  {
	   sum+=(ar1[i+1]-ar1[i]);
	   ar2[j++]=ar1[i];
	  }
	  sum+=ar1[n+2]-ar1[x-1];
	  ar2[j++]=ar1[n+2];
	  for(i=x-1;i>1;i--)
	  {
	   sum+=(ar1[i]-ar1[i-1]);
	   ar2[j++]=ar1[i];
	  }
	  ar2[j++]=ar1[i];
	 }
	 
	 printf("\n");
	 printf(" Overall Processing order will be -\n");
	 for(i=0;i<=n+1;i++)
	 printf("%d --> ",ar2[i]);
	 printf("\nTotal Head Movement=%d",sum);
	 getch();
	
	 
	 
	 
		
}
