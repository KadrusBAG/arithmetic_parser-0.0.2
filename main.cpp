#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    string stroka;
    double a, b;
    char op;
    getline(cin, stroka);
    istringstream stream(stroka);
    stream>>a;
    while(stream>>op){
        stream>>b;
        if(op=='+'){
            a+=b;
        }
        if(op=='-'){
            a-=b;
        }
        if(op=='*'){
            a=a*b;
        }
        if(op=='/'){
            if(b!=0){
                a=a/b;
            }
            else{
                cout<<"ERROR"<<endl;
                return -1;
            }
        }
    }
    cout<<a<<endl;
    return 0;
}
