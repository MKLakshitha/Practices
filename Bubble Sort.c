#include <stdio.h>
//declaring Standard input output header file
#include <stdlib.h>
//declaring library header file
int main()
//main function
{
    int n;
    printf("Size of the Array : ");
    scanf("%d",&n);
    int arr[100]={220, 146, 22, 19, 6, 42, 14, 5, 48, 47, 17, 39, 51, 7, 2, 99, 65, 7};
   //declaring integer type Array
    
        for(int i=0;i<n-1;i++){
            //declaring inner for loop
            for(int j=0;j<n-2;j++){
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