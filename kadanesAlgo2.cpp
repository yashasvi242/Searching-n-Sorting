//ist go througn approach 1 then come here 

//APPROACH - 2

#include <iostream>
using namespace std;

int kadanesAlgo2(int arr[],int arraySize){

    int currentSum = 0 ;
    int maxSum = INT_MIN;

    for(int i=0;i<arraySize;i++){

        // if next element of array is smaller than the current sum after it is added , then add it too the same sontigious array
        if(arr[i]<currentSum+arr[i]){
            currentSum += arr[i];
        }
        //else if than element is greater than than the current sum after it is added , than start a new cont array;
        else{
            currentSum = arr[i];
        }

        //update the max sum every time it is smaller than the current sum
        if(currentSum > maxSum){
            maxSum = currentSum;
        }
        
    }
    //return the value of maxContSum after end of the loop
    return maxSum;

}

int main(){
    int arr[]={-2, -3, 4, -1, -2, 1, 5, -3};
    int arraySize = sizeof(arr)/sizeof(int);

    int maxContSum = kadanesAlgo2(arr,arraySize);

    printf("max contagious array sum is %d",maxContSum);

    return 0;
}


//output : max contiguous array sum is 9