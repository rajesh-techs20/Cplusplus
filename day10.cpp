2D ARRAY

#include<iostream>
using namespace std;
int main() {
    int arr[10][10],r,c,i,j;
    
    cout<<"Enter the number of elements in rows:";
    cin>>r;
    
    cout<<"Enter the number of elements in columns:";
    cin>>c;
    
    cout<<"Enter the elements:";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\n Matrix \n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

OUTPUT
Enter the number of elements in rows:4
Enter the number of elements in columns:2
Enter the elements:1 2 3 4 5 6 7 8

 Matrix 
1 2 
3 4 
5 6 
7 8 



ADDITION OF MATRIX
#include<iostream>
using namespace std;
int main() {
    int a[10][10],b[10][10],c[10][10],i,j,r,k,m,n;
    
    cout<<"Enter the number of rows:";
    cin>>r;
    
    cout<<"Enter the number of columns:";
    cin>>k;
    
    cout<<"Enter the elements of first array:";
    for(i=0;i<r;i++){
        for(j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of second array:";
    for(i=0;i<r;i++){
        for(j=0;j<k;j++){
            cin>>b[i][j];
        }
    }
    cout<<"Addition of two matrix:\n";
    for(i=0;i<r;i++){
        for(j=0;j<k;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<k;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
