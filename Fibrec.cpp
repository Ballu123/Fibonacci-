/*
*Name:Balram Panwar,
*Email id: balram.panwar@gmail.com
*Name of the file: Fibrec.cpp
*Win10
*Microsoft Visual Studio
*Function fibonacci(): calculating the fibonacci number
*Function Main(): Display content of cout statement
*/

#include<iostream>
 
using namespace std;
 
long long fibonacci(int n)
{
    if((n==1)||(n==0))
    {
        return(n);
    }
    else
    {
        return(fibonacci(n-1)+fibonacci(n-2));
    }
}

int main()
{
    int n =50 ,i=0;
    while(i<n)
    {
        cout<<" "<<fibonacci(i);
        i++;
    }
    return 0;
}