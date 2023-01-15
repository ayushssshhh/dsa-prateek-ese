#include <iostream>

using namespace std;

void subArraySum(int arr[] , int n){
    int prefix[n] = {0} , larSum = arr[0];
    prefix[0] = arr[0];
    
    for(int i=0 ; i<n ; i++)
        prefix[i] = prefix[i-1] + arr[i];
        
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            int sum = i>0 ? prefix[j] - prefix[i-1] : prefix[j];
            
            larSum = max(larSum , sum);
        }
    }
    
    cout<<"\nMaximum subArraySum sum is : "<<larSum;
    
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
