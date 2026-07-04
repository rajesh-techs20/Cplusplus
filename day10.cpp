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

OUTPUT
Enter the number of rows:3
Enter the number of columns:2
Enter the elements of first array:1 2 3 4 5 6
Enter the elements of second array:7 8 9 1 2 3
Addition of two matrix:
8 10 
12 5 
7 9 
    TRANSPOSE MATRIX

#include<iostream>
using namespace std;
int main() {
    int a[10][10],t[10][10],r,c,i,j;
    
    cout<<"Enter the number of rows:";
    cin>>r;
    
    cout<<"Enter the number of columns: ";
    cin>>c;
    
    cout<<"Enter the elements:";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Transpose of Matrix:\n";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            t[j][i]=a[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
OUTPUT
Enter the number of rows:3
Enter the number of columns: 2
Enter the elements:1 2 3 4 5 6
Transpose of Matrix:
1 3 5 
2 4 6 
