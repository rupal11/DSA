#include<iostream>
 
using namespace std;
#include"stackUsingArray.cpp"

int main(){
    // int * a=new int [5];
    // cout<<a;
    // cout<<sizeof(a);
    // cout<<endl;
    // cout<<sizeof(a)/sizeof(int);
    // cout<<endl<<"*************************"<<endl;

    StackUsingArray s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);
    s1.push(40);
    s1.push(5);
    s1.push(78);
    cout<<endl<<s1.top();
    cout<<endl<<s1.pop();
    cout<<endl<<s1.size();
    cout<<endl<<s1.isEmpty();

 
    return 0;
}