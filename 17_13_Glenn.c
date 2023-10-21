#include<stdio.h>
int f=-1, r=-1;
int n=5, x, choice;
int arr[5];
void makeEmpty(int arr[])
{
    f=r=-1;
}
void enQueue(int x, int arr[])
{
    if((r==n-1)&&(f==0)||(f==r+1))
    {
        printf("Queue is full");
        return;
    }
    if(f==-1)
    {
        f++;
    }
    r = (r+1)%n;
    arr[r]= x;
}
void deQueue(int arr[])
{
    if(f==-1)
    {
        printf("Queue is empty");
        return;
    }
    if(f==r)
    {
        f=-1;r=-1;
        return;
    }
    f=(f+1)%n;
}
void printArr(int arr[])
{
    if(f==-1)
    {
        printf("Queue is empty");
        return;
    }
	int i=f-1;
    do
    {
    	i=(i+1)%n;
        printf("%d\n", arr[i]);
    }while(i!=r);
}
void main()
{

    while(choice!=4)
    {
        printf("\n\n\n\n-----These are the menu panel-----");
        printf("\n1. Enter in Queue");
        printf("\n2. Delete from Queue");
        printf("\n3. Traverse");
        printf("\n4. Exit");
        printf("\nenter the option no.: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: 
            printf("enter the number you wnat to push: ");
            scanf("%d", &x);
            enQueue(x, arr);
                break;
            case 2: deQueue(arr);
                break;
            case 3: printArr(arr);
                break;
            case 4:
                break;
            default:
                printf("incorrect choice");
        }
    }

    printf("You got exit\n\n");
}
