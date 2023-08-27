/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    
    cout<<"--Simple Calculator Program-- "<<endl;
    while(true){
    cout<<"Enter Two Numers:  "<<endl;
    int x,y;
    cin>>x>>y;
    cout<<"Choose an operation : + ,-, *,/ "<<endl;
    char c;
    cin>>c;
    switch(c){
        case '+':
        cout<<x<<" + "<<y<<" = "<<x+y;
        break;
        case '-':
        cout<<x<<" - "<<y<<" = "<<x-y;
        break;
        case '*':
        cout<<x<<" * "<<y<<" = "<<x*y;
        break;
        case '/':
        cout<<x<<" / "<<y<<" = "<<x/y;
        break;
        default :
        cout<<"You Must Choose One Of the Last Operations !"<<endl;
    }
    cout<<endl;
}
    return 0;
}
