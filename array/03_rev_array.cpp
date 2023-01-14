#include <iostream>

using namespace std;

void rev(int arr[] , int n){
    
    /*for(int i=0 ; i<n/2 ; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }*/
    
    int s=0 , e=n-1;
    
    while(s<e){
        swap(arr[s++] , arr[e--]);
    }
}

int main()
{
    int size;
    cout<<"enter size of you array and elements : ";
    cin>>size;
    
    
    int arr[size];
    for(int i=0 ; i<size ; i++)
        cin>>arr[i];
    
    rev(arr , size);
    
    cout<<"\nthe reversed array is : ";
    for(int i=0 ; i<size ; i++)
        cout<<" "<<arr[i];
    return 0;
}
