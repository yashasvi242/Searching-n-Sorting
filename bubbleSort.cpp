#include <iostream>
using namespace std;

void swap(int *num1,int *num2){
    int tempVar = *num1;
    *num1 = *num2 ;
    *num2 = tempVar;
}


void printArray(int arr[],int arraySize){

    for(int k =0;k<arraySize;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;

}

void bubbleSort(int arr[],int arraySize){

    for(int i=0;i<arraySize-1;i++){
        for(int j=0;j<arraySize-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j] , &arr[j+1]);
            }
        }
    }

}

int main(){
    int arr[] = {11,2,-3,10,-2};
    int arraySize = sizeof(arr)/sizeof(int);
    bubbleSort(arr,arraySize);
    cout<<"sorted array : ";
    printArray(arr,arraySize);
    return 0;
}
