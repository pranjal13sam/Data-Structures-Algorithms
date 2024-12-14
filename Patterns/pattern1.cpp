
#include<iostream>
using namespace std;

//1st patern:
/*   
    ****
    ****
    ****   
*/

void pattern1(int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}



    
int main()
{
    int n=3;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
    pattern1(n);
    return 0;
}