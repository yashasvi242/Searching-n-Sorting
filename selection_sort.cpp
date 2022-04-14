//selection sort 
//in this we break the array into 2 parts 1st one sorted and rest unsorted 
//we start llooping the elements and as soon as we get something smaller than the previous element we swap them.

#include <iostream>
using namespace std;

//swapping will happen if next element is smaller than previous min index
void swap(int *ele1 , int *ele2){    //void because it does'nt return anything 

    int temporaryVar = *ele1;
    *ele1 = *ele2;
    *ele2 = temporaryVar;

}

//selectionSort function will have 2 looops and in this {22,1,44,5,20} min index will be 22 at start and if next element 1 is smaller than 22 swapping will take place 
// then 22 
void selectionSort(int arr[],int arraySize){
    int minIndex ;
    for(int i=0; i<arraySize-1;i++){
        minIndex = i;
        for(int j = i+1;j<arraySize;j++){
            if(arr[minIndex]>arr[j]){
                swap(&arr[minIndex],&arr[j]);
            }

        }
    }

}


void printArray(int arr[],int arraySize){
    for(int i=0;i<arraySize;i++){
        cout<< arr[i] <<" ";
    }
    cout<<endl;

}

int main(){
    int arr[] = {22,33,44,52,10,9,0,5,-2,33};
    int arraySize = sizeof(arr)/sizeof(int);

    //calling selection sort 
    selectionSort(arr,arraySize);
    cout<<"sorted array :";
    printArray(arr,arraySize);
    return 0;
}