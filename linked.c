#include<stdio.h>
#include<stdlib.h>
#include<time.h>

struct node{
    int data;
    struct node *link;
};

int traversing_list(struct node *head)
{
    struct node *ptr;
    ptr = head;

    while(ptr != NULL)
    {
        int value = ptr->data;
        ptr = ptr->link;

        printf("\n%d\n", value);
    }

}

int count_of_node(struct node *head)
{
    int count = 0;

    if(head == NULL)
        printf("the list is empty");

    struct node *ptr = NULL;
    ptr = head;

    while(ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }

    printf("\n%d is the no of nodes\n", count);
}

int insert_node_end(struct node *head, int data)
{
    struct node *ptr, *temp;   //here temp store the address of the elemtent node that we are trying to add at the end
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));

    temp->data = data;
    temp->link = NULL;

    while(ptr->link != NULL){
        ptr = ptr->link;
    }
    ptr->link = temp;
}

struct node* insert_at_front(struct node *head, int data)
{
    struct node *ptr = malloc(sizeof(struct node));
    ptr->data = d;
    ptr->link = NULL;

    ptr->link = head;
    head = ptr;
    return head;

}

void delete_pos_inbetween(struct node **head, int position)    //here head is the pointer to pointer as we need to change the head pointer
{
    struct node *current = *head;
    struct node *previous = *head;
    if(*head == NULL)
    {
        printf("List is already empty");
    }
    else if(position == 1)
    {
        *head = current->link;
        free(current);
        current = NULL;
    }
    else{
        while(position != 1)
        {
            previous = current;
            current = current->link;
            position--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
    
}


int main()
{

    struct node *head = malloc(sizeof(struct node));
    head -> data = 45;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node));
    current -> data = 98;
    current -> link = NULL;
    head -> link = current;
    
    current = malloc(sizeof(struct node));
    current -> data = 56;
    current -> link = NULL;

    head -> link -> link = current;

    insert_node_end(head, 654);
    count_of_node(head);
    traversing_list(head);
    traversing_list(head);
    insert_at_front(head, 89);

    int pos = 2;
    delete_pos_inbetween(&head, pos);

    ptr = head;
    while(ptr != NULL)
    {
        printf("%d", ptr->data);
        ptr = ptr->link;
    }
    return 0;
}

