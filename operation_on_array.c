/*Q. Implement a List using Array and develop functions to perform insertion, deletion and linear search 
operations?
Name      Aniket Manhas
Roll no.  148*/
#include<stdio.h>
void main()
{   
    int choice,pos,size,i,arr[100]; /*variable declaraion where i is for loop and pos is for storing position of changing variable*/
    printf("Enter the number of elements you want to enter : ");
    scanf("%d",&size);                 
    printf("Enter elements of the array\n");
    for(i=0;i<size;i++)         //inserting values in array
        {
            scanf("%d",&arr[i]);           
        }
    printf("Elements of array are\n");
    for(i=0;i<size;i++)         //displaying values of array
    {
        printf("%d\n",arr[i]);         
    }
    printf("Enter the respective number for performing the following task\n");
    printf("1. insertion\n");
    printf("2. deletion\n");
    printf("3. linear search\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:                         //code for inserting operation
            {
            printf("Enter the position where you want to add element : ");
            scanf("%d",&pos);
            size++;                     //incrementing size of array by 1        
            for(i=size;i>=pos;i--)
            {
                arr[i]=arr[i-1];        //shifting elements of array
            }
            printf("Enter the element : ");
            scanf("%d",&arr[pos-1]);    
            printf("Elements of array are\n");
            for(i=0;i<size;i++)
            {
                printf("%d\n",arr[i]);  //displaying values of array
            }
            break;
        }
        case 2:                         //code for deletion operation
        {
            printf("Enter the position of element of array you want to delete : ");
            scanf("%d",&pos);
            for(i=pos;i<size;i++)
            {
                arr[i-1]=arr[i];        //shifting elements of array to left
            }
            printf("Elements of array are \n");
            for(i=0;i<size-1;i++)
            {
                printf("%d\n",arr[i]);  //displaying array after deletion of element
            }
            break;
        }
        case 3:                         //linear search
        {
            int ele,k=0;                /*variable decleration where ele is for storing element you want to search*/
            printf("Enter the element you want to find : ");
            scanf("%d",&ele);           //storing element you want to search
            for(i=0;i<size;i++)
            {
                if(ele==arr[i])         //if match found then this statement will run
                {
                    printf("%d is present at index %d\n",ele,i);
                    k++;
                }
            }
            if(k==0)                    //if no match found this statement will run  
            {
                printf("%d is not present in array",ele);
            }
            break;
        }
        default :
        {
            printf("Enter valid choice");
        }
    }
}
