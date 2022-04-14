#include <iostream>
using namespace std;

int binarySearch(int arr[], int arraySize , int elementToFind){

    //these are indexes
    int low,mid,high;
    //there values will be fixed for the start
    low = 0;
    high = arraySize -1 ;

    while(low<=high){
        mid = (low+high)/2;

        if(arr[mid]==elementToFind){
            return mid;
        }

        if(arr[mid]<elementToFind){
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    }
    //if loop is ended and nothing is found than return -1;
    return -1;

    
}

int main(){
    int arr[] = {10,12,23,34,45,56,67,78};
    int arraySize = sizeof(arr)/sizeof(int);
    int elementToFind = 67;

    int foundIndex = binarySearch(arr,arraySize,elementToFind);

    printf("number %d is found in array at index %d.",elementToFind,foundIndex);

    return 0;

}

//output = number 67 is found in array at index 6.