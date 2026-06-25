AVERAGE OF ARRAY ELEMENTS

 #include<iostream>
 using namespace std;
 int main() {
     int arr[50],i,n,sum=0;
     float average=0;
     
     cout<<"Enter the number of elements:";
     cin>>n;
     
     cout<<"Enter elements:";
     for(i=0;i<n;i++){
         cin>>arr[i];
     }
     for(i=0;i<n;i++){
         sum=sum+arr[i];
         average=(float)sum/n;
     }
     cout<<"Average of array elements:"<<average;
     return 0;
     
 }

OUTPUT
Enter the number of elements:5
Enter elements:1 2 3 4 5
Average of array elements:3

=== Code Execution Successful ===
