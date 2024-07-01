#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#define size 5//The Max ppl on waiting list 
# define MAX_SIZE 20//Max no of ppl in Bus 

typedef struct NODE
{
	int reg_no;
	int age;
    char Date[25];
    char from[50],to[50];
	char name[MAX_SIZE];
	struct NODE *next;
} node;

node* deq();//srujana
void create();//Nithya 
int reserve();//Rishab
int cancel(int);//Prathik
void enq(node*);//Nischal 
void display();//Pratham


node *start;//Linked list start reff
node *front;//waiting queue reff
node *rear;//waiting queue reff
int count=0;
int num=0;

void create()
{
	start=(node *)malloc(sizeof(node));
	start->reg_no = 1;

	printf("Name : ");
	scanf("%s",start->name);
	printf("Age : ");
	scanf("%d", &start->age);
    printf("Date Of Travel : ");
    scanf("%s", start->Date);
    printf("Enter the Starting Point  : ");
    scanf("%s", start->from);
    printf("Enter Destination : ");
    scanf("%s", start->to);
    printf("Reservation in Process.....");
    sleep(5);
    start->next=NULL;
	num++;
	
}

int reserve()
{
	
	if(start == NULL)
	{
		create();
		return 1;
	}

	else 
	{
		node *temp, *new_node, *prev;

		new_node=(node *)malloc(sizeof(node));
		
		printf("Name: ");
		scanf("%s",new_node->name);
		printf("Age : ");
		scanf("%d", &(new_node->age));
        printf("Date Of Travel : ");
        scanf("%s", new_node->Date);
        printf("Enter the Starting Point  : ");
        scanf("%s", new_node->from);
        printf("Enter Destination : ");
        scanf("%s", new_node->to);
        printf("Reservation in Process.....");
        sleep(5);

		new_node->next=NULL;
		
		temp=start;
		int i=1;
		if(temp->reg_no == 0)
		{
			temp->reg_no = 1;
			strcpy(temp->name,new_node->name);
			temp->age = new_node->age;
            strcpy(temp->Date, new_node->Date);
            strcpy(temp->from,new_node->from);
            strcpy(temp->to, new_node->to);
            num++;
			return 1;
		}
		while(temp->next != NULL)
		{
			if(temp->reg_no != i++)
				break;

			prev = temp;
			temp=temp->next;
		}	

		if(num<size)
		{
			num++;
			i++;
			if(temp->reg_no == (prev->reg_no+1) || i == 2) // If all gaps were filled
			{
				new_node->reg_no = i;
				temp->next = new_node;
				return i;
			}
			else	// Filling the gaps
			{
				new_node->next = temp;
				prev->next = new_node;
				new_node->reg_no = (temp->reg_no) - 1;
				printf("reg = %d\n",new_node->reg_no);
				return new_node->reg_no;
			}
			
		}

		else
		{
			enq(new_node);
			return 0;
		}
	}
}


int cancel(int reg)
{
	node *ptr, *preptr, *new;
	ptr=start;
	preptr=NULL;
	if(start==NULL)
	return -1;
	
	if(ptr->next==NULL && ptr->reg_no==reg)	// If only 1 person in reservation
	{
		start=NULL;
		num--;
		free(ptr);
		return 1;
	}
		
	else
	{	if(reg == 1)
		{
			ptr->reg_no = 0;
			new=deq(reg);
			if(new != NULL)
			{
				ptr->reg_no = 1;
				strcpy(ptr->name,new->name);
				ptr->age = new->age;
                strcpy(ptr->Date, new->Date);
                strcpy(ptr->from,new->from);
                strcpy(ptr->to, new->to);
				num++;
				return 1;
			}
		}	

		else
		{
			while(ptr->reg_no != reg && ptr->next!=NULL)
			{
				preptr=ptr;
				ptr=ptr->next;
			}

			if(ptr->next == NULL && ptr->reg_no != reg)
				return -1;
			else
				preptr->next = ptr->next;

			free(ptr);
			new=deq(reg);
			num--;
			if(new != NULL)
			{
				node *waiting = start;
				while(waiting->reg_no != (new->reg_no - 1))
					waiting = waiting->next;

				new->next = waiting->next;
				waiting->next = new;
				num++;
			}
			return 1;
		}
	}
}

void enq(node *new_node) // If the reservation is full, prompt reservation full!! Put them in waiting list (queue)
{
	if(rear==NULL)
	{
		rear=new_node;
		rear->next=NULL;
		front=rear;
	}
	else
	{
		node *temp;
		temp=new_node;
		rear->next=temp;
		temp->next=NULL;
		rear=temp;
	}
	count++;
}

node* deq(int reg) // If a passenger wishes to cancel his ticket, he may cancel. Then the passenger in waiting list is booked automatically.
{
	node *front1;
	front1 = front;
	if(front==NULL)
		return NULL;
	else
	{
	    count-- ;
		if(front->next != NULL)
		{
			front=front->next;
			front1->next=NULL;
			front1->reg_no = reg;
			return front1;
		}
		else
		{
			front=NULL;
			rear=NULL;
			front1->reg_no = reg;
			return front1;
		}
	}		
}


void display()
{
	node *temp;
	temp = start;
	while(temp!=NULL)
	{
		if(temp->reg_no != 0)
		{
			printf("\nRegistration Number: %d\n\n", temp->reg_no);
			printf("Name : %s\n\n", temp->name);
			printf("Age : %d\n\n",temp->age);
            printf("Date of Travel  : %s\n\n",temp->Date);
            printf("Starting Point  : %s\n\n",temp->from);
            printf("Destination  : %s\n\n",temp->to);

		}
		temp=temp->next;
    }
    
}

int main()
{
	int choice, status=0,canc=0, reg=0;
	start=NULL;

	rear=NULL;
	front=NULL;
	
	
	
	printf("\t\t\t\t\n**********************BUS RESERVATION**********************\t\t\t\t\n");
	int ch =0;
	while(ch!=4)
	{
	printf("\n\n Welcome\n\n What Do You Want To Do? - \n 1. Reserve a ticket? \n 2. Cancel Booking! \n 3. Display passenger details \n 4. Exit\n\nEnter Your Choice :  ");
	scanf("%d", &choice); 
	switch(choice)
	{	
		case 1 :  status = reserve();
	              if(status==0)
	                printf("\nBooking Full!! \nYou are added to waiting list. Waiting list number %d", count);
	              else
	                printf("\nBooking Successful!!! Enjoy your journey! Your Reg No. is %d\n", status);
	                
	              break;
	        
	    case 2:   printf("\nGive the Registration number to be cancelled : ");
	              scanf("%d", &reg);
	              if(reg>num)
	              	printf("Registration number invalid !!");
	              else
	              	{
	              		canc=cancel(reg);
	              		if(canc==-1)
	              			printf("Registration number invalid !!");
	              		else
	              			printf("Registration cancelled successfully");
	              	}
	              break;
	              
	    case 3: display();
	    break;
	    case 4: exit(0);   
	    break;
	    default: printf("\nWrong choice!\n");       		          
	
	}
	
}

}