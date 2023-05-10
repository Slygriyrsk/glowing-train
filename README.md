# CS103
#include<iostream>   
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<" ";
    cin>>n;
    
    if(n<=0){ //Checking if the entered size is valid or not
        cout << "Invalid array size" << endl;
        return 0;
    }

    cout<<"Enter the elements of the array:\n";
    int arr[n]; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Bubble_Sorting"<<" ";
    int counter=1;  
    while(counter<n-1){ 
        for(int i=0;i<n-counter;i++){ 
            if(arr[i]>arr[i+1]){ 
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++; 
    }
    cout << "Sorted Array:"<<" ";
    for(int i=0;i<n;i++){ 
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
