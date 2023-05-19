#include<iostream>
using namespace std;

void LeftRotateArray(int arr[], int d, int size){
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i] = arr[i];
    }
    for(int i=0;i<size-d;i++){
        arr[i] = arr[i+d];
    }
    for(int i=0;i<d;i++){
        arr[size-d+i] = temp[i]; 
    }
}

int main() {
    int size, d;
    cout<<"Enter the size of the array : ";
    cin>>size;
    int arr[size];
    cout<<"Enter the elements of the array : ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter the number of rotations : ";
    cin>>d;
    LeftRotateArray(arr,d,size);
    cout<<"Resultant array after left rotating "<<d<<" times is :"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
