//Navya Pawan Khajuria
//24070123151
//B3

#include <iostream>
using namespace std;
void swap(int *x, int *y)
{
    int swap;
    swap=*x;
    *x=*y;
    *y=swap;
}
int main()
{
    int x=500, y=100;
    swap(&x,&y);
    cout<<"Value of x is:"<<x<<endl;
    cout<<"Value of y is:"<<y<<endl;
    return 0;
}

//Output:
//Value of x is:100
//Value of y is:500
