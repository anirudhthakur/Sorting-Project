#include <stdio.h>
#include <stdlib.h>
#include"sort.h"
#include<string.h>


struct record{
    char name[100];
    int id;
};

// comparator function to compare integer elements
int cmp_int(void *a, void *b)
{
    int *i = (int *)a;
    int *j = (int *)b;

    if(*i == *j) 
	return 0;

    if(*i > *j)
        return 1;

     return -1;
}

// comparator function to compare float elements
int cmp_float(void *a, void *b)
{
    float *i = (float *)a;
    float *j = (float *)b;

    if(*i == *j) 
	return 0;

    if(*i > *j) 
	return 1;

    return -1;
}

// comparator function to compare by name
int cmp_name(void *i, void *j)
{
     struct record *x = (struct record *)i;
     struct record *y = (struct record *)j;
     
     return strcmp(x->name,y->name);
}

// comparator function to compare id
int cmp_id(void *i, void *j)
{
     struct record *x = (struct record *)i;
     struct record *y = (struct record *)j;
     return x->id - y->id;
}

// function to print array
void print(struct record **a,int n)
{
    for(int i = 0 ; i < n; i++)
    {
        printf("Id = %d  Name = %s\n",a[i]->id,a[i]->name);
    }
}

int main()
{
    int n;
    printf("Enter Number Of Records : ");
    scanf("%d",&n);

    struct record *arr = (struct record *)malloc(sizeof(struct record)*n);

    // array to store addresses of elements of the array which is to be sorted.
    struct record **a = (struct record **)malloc(sizeof(struct record *)*n);
    struct record **b = (struct record **)malloc(sizeof(struct record *)*n);


    // taking input
    for(int i = 0 ; i < n ; i++)
    {
        printf("Enter Id : ");
	scanf("%d",&arr[i].id);
	printf("Enter Name : ");
	scanf("%s",arr[i].name);
    }

    // storing addresses in helper array
    for(int i = 0 ; i < n ; i++)
    {
        a[i] = &arr[i];
    } 
    
    // function to print array
    printf("\nBefore Sorting : \n");
    print(a,n);

    // sort array
    //bubble_sort((void **)a, n, cmp_id);

    //bubble_sort((void **)a, n, cmp_name);
    
    merge_sort((void **)a, 0, 4, (void **)b, cmp_name);

    // print sorted array
    printf("\nAfter Sorting\n");
    print(a,n);

}
