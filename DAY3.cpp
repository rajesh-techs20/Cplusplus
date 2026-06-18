CHECK  PRIME OR NOOT

#include<iostream>
using namespace std;

int main(){
int i,n;
bool isPrime=true;
cout<<"Enter a number:";
cin>>n;

if(n<=1){
    isPrime=false;
}
else{
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            isPrime=false;
            break;
        }
        else{
            isPrime=true;
        }
    }
if(isPrime){
    cout<<"Prime";
}else{
    cout<<"Not Prime";
}
return 0;
}

OUTPUT
Enter a number: 7
Prime

2.REVERSING A NUMBER

#include<iostream>
 using namespace std;
 
 int main(){
    int n,reverse=0,digit;
     
    cout<<"Enter a number:";
    cin>>n;
     
    while(n>0){
        digit=n%10;
        reverse=reverse*10+digit;
        n=n/10;
    }
    cout<<reverse; 
     
    return 0;
 }

OUTPUT
Enter a number: 12345
54321
