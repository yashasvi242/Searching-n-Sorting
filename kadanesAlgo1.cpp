//Largest Sum Contiguous Subarray
//que = Write an efficient program to find the sum of contiguous subarray within a one-dimensional array of numbers that has the largest sum. 

// APPROACH - 1
#include <iostream>
using namespace std;

int kandens_algo(int arr[],int arraySize){

    int currentSum = INT16_MIN;
    int maxSum = 0;

    for(int i=0;i<arraySize;i++){
        //adding each element to current 
        currentSum += arr[i];

        //when xurrent sum becomes more than the max sum, max sum is updated.
        if(currentSum > maxSum){
            maxSum = currentSum;
        }
        //if cureent sum becomes negative , current sum value is updated to 0 everytime.
        if(currentSum<0){
            currentSum = 0;
        }
    }
    //when loop ends return the value of maxSum.
    return maxSum;

}

int main(){
    int arr[]= {-2, -3, 4, -1, -2, 1, 5, -3};
    int arraySize = sizeof(arr)/sizeof(int);
    
    //max contiguous array sum 
    int MaxContSum = kandens_algo(arr,arraySize);

    printf("value of contiguos array sum is : %d",MaxContSum);

    return 0;
}

//output : value of contiguos array sum is : 7




