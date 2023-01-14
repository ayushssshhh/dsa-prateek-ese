#include <iostream>

using namespace std;

void subArraySum(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        int x = arr[i];
        
        for(int j=i ; j<n ; j++){
            int y = arr[j];
            int sum = 0;
            
            for(int k=i ; k<=j ; k++)
                sum += arr[k];

            cout<<"\nsubarray : ("<<x<<" , "<<y<<") sum : "<<sum;
        }
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(int);
    
    cout<<"\nthe array is : ";
    for(int i=0 ; i<size ; i++)
        cout<<" "<<arr[i];
    
    subArraySum(arr , size);

    return 0;
}
