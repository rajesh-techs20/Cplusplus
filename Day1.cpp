Inputs 

#include<iostream>
  #include<string>
  using namespace std;
  
  int main(){
      
      string name;
      string collegeName;
      int age;
      
      cout<<"Enter Name:";
      cin>>name;
      
      cout<<"Enter Age:";
      cin>>age;
      
      cout<<"Enter College Name:";
      cin>>collegeName;
      
      cout<<"Name is:"<<name<<endl;
      cout<<"Age is:"<<age<<endl;
      cout<<"College name is:"<<collegeName<<endl;
      return 0;
  }


#OUTPUT
Enter Name:Rajesh
Enter Age:19
Enter College Name:RNSIT
Name is:Rajesh
Age is:19
College name is:RNSIT

If Else

#include<iostream>
  using namespace std;
  
  int main(){
      int marks;
      
      cout<<"Enter Marks:";
      cin>>marks;
      
      if(marks>=35){
          cout<<"Pass";
      }
      else{
          cout<<"Fail";
      }
      return 0;
  }

#OUTPUT
Enter Marks:35
Pass


2nd take number print positive or negative or zero

#include<iostream>
using namespace std;
int main(){
    int number;
    
    cout<<"Enter a number:";
    cin>>number;
    
    if(number>0){
        cout<<"Positive";
    }
    else if(number<0){
        cout<<"Negative";
    }
    else{
        cout<<"Zero";
    }
    return 0;
}

#OUTPUT

Enter a number:8
Positive

Enter a number:-9
Negative

LOOPS 

#include<iostream>
using namespace std;
int main(){
     int i;
     for(i=0;i<=5;i++){
            cout<<i<<endl;
     }
     return 0;
}

#OUTPUT
0
1
2
3
4
5

in While Loop
#include<iostream>
using namespace std;
int main(){
    
    int i;
    while(i<=5){
        cout<<i<<endl;
        i++;
    }
    return 0;
}

#OUTPUT

0
1
2
3
4
5
     
sum of n numbers from 0 using loops

#include<iostream>
using namespace std;
int main(){
    int i,n;
    int sum=0;
    
    cout<<"Enter a number:";
    cin>>n;
    
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum:"<<sum;
    return 0;
}

#Output
Sum:15
