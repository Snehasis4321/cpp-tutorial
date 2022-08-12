#include <iostream>

using namespace std;

void display(char ='*',int =2);

int main(){
    int t;
    display(); //no parameters passed defaults are used
    display('%'); //only char parameter is passed
    display('s',56);//both parameters are passed
    return 0;
}

void display(char c,int m){
    for (int i = 0; i < 1; i++)
    {
        cout<<c<<endl;
    }
    
}