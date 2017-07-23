void max_heap(int* ptr, int i, int n)	//�������� 
{
    int child,temp;
    
    for (temp = ptr[i]; 2*i+1 < n; i = child){
        child = 2*i+1;      //�����±��0��ʼ�����Ӳ���2*i
        if (child != n - 1 && ptr[child + 1] > ptr[child])
            ++child;                //�ҵ����Ķ��ӽڵ�
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
    
    //�����
    for (i = n / 2; i >= 0; --i)
        max_heap(ptr, i, n); 
	
	//�����Ԫ�أ�����������ĩβԪ�ؽ������Ӷ�ɾ�����Ԫ�أ����¹����	   
    for(i=n-1;i>0;--i)
    {
        temp = ptr[0];	
        ptr[0] = ptr[i];
        ptr[i] = temp;
        
		max_heap(ptr, 0, i);
    }
}

