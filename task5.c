#include <stdio.h>
#define size 3

    int top=-1;
    int arr[size];

    //isfull function
    int isFull(){
        if(top== size-1){
            return 1;
        }
            return 0;
    }
    void push(int value){
        if(isFull()){
            printf("push(%d): Overflow\n",value);
            return;
        }
            top++;
            arr[top]= value;
            printf("push(%d): pushed %d\n",value,value);
    }

    //isNull function
    int isNull() {
        if(top==-1){
            return 1;
        }else{
            return 0;
        }

    }
    int peek(){
        int firstValue;
        firstValue= arr[top];
        printf("peek(): %d\n",firstValue) ;
    }
    void pop(){
        if(isNull()){
            printf("pop(): UnderFlow\n");
            return;
        }else {
            printf("pop(): poped %d\n",arr[top]);
            arr[top] = 0;
            top--;

        }

    }

int main () {
    isFull();
    if(isFull()){
        printf("isFull(): True\n");
    }else{
        printf("isFull(): False\n");
    }
    isNull();
    if(isNull()){
        printf("isNull(): True\n");
    }else{
        printf("isNull(): False\n");
    }
    push(10);
    printf("Current Stack: ");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    push(20);
    printf("Current Stack: ");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    push(30);
    printf("Current Stack: ");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    push(50);
    printf("Current Stack: ");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    isFull();
    if(isFull()){
        printf("isFull(): True\n");
    }else{
        printf("isFull(): False\n");
    }
    isNull();
    if(isNull()){
        printf("isNull(): True\n");
    }else{
        printf("isNull(): False\n");
    }
    pop();
    printf("Current Stack: ");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    peek();
    pop();
    printf("Current Stack: ");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    pop();
    printf("Current Stack: ");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    pop();
    printf("Final Stack is: ");
    for(int i =0;i<size;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
