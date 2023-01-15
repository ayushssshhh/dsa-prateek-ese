#include <iostream>

using namespace std;

void subArraySum(int arr[] , int n){
    int larSum = arr[0] , lx = arr[0] , ly = arr[0];
    
    for(int i=0 ; i<n ; i++){
        
        for(int j=i ; j<n ; j++){
            int y = arr[j];
            int sum = 0;
            
            for(int k=i ; k<=j ; k++)
                sum += arr[k];

            if(sum > larSum){
                larSum = sum;
                lx = arr[i];
                ly = arr[j];
            }
        }
    }
    
    cout<<"\nthe sub array with largest sum is : ("<<lx<<","<<ly<<") with sum = "<<larSum;
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
