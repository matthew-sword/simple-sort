void selection_sort(int *ptr, int n)
{
	int i,j,k,temp;
	 
	for (i = 0;i < n-1;i ++)
	{
	    k = i;
		for (j = i + 1;j < n;j ++)
		{
			if( ptr[k] > ptr[j])
			  	k = j;
			  
		    if (k != i)
		    {
		        temp = ptr[i];
		        ptr[i] =ptr[k];
		        ptr[k] = temp;
		    }
		  	  
		} 
		
	}
}
