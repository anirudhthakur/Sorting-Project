void swap(void **a, int i, int j)
{
    void *temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

