
#include<stdio.h>
#include<stdlib.h>

    struct Node{
        int data;
        struct Node* next;
    };

    struct Node* createMember(int value){
        struct Node* temp =(struct Node *)malloc(sizeof(struct Node));
        temp->data =value;
        temp->next = NULL;
        return temp;
    }

int main () {


    struct Node *head = NULL;
    struct Node *node1 = createMember(10);
    struct Node *node2 = createMember(20);
    struct Node *node3 = createMember(30);

    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;

    head = node1;

    struct Node* current = head;
    printf("Orginal Linked List: ");
    while(current !=NULL){
        printf("%d -> ",current->data);

        current = current->next;
    }

    printf("NULL\n");

    int n;
    printf("How many Element you want to add: ");
    scanf("%d",&n);
    int position;
    printf("Enter position NO. where you want to add elements: ");
     scanf("%d",&position);

    for(int i=0;i<n;i++){
        int nodeValue;
        printf("Enter value %d: ",i+1);
        scanf("%d",&nodeValue);


        struct Node* middle = createMember(nodeValue);
        if(position==1){
            middle->next=head;
            head = middle;

        }else{
        struct Node* temp = head;
        for(int i =1;i<position-1&&temp!=NULL;i++){
            temp = temp->next;
        }
        middle->next = temp->next;
        temp->next = middle;
        }

    }



    current = head;
    printf("Final Linked List: ");
    while(current !=NULL){
        printf("%d -> ",current->data);

        current = current->next;
    }

    printf("NULL\n");
    return 0;
}
