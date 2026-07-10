SUBTRACTION OF TWO MATRIX

#include<iostream>
using namespace std;
int main() {
    int a[10][10],b[10][10],c[10][10],i,j,r,k;
    
    cout<<"Enter the number of rows:";
    cin>>r;
    
    cout<<"Enter the number of columns:";
    cin>>k;
    
    cout<<"Enter the elements in to first matrix:";
    for(i=0;i<r;i++){
        for(j=0;j<k;j++){
            cin>>a[i][j];
        }
    }
    
    cout<<"Enter the elements in to second matrix:";
    for(i=0;i<r;i++){
        for(j=0;j<k;j++){
            cin>>b[i][j];
        }
    }
    
    cout<<"\nsubstraction of two matrix\n";
    for(i=0;i<r;i++){
        for(j=0;j<k;j++){
            c[i][j]=a[i][j]-b[i][j];
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
Enter the elements in to first matrix:1 2 3 4 5 6
Enter the elements in to second matrix:3 7 1 3 2 1

substraction of two matrix
-2 -5 
2 1 
3 5 
