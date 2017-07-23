void quick_sort(int *ptr,int left,int right)
{
	int i,j,temp,base;
	if (left > right)
	   return;//ÖÐÍ¾ÍË³öº¯Êý 
	   
	i = left;
	j = right;
	base = ptr[left];
	
	while (i != j)
	{
		while (i < j && ptr[j] >= base)
		      j --;
		while (i < j && ptr[i] <= base)
		      i ++;  
		
		if (i < j)
		{
			temp = ptr[i];
		    ptr[i] = ptr[j];
		    ptr[j] = temp;
		}	     		
	}
	
	ptr[left] = ptr[i];
	ptr[i] = base;
	
	quick_sort(ptr,left,i-1);
	quick_sort(ptr,i+1,right);
}
