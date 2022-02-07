#include <stdio.h>
//declaring Standard input output header file
#include <stdlib.h>
//declaring library header file
int main()
//main function
{
    int arr[7]={87,35,28,26,9,12,7};
   //declaring integer type Array
    
        for(int i=0;i<7;i++){
            //declaring inner for loop
            for(int j=0;j<6;j++){
                //declaring nested for loop
            if(arr[j]>arr[j+1]){
                //condition
                //swapping values
            int x;
            x=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=x;      
        }
     }     
    }

    printf("Bubble Sorted Array : ");
    for(int i=0;i<7;i++){
        printf("%d\t",arr[i]);
        //print values 
    }
    printf("\n");
    return 0;
}