#include <iostream>
#include <sstream>
using namespace std;

int main()
{
    bool f=true;
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
                f=false;
                return -1;
            }
        }
    }
    if(f){
        cout<<a<<endl;
        return 0;
    }
}
