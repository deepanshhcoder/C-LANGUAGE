#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;

}*top=NULL;
struct node* createnode(){
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    printf("enter data : ");
    scanf("%d",&newnode->data);
    newnode->next=NULL


    
}
void push(void){
    struct node *temp=createnode();
    if(top==NULL);
    top=temp;
    
    else{
temp->next=top;
top=temp;

    }
    
}

    void display(void){
        if(top==NULLprintf("stack is empty !!!!!!!"))
    }
int pop(void){
    if(top==NULL)
    printf("stack is underflow!!!!!!!!\n")
    return 0;
    else{
        struct node *t=top;
        top=top->next;
        val =t->data;
        free(t);
        
    }
}



int main(){
while(1)
{system(color 56);
    printf("*********stack************\n");
    printf("\t1.push.\n");
printf("\t2.pop.\n");
printf("\t3.peek.\n");
printf("\t4.display.\n");
printf("\t5.exit.\n\n");
int choice,res;
printf("enter choice:\n");
scanf("%d",&choice);
switch(choice){
    case 1:
       push() ;

            break;
        case 2:
        res =pop();
        if(res==0)
        printf("stack underflow !!!!!!\n");
        else
            
            break;
        case 3:
            
            break;
        case 4:
            display();
            break;
        case 5:
             exit(0);
            break;

        default:
        printf("invalid choice\n");
}
}
}



