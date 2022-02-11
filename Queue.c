#include <stdio.h>
#include <stdlib.h>
int size;
struct Queue 
{
     int arr[100];
     int rear ;
     int front;

}qu;

int main(){
    qu.front=0;
    qu.rear=-1;
    printf("Please Input Queue size : ");
    scanf("%d",&size);
    int ch,element;
    do{
    printf("\nEnter Your Choice: (1 for EnQueue 2 for DeQueue 3 for Display 4 for Exit:)");
    scanf("%d",&ch);
     switch(ch){
        case 1:{
            printf("Enter the Value : ");
            scanf("%d",&element);
            enQueue(element);
            break;
        }
        case 2:{
           
            deQueue();
            break;
        }
        case 3:{
            display();
            break;
        }
        case 4:{
            break;
            
        }
    }
    }while(ch!=4);

}


void enQueue(int ele,int n){
    
    if(qu.rear==(size-1)){
        printf("Queue Overflow\n");
    }
    else{
        qu.rear++;
        qu.arr[qu.rear]=ele;
        
    }
}
int deQueue(){
    int out;
      if (qu.front == - 1 || qu.front > qu.rear)
    {
        printf("Queue Underflow \n");
        return 0;
    }
    else{
    out=qu.arr[qu.front];
    qu.front--;
    return out;
    }
}
void display(){
        if (qu.front == - 1)
        printf("Queue is empty \n");
   for(int i=qu.front;i<=qu.rear;i++){
       printf("%d\t",qu.arr[i]);
   }
}