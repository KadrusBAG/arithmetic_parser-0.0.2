#include <iostream>
using namespace std;

int main()
{
    double a, b;
    char op1, op2;
    cin>>a;
    cin.get(op1);
    while(op1!='\n'){
        cin.get(op2);
        cin.get(op1);
        cin>>b;
        cin.get(op1);
        if(op2=='+'){
            a+=b;
        }
        else if(op2=='-'){
            a-=b;
        }
        else if(op2=='*'){
            a=a*b;
        }
        else if(op2=='/'){
            if(b==0){cout<<"error"; return -1;}
            else{
                a=a/b;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}
