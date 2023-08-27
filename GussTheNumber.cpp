/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    
    cout<<"--Guss the Number From 1 To 20-- "<<endl;
    bool stat=false;
    srand(time(NULL));
    const int x=rand()%(20-1+1)+1;
    while(stat==false){
    int n;
    cin>>n;
    
    if(n==x){
        cout<<"Correct! :) "<<endl;
        stat=true;
    
    }else if(n<x){
        cout<<"Too Low! :( ,try again."<<endl;
    }
    else{
        cout<<"Too High! :( ,try again."<<endl;
    }
    
}
    return 0;
}
