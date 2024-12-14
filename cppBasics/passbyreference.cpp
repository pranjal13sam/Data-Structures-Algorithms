#include<iostream>
using namespace std;

//here in the pass by value what is happening is basically the copy of num is going to the function
// not the original value which is stored in the memory. so what is happening is the function is just
//playing it with the copy but changes will not be reflected to the original num since only copy was passed.
void passByValue(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
}

//But here in pass by refernce we pass original number (address from the memory) to the function so the changes are reflected in the main as well
void passByReference(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
}
    
int main()
{
    int num=10;
    cout<<"PASS BY VALUE: "<<endl;
    passByValue(num);
    cout<<"the number in the main: "<<num<<endl;
    cout<<endl;
    cout<<"PASS BY REFERENCE: "<<endl;
    passByReference(num);
    cout<<"the number in the main: "<<num<<endl;
    return 0;
}