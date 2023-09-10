Q7 Define a structure data type called time_struct containing 3 members int hour, int
minute and int second. Write functions that accept the structure to perform the
following operations:
1. Input new time
2. Display the time
3. Update the time such that the function accepts the time_struct and
increments the time by one second.(If the increment results in 60 seconds, the then
second member is set to 0 and the minute is incremented by 1. Then, if the result is 60
minutes, the minute member is set to 0 and the hour member is incremented by 1.
Finally when the hour becomes 24, it is set to zero.)


#include<stdio.h>

struct time
{
    int hour;
    int min;
    int sec;
};

void main()
{
    struct time t1;
    printf("Enter value of hours :");
    scanf("%d",&t1.hour);
    printf("Enter value of min :");
    scanf("%d",&t1.min);
    printf("Enter value of sec :");
    scanf("%d",&t1.sec);


    struct time t2;
    printf("Enter value of hours :");
    scanf("%d",&t2.hour);
    printf("Enter value of min :");
    scanf("%d",&t2.min);
    printf("Enter value of sec :");
    scanf("%d",&t2.sec);

    t1.sec += t2.sec;
    if(t1.sec > 60)
    {
        t1.sec -= 60;
        t1.min++;
    }

    t1.sec += t2.min;
    if(t1.min > 60)
    {
        t1.min -= 60;
        t1.hour++;
    }

    t1.hour += t2.hour;
    if(t2.hour > 24)
    {
        t1.sec -= 24;
    }

    printf("Hours : ");
    printf("%d\n",t1.hour);
    printf("Minutes : ");
    printf("%d\n",t1.min);
    printf("Seconds : ");
    printf("%d\n",t1.sec);
}