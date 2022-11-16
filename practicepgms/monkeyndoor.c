#include<stdio.h>
    int door[100];
    void initialiseDoor()
    {
        for(int a=0;a<100;a++)
        door[a]=0; //door closed, 1 indicates door is open
    }

    void opencloseDoor()
    {
        for(int i=1;i<=100;i++) //ith monkey
        {
            for(int j=i;j<=100;j=j+i) //doors that the ith monkey has the key for
            {
                if(door[j-1]==0)
                door[j-1]=1; //opens the door
                else
                door[j-1]=0; //closes the door
            }
        }
    }
    void results()
    {
        int c=0;
        for(int i=0;i<100;i++)
        {
            if(door[i]==1)
            {
                c++;
                   printf("Door number %d is Open.\n", (i+1));
            }
        }
        printf("Number of doors open:%d",c);
    }
    int main()
    {
        initialiseDoor();
        opencloseDoor();
        results();   
           return 0;
    }