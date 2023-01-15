#include <iostream>

using namespace std;

void subArraySum(int arr[] , int n){
    int crrSum = 0 , maxSum = 0;
    
    for(int i=0 ; i<n ; i++){
        crrSum += arr[i];
        
        if(crrSum < 0)
            crrSum = 0;
            
        maxSum = max(maxSum , crrSum);
    }
    
    cout<<"\nMaximum subArraySum is : "<<maxSum;
}

int main()
{
    int arr[] = {-2 , 3 , 4 , -1 , 5 , -12 , 6 , 1 , 3};
    int size = sizeof(arr)/sizeof(int);
    
    cout<<"\nthe array is : ";
    for(int i=0 ; i<size ; i++)
        cout<<" "<<arr[i];
    
    subArraySum(arr , size);

    return 0;
}
