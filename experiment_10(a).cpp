//Navya Pawan Khajuria
//24070123151
//B3

#include <iostream>
using namespace std;
void swap(int x, int y)
{
    int swap;
    swap=x;
    x=y;
    y=swap;
    cout<<"Value x is:"<<x<<endl;
    cout<<"Value y is:"<<y<<endl;
}
int main()
{
    int a=5, b=2;
    swap(a,b);
    cout<<"Value a is:"<<a<<endl;
    cout<<"Value b is:"<<b<<endl;
    return 0;
}

//Output:
//Value x is:2
//Value y is:5
//Value a is:5
//Value b is:2
