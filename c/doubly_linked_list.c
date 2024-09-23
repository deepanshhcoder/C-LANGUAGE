#include <stdio.h>
#include <stdlib.h>
struct node{
    struct node *prev;
    int data;
    struct node *next;

};
struct node* createnode(){
    struct node *temp =(struct node*)malloc(sizeof(struct node));
    printf("enter data :");
    scanf("%d",&temp->data);
    temp->prev=NULL;
    temp->next=NULL;
    return temp;

}
void insertnodeinbeg(struct node **head, struct node **last){
    struct node *newnode = createnode();
    if(head==NULL){
        *head = newnode;
        *last = newnode;

    }
    else {
        newnode->next=*head;
        (*head)->prev=newnode;
        *head=newnode;
    }
}
void displaylist(struct node *head){
    if(head==NULL)
    printf("list is empty !!!!!!!!!!");
    else{
        while(head!=NULL){
            printf("%d\t",head->data);
            head=head->next;
        }
    }
}
//void insertinend(struct node **head, struct node **last){
    //struct node *temp=createnode();
    //if(*head==NULL){
        //*head= newnode;
        //*last= newnode;

//    else{
  //      (*last)->next=newnode;
    //    newnode->prev=*last;
      //  *last=newnode;
    


int main()
{
    struct node *head=NULL;
    struct node *last=NULL;
    
    while (1)
    {
        system("cls");
        system("color 70");
        printf("************doubly linked list**********\n\n");
        printf("1. Insert Node in Beginning.\n");
        printf("2. Insert Node in End.\n");
        printf("3. Insert Node Anywhere.\n");
        printf("4. Display Nodes.\n");
        printf("5. Delete Node from a position.\n");
        printf("6. Exit.\n");
        int choice;
        printf("Enter choice: ");
        scanf("%d", &choice);
        system("cls");
        int data, position;
        switch (choice)
        {
        case 1:
        insertnodeinbeg(&head,&last);

            break;
        case 2:
            
            break;
        case 3:
            
            break;
        case 4:
            displaylist(head);
            break;
        case 5:
            
            break;
        case 6:
            break;

        case 7:
            exit(0);
            break;
            default:
            printf("invalid input\n");

        }
    }
    return 0;
}