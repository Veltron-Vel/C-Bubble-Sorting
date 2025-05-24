#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int arr[],int length);
void printArray(int arr[],int length);

int main()
{
    int len,i;
    printf("Type the length of the array:\n");
    scanf("%d",&len);
    int arr[len];
    printf("Type the array:\n");
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }

    printArray(arr,len);
    BubbleSort(arr,len);
    printf("Array has been sorted:\n");
    printArray(arr,len);

    return 0;
}



void BubbleSort(int arr[],int length)
{
    int i,j,temp;

    for(i=0;i<length-1;i++){
        for(j=0;j<length-i-1;j++){ // (length-1-i) because each iterations sorts one element. Will work even if you don't put -1.
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void printArray(int arr[],int length)
{
    printf("The array:\n");
    for(int i=0;i<length;i++){
        printf("%d\n",arr[i]);
    }
}
