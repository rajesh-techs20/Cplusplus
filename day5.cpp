ARRAYS...DECLARE ARRAY OF SIZE 5 AND
TAKE FIVE NUMBERS AND PRINT IT ALL

  #include<iostream>
  using namespace std;
  int main(){
    int arr[5],i;
    cout<<"Enter a five numbers:";
    for(i=0;i<5;i++){
        cin>>arr[i];
    };
    cout<<"The elements in array are:";
    for(i=0;i<5;i++){
        cout<<arr[i]<<" ";
    };
    return 0;
  }
    

OUTPUT
Enter five elements:1 2 3 4 5
The elements in array are1 2 3 4 5 


  SUM OF ALL THE ELEMENTS IN ARRAY

#include<iostream>
 using namespace std;
 int main(){
     int arr[50],i,n,sum=0;
     cout<<"Enter the number of elements in array:";
     cin>>n;
     cout<<"Enter the elements in to array:";
     for(i=0;i<n;i++){
         cin>>arr[i];
     };
     cout<<"\nSum of elements\n";
     for(i=0;i<n;i++){
         sum=sum+arr[i];
     }
     cout<<"sum of all the elements in array are:"<<sum;
     return 0;
 }
OUTPUT

Enter the number of elements in array:5
Enter the elements in to array:10 20 30 40 50

Sum of elements
sum of all the elements in array are:150

=== Code Execution Successful ===


LARGEST ELEMENT IN ARRAY

#include<iostream>
 using namespace std;
 int main(){
    int arr[50],i,n;
    cout<<"Enter the number of eelements:";
    cin>>n;
    
    cout<<"Enter the elements in to the array:";
    for(i=0;i<n;i++){
        cin>>arr[i];
    };
    int largest=arr[0];
    cout<<"\nLargest element\n";
    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        };
    };
    cout<<"Largest element in the array is:"<<largest;
    return 0;
 }

OUTPUT
Enter the number of eelements:6
Enter the elements in to the array:1 5 4 10 7 5 

Largest element
Largest element in the array is:10

=== Code Execution Successful ===
