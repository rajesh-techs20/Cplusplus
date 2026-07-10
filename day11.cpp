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

    MATRIX MULTIPLICATION

#include<iostream>
using namespace std;
int main() {
    int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2,k;
    
    cout<<"Enter the number of rows and columns of first matrix:";
    cin>>r1>>c1;
    
    cout<<"Enter the number of rows and columns of second matrix:";
    cin>>r2>>c2;
    
    if(r1!=c2){
        cout<<"Matrix multiplication is not possible";
        return 0;
    }
    
    cout<<"Enter the elements in to first matrix:";
    for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            cin>>a[i][j];
        }
    }
    
    cout<<"Enter the elments in to second matrix:";
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            cin>>b[i][j];
        }
    }
    
    cout<<"\nMultiplication of two matrix\n";
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            c[i][j]=0;
            for(k=0;k<c1;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

OUTPUT
Enter the number of rows and columns of first matrix:2 3
Enter the number of rows and columns of second matrix:3 2
Enter the elements of first mastrix:1 2 3 4 5 6
Enter the elements in to second matrix:7 8 9 10 11 12

 Matrix multiplicatin of two given matrix:
58 64 
139 154 
