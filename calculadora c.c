#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;

int main(){
    
    float a, b;
    
    cout<<"Digite o valor para a: ";
    cin>>a;
    
    cout<<"Digite o valor para b: ";
    cin>> b;
    
    cout<<"\na+b: "<<a+b;
    cout<<"\na-b: "<<a-b;
    cout<<"\na*b: "<<a*b;
    
    if (b != 0){
        cout<<"\na/b: "<<a/b;
        cout<<"\na%b: "<<a%b;
        cout<<"\na/b: "<<a/b;
 }
    cout<<"\na^b: "<<pow(a,b);
    
    getch();
    
}