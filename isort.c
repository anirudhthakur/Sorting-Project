#include<stdio.h>

void insertion_sort(void **a, int n, int(*cmp)(void *, void *))
{
    int i, j;
    void *curr;
    for( i = 0 ; i < n; i++)
    {
        curr = a[i];
	j = i - 1 ;
	while ( j >= 0 && ((*cmp)(a[j], curr) > 0))
	{
	    a[j+1] = a[j];
	    j = j - 1;
	}
	a[j+1] = curr;
    }
}
