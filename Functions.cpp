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
