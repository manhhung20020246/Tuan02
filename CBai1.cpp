#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n, k;
    cout << "Nhap so bat ki: ";
    cin >> n;
    if(n<2)
    {
        cout << "no";
    }
    for(int i=2; i<= sqrt(n); i++)
    {
       if(n%i==0)
       {
           k++;
       }
    }
    if(k==0)
    {
        cout << "no";
    }
    else
        cout << "yes";
}
