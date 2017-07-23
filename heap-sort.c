void max_heap(int* ptr, int i, int n)	//构造大根堆 
{
    int child,temp;
    
    for (temp = ptr[i]; 2*i+1 < n; i = child){
        child = 2*i+1;      //数组下标从0开始，左孩子不是2*i
        if (child != n - 1 && ptr[child + 1] > ptr[child])
            ++child;                //找到最大的儿子节点
        if (temp < ptr[child])
            ptr[i] = ptr[child];
        else
            break;
    }
    ptr[i] = temp;
}

void heap_sort(int* ptr, int n)
{
    int i,temp;
    
    //构造堆
    for (i = n / 2; i >= 0; --i)
        max_heap(ptr, i, n); 
	
	//将最大元素（根）与数组末尾元素交换，从而删除最大元素，重新构造堆	   
    for(i=n-1;i>0;--i)
    {
        temp = ptr[0];	
        ptr[0] = ptr[i];
        ptr[i] = temp;
        
		max_heap(ptr, 0, i);
    }
}

