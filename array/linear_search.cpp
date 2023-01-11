#include <iostream>
using namespace std;

int linear_search(vector<int> a[] , int x , int sixe){
    int j = -1;
    
    for(int y=0 ; y<size ; y++){
        if(a[y] == x){
            j++;
            return j;
        }
    }

    return j;
}

int main(){
    int size , x;
    cout<<"enter size of your array : ";
    cin>>size;
    int arr[size];

    cout<<"enter "<<size<<" elements for you array : ";
    for(int i=0 ; i<size ; i++)
    cin>>arr[i];

    cout<<"\nenter the value of elemet to search in array : ";
    cin>>x;

    int c = linear_search(arr, x);

    if(c == -1){
        cout<<"\n element not found";
    }

    else{
        cout<<"\nelment found";
    }

    

    return 0;
}
