#include <iostream>
using namespace std;
int main()
{
    int n;
    cout <<"Nhap kich thuoc tam giac: "; 
	cin>>n;
    cout <<"\n\n";
    int a=(2*n-1);
    for (int i=1;i<=n;i++)
    {
        for (int j=1;j<=a;j++)
        {
            if (i==1) cout <<"*";
            else if ((j<i) || (j>a+1-i)) cout <<" ";
            else cout <<"*";
        }
        cout <<"\n";
    }
 
    cout <<"\n\n";
}
