#include <stdio.h>

void merge(void **a, int l, int mid, int h, void **b, int(*cmp)(void *, void*))
{
    int k = l;
    int i = l;
    int j = mid + 1;

    while(k <= h)
    {
        if( i > mid )
	    b[k++] = a[j++];
	else if( j > h )
	    b[k++] = a[i++];
	else if ( (*cmp)(a[i], a[j]) > 0 )
	    b[k++] = a[j++];
	else
	    b[k++] = a[i++];
    }

    for(k = l; k <= h; k++)
    {
        a[k] = b[k];
    }
}

void merge_sort(void **a, int l, int h, void **b, int (*cmp)(void *, void *))
{
    if( l == h )
	return ;
    int mid = (l + h)/2;
    merge_sort(a, l, mid, b, cmp);
    merge_sort(a, mid + 1, h, b, cmp);
    merge(a, l, mid, h, b, cmp);
}
