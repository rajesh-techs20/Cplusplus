#second largest element in the array

#include<iostream>
using namespace std;
int main(){
    int arr[50],i,n;
    
    cout<<"Enter the number of elements:";
    cin>>n;
    
    cout<<"Enter elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    };
    int secondlargest=-9999,largest=arr[0];
    
    
    cout<<"\nSecond largest elements\n";
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            secondlargest=largest;
            largest=arr[i];
        };
    };
    for(i=0;i<n;i++){
        if(arr[i]>secondlargest and arr[i]!=largest){
            secondlargest=arr[i];
        };
    };
    cout<<"Second largest elements in the array:"<<secondlargest;
    return 0;
}

OUTPUT

Enter the number of elements:4
Enter elements:1 2 3 4

Second largest elements
Second largest elements in the array:3

=== Code Execution Successful ===

SEARCHING

#include<iostream>
using namespace std;

int main(){
    int arr[50],i,n,k;
    bool found=false;
    
    cout<<"Enter the number of elements:";
    cin>>n;
    
    cout<<"Enter the elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    };
    
    cout<<"Enter the element to search:";
    cin>>k;
    
    for(i=0;i<n;i++){
        if(arr[i]==k){
            found=true;
            cout<<"Element found at:"<<i;
            break;
        };
    };
    if(!found){
        cout<<"Elent not found in array";
    };
    return 0;
}
