#include<iostream>
using namespace std;
function add(int a1, int a2)
{
    return a1+a2;
}
function add(int a1, int a2, int a3)
{
    return a1+ a2+ a3;
}
int main()
{
    add(2,3);
    add(4,5,6);
    return 0;
}