/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    int x,y,u,t;
    cout<<"Enter Seconds = ";
    cin>>x;
    y = x/3600;
    x = x%3600;
    u = x/60;
    x = x%60;
    cout<<"Hours = "<<y<<endl;
    cout<<"Minutes = "<<u<<endl;
    cout<<"Seconds = "<<x;
    return 0;
}