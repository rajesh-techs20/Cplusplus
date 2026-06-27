COUNTING EVEN AND ODD ELEMENTS IN ARRAY

#include<iostream>
using namespace std;
int main()
{
    int arr[50],i,n,even=0,odd=0;
    cout<<"Enter the number of elements:";
    cin>>n;
    
    cout<<"Enter the elements:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<"\nCounting even and odd numbers\n";
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            even=even+1;
        }
        else{
            odd=odd+1;
        }
    }
    cout<<"\nNumber of even elements:"<<even<<"\n";
    cout<<"Number of odd elements:"<<odd;
    return 0;
}

OUTPUT
Enter the number of elements:5
Enter the elements:1 2 3 4 5

Counting even and odd numbers

Number of even elements:2
Number of odd elements:3

LARGEST AND SMALLEST ELEMENT IN ARRAY
 #include<iostream>
 using namespace std;
 int main() {
     int arr[50],i,n;
     cout<<"Enter the number of elements:";
     cin>>n;
     
     cout<<"Enter the elements in to array:";
     for(i=0;i<n;i++){
         cin>>arr[i];
     }
     int largest=arr[0],smallest=arr[0];
     for(i=0;i<n;i++){
         if(arr[i]>largest){
             largest=arr[i];
         }
         else if(arr[i]<smallest){
             smallest=arr[i];
         }
     }
     cout<<"The largest elements is:"<<largest<<"\n";
     cout<<"The smallest elements is:"<<smallest;
     
     return 0;
 }

OUTPUT
Enter the number of elements:4 
Enter the elements in to array:1 2 3 4
The largest elements is:4
The smallest elements is:1
