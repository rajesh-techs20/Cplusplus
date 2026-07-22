#include<iostream>
using namespace std;

void display()
{
    cout<<"Hello World!";
}
int main() {
    display();
    return 0;
}

OUTPUT 
Hello World!

#include<iostream>
using namespace std;
void add()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    cout<<"Sum:"<<a+b;
}
int main()
{
    add();
    return 0;
}

OUTUT
Enter two numbers:2 3
Sum:5

LARGEST NUMBER 
#include<iostream>
using namespace std;
void largest(int a,int b)
{
    if(a>b){
        cout<<"Largest Number is:"<<a;
    }
    else {
        cout<<"Largest Number is:"<<b;
    }
}
int main() {
    int x,y;
    cout<<"Enter two numbers:";
    cin>>x>>y;
    
    largest(x,y);
    return 0;
}
OUTPUT 
Enter two numbers:2 3
Largest Number is:3

    WITH ARGUMENTS AND RETURN VALUE

#include<iostream>
using namespace std;

int largest(int a, int b)
{
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main()
{
    int x,y;
    cout<<"Enter two numbers";
    cin>>x>>y;
    cout<<"Largest Number is:"<<largest(x,y);
    return 0;
}
Enter two numbers2 3
Largest Number is:3

    RECURSION
     #include<iostream>
 using namespace std;
 void display(int n,int a)
 {
     if(n>a){
         return;
     }
     cout<<n<<endl;
     display(n+1,a);
 }
 int main() {
     int a;
     cout<<"Enter a num:";
     cin>>a;
     
     display(1,a);
     return 0;
 }

OUTPUT 
Enter a num:5
1
2
3
4
5
    FACTORIAL USING RECURSION
#include<iostream>
 using namespace std;
 
 int factorial(int n)
 {
     if(n==0||n==1){
         return 1;
     }
     return n*factorial(n-1);
 }
 int main()
 {
     int a,result;
     cout<<"Enter the number of terms:";
     cin>>a;
     result=factorial(a);
     cout<<"Factorial:"<<result;
     return 0;
 }
OUTPUT
Enter the number of terms:5
Factorial:120

    SUM OF FIRST NATURAL NUMBERS

#include<iostream>
 using namespace std;
 
 int sum(int n)
 {
     if(n==0){
         return 0;
     }
     return n+sum(n-1);
 }
 int main()
 {
     int a;
     cout<<"Enter a Number:";
     cin>>a;
     cout<<"Sum of natural numbers:"<<sum(a);
     return 0;
 }
OUTPUT
Enter a Number:5
Sum of natural numbers:15


