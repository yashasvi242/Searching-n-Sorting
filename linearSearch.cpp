#include <iostream>
using namespace std;

int linearSearch(int arr[],int arraySize,int elementToFind){
    
    for(int i=0;i<arraySize;i++){
        if(arr[i]==elementToFind){
            return i;
        }
    };
    return -1;
    
};

int main(){
    int arr[]={10,20,10,30,40,50,60};
    int arraySize = sizeof(arr)/sizeof(int);
    int elementToFind = 10;
    
    int indexFound = linearSearch(arr,arraySize,elementToFind);
    cout<<"index of "<<elementToFind<<" in array is "<<indexFound;

    //or

    //printf("index of %d in array is %d \n",elementToFind,indexFound);
    
    return 0;
}
