 #include<stdio.h>
#include<process.h>
#define size 5
struct priorityqueue
{
	int ele;
	int priority;
}pq[size];
int rear=-1;
void insert();
int gethighestpriority();
int deletehighestpriority();
void display();
int main()
{
	int ch;
	while(1)
       {
	 printf("\n PRESS 1 FOR INSERT:");
	 printf("\n PRESS 2 FOR GET HIGHEST PRIORITY:");
	 printf("\n PRESS 3 FOR DELETE HIGHEST PROORITY");
	 printf("\n PRESS 4 FOR DISPLAY");
	 printf("\n PRESS 5 FOR EXIT");
	 
	 printf("\n SELECT YOUR OPTION:");
	 scanf("%d",&ch);
	 
	 switch(ch)
	 {
	 	case 1:insert();
	 	break;
	 	case 2:gethighestpriority();
	 	break;
	 	case 3:deletehighestpriority();
	 	break;
	 	case 4:display();
	 	break;
	 	case 5:exit(0);
	 	break;
	 	
	 	default:printf("\n INVALIDE YOUR OPTION");
	 	
	 	
	 }
	} 
	
     

}
void insert()
{

	if(rear==size-1)
	{
		printf("\n PRIORITY QUEUE IS FULL");
		return;
	}
	else 
	{
              rear=rear+1;
		printf("\n ENTER ELEMENT TO INSERT:");
		scanf("%d",&pq[rear].ele);
		printf("\n ENTER PRIORITY ELEMENT:");
		scanf("%d",&pq[rear].priority);
		
	} 

}
int gethighestpriority()
{
	int i,p=0;
	if(rear==-1)
	{
		printf("\n PRIORITY QUEUE IS EMPTY");
		return;
	}
	else 
	{
		for(i=0;i<=rear;i++)
		{
			if(pq[i].priority>p)
			{
				p=pq[i].priority;
			}
		}
		printf("\n HIGHEST PRIORITY ELEMENT:%d",p);
	}
	
}
int deletehighestpriority()
{
	int i,j,a,element;
	if(rear==-1)
	{
		printf("\n PRIORITY QUEUE IS EMPTY");
		return;
	}
      	a=gethighestpriority();
	for(i=0;i<=rear;i++)
	{
		if(pq[i].priority==a)
		{
			element=pq[i].ele;
		}
	}
	printf("\n delete:%d",&element);
	if(i<rear)
	{
		for(j=i;j<rear;j++)
		{
			pq[j].ele=pq[j+1].ele;
			pq[j].priority=pq[j+1].priority;
		}
	}
	rear=rear-1;
	
}
void display()
{
	int i;
	
	if(rear==-1)
	{
		printf("\n PRIORITY QUEUE IS EMPTY");
		return;
	}
	for(i=0;i<=rear;i++)
	{
		printf("| ELE:%d - PRIORITY:%d|\n",pq[i].ele,pq[i].priority);
	}
}

