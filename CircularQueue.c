#include <stdio.h>
#include <stdlib.h>
int size,ch;

struct CircularQueue{
    int arr[100];
    int front;
    int rear;
}qu;

int main(){
    
    qu.front=-1;
    qu.rear=-1;
    printf("Please Input Size of the CircularQueue : ");
    scanf(" %d",&size);
    do{
    printf("Please input your Choice : \n1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
    scanf(" %d",&ch);
    switch(ch){
        case 1 :{
            int x;
            printf("Please Input Values in to the CircularQueue : ");
            scanf(" %d",&x);
            push(x);
            break;
        }
        case 2 :{
            pop();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
            exit(0);
        }
        default :{
            printf("Wrong Choice!\n");
        }
    }
    }while(ch!=4);
    return 0;
}

void push(int ele){
    
    if((qu.rear+1)%size==qu.front){
        printf("CircularQueue is Overflow!\n");
    }
    else{
    qu.rear++;
    qu.arr[(qu.rear+1)%size]=ele;
    }
    if(qu.front==-1){
        qu.front=0;
    }
}
int pop(){
    if(qu.front== -1){
        printf("CircularQueue is Underflow!\n");
        return 0;
    }
    else{
        if(qu.front==qu.rear){
            qu.front=-1;
            qu.rear=-1;
        }
        else{
            
        int out;
        out=qu.arr[qu.front];
        qu.front--;
        return out;
        }
    }
}
int display(){
    int i;
    if(qu.rear== -1){
        printf("CircularQueue is Underflow!\n");
        return 0;
    }
    else if(qu.front<=qu.rear){
        for(i=qu.front;i<=qu.rear;i++){
            printf("%d\t",qu.arr[i]);
            printf("\n");
        }
    }
    else{
        for(i=qu.front;i<=size;i++){
            printf("%d\t",qu.arr[i]);
            printf("\n");
        }
    }
}