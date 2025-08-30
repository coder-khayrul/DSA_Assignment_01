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
    struct Node* node1 = createMember(20);
    struct Node* node2 = createMember(30);
    struct Node* node3 = createMember(50);

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
     printf("How many element you want to add at first: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int nodeValue;
        printf("Enter value %d: ",i+1);
        scanf("%d",&nodeValue);
        struct Node* newNode = createMember(nodeValue);
        newNode->next = head;
        head = newNode;
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
