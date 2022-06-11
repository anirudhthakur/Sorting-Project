#include<stdio.h>
#include"sort.h"
void q_sort(void **a, int l, int h, int (*cmp)(void *, void *))
{
    if (l >= h)
    {
        return;
    }

    int last = l;

    int i = l + 1;
    for (; i <= h; i++)
    {
        if ((*cmp)(a[i], a[l]) < 0)
        {
            swap(a, i, ++last);
        }
    }
    swap(a, l, last);
    q_sort(a, l, last - 1, cmp);
    q_sort(a, last + 1, h, cmp);
}
