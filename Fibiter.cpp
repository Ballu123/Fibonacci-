/*
*Name:Balram Panwar,
*Email id: balram.panwar@gmail.com
*Name of the file: Fibiter.cpp
*Win10
*Microsoft Visual Studio
*Function fibonacci(): calculating the fibonacci number
*Function Main(): To call the function fibonacci
*/

#include <iostream>

using namespace std;

void fibonacci(int n)  
{  
    long long f1 = 0, f2 = 1, i;  
  
    if (n < 1)  
        return;  
  
    for (i = 1; i <= n; i++)  
    {  
        cout<<f2<<" ";  
        long long next = f1 + f2;  
        f1 = f2;  
        f2 = next;  
    }  
}  
  
int main()  
{  
    fibonacci(50);  
    return 0;  
} 