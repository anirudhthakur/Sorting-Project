#include<stdio.h>
#include"sort.h"

void bubble_sort(void **a, int n, int(*cmp)(void *, void *))
{
    int i = 0, j;
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - i - 1; j++)
	{
            if((*cmp)(a[j], a[j+1]) > 0)
     	    swap(a , j, j+1);
	}
    }
}
