#include<stdio.h>

int binary_search(void *arr, void *key, int left, int right, int (*cmp)(void *, void * , int ))
{
    if (left > right)
	return(-1);

    int mid = (left + right) / 2;

    if (cmp(arr, key, mid) == 0)
	return(mid);

    if (cmp(arr, key, mid) > 0)
	return(binary_search(arr, key, mid+1, right, cmp));

    if (cmp(arr, key, mid) < 0)
	return(binary_search(arr, key, left, mid-1, cmp));
}
