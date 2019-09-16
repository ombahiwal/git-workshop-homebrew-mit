#include<stdio.h>
void main()
{
	int size,i,first,last,mid,search;
	printf("Enter size of array");
	scanf("%d",&size);
	int arr[size];
	printf("enter the no of elements:\n");
	for(i=0;i<size;i++)
		{
		  scanf("%d",&arr[i]);
		}
		
	  printf("enter the integer to be search\n");
	  scanf("%d",&search);
	  first=0;
	  last=size-1;
	  mid=(first<=last)/2;
	  while(first<=last)
	  {
		if(arr[mid]<search)
		first=mid+1;
	    
	    	else if(arr[mid]==search)
		    {
		    
		    printf("%d is found at location %d\n",search,mid);
		    break;
		    }
			 else
			 last=mid-1;
			  mid=(first+last)/2;
	    
	   }
	    if(first>last)
	    printf("Number is not found \n %d is not in list",search);
	    }
