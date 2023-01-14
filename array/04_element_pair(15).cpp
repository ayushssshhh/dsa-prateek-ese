#include <iostream>

using namespace std;

void printPair(int arr[] , int n){
    for(int i=0 ; i<n-1 ; i++){
        int x = arr[i];
        cout<<"\npairs for "<<x<<" : \n";
        
        for(int j=i+1 ; j<n ; j++){
            int y = arr[j];
            cout<<x<<","<<y<<endl;
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
    
    printPair(arr , size);

    return 0;
}
