#include<stdio.h>

int linear_search(void *arr, void *key, int count,  int(*cmp)(void *, void * , int ))
{
    for (int i=0; i < count; i++)
    {
	if ( cmp(arr, key, i) == 1 )
	    return i;
    }
    return -1;
}
