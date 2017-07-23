void selection_sort(int *ptr, int n)
{
    int i,j,k,temp;

    for (i = 1;i < n;i ++)
	{
		temp = ptr[i]; 
		for (j = i - 1;j >= 0;j --)
		{
			if (temp < ptr[j])
				{
					ptr[j + 1] = ptr[j];
					ptr[j] = temp;
				}
			
		}
		
	}
	
}
