MAXIMUM ELEMENT

#include<iostream>
using namespace std;

int main(){
    int arr[50],i,n;
    int max=arr[0];
    
    cout<<"Enter the number of elements:";
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Maximum element";
    for(i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Max element is:"<<max;
    return 0;
    
}
