#include"sort.h"
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct record
{
    int id;
    char name[100];
}arr[100];


// A comparator function to check id is equal to key or not.
int cmp_1(void *arr, void *key, int i)
{
    int *id = (int *)key;
    struct record *x = ((struct record *)(arr) + i);

    if (*id == x->id)
        return 1;
    else
	return -1;
}

// A comparator function to check name is equal to key or not.
int cmp_2(void *arr, void *key, int i)
{
    char *name = (char *)key;	
    struct record *x = ((struct record *)(arr) + i);

    if(strcmp(x->name, name)==0)
	return 1;
    else
	return -1;
}
		
			
int main()
{
	
    int n; 		
    printf("Enter the number of records : ");
    scanf("%d", &n);
		
    int i;
    for(i = 0 ; i < n; i++)
    {
        printf("Enter the details\nRecord %d-\n", i+1);
			
	printf("Enter  ID :  ");

	scanf("%d", &arr[i].id);
	
	printf("Enter  name :  ");	
	
	scanf("%s", arr[i].name);
    }			

    /*printf("\nEnter the ID to search for-  ");
    int record_id;
    scanf("%d", &record_id);
    int res = linear_search(arr, &record_name, n, &cmp_1);
    */

    printf("\nEnter the name to search for-  ");
		
    char record_name[100];
    scanf("%s", record_name);

    int res = linear_search(arr, &record_name, n, &cmp_2);
    
    if(res == -1)
    {
        printf("\nRecord Not Found\n");
    }
    else
        printf("Record Found\nID = %d, Name = %s\n", arr[res].id, arr[res].name);
}
