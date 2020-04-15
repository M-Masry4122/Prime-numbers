#include <iostream>
#include <stdlib.h>
using namespace std;
fib(int x)
{
    if(x==0)
        return 0;
    if(x==1)
        return 1;
    return fib(x-1)+fib(x-2);
}
int main()
{
    int n;
    cin>>n;
    system("CLS");
    cout << fib(n) <<endl<< flush;
    cin>>n;
    system("CLS");
    cout<<fib(n)<<endl<<flush;
    return 0;
}
