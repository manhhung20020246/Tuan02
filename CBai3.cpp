#include<iostream>
using namespace std;
int main ()
{
    int n,i,j;
//nhap chieu cao tam giac
    cin >> n;
    for(i=1;i<=n;i++)
    {
    	
        for(j=1;j<=n-i;j++)
        printf(" "); 	//in ra man hinh khoang trang thu n-i
        for(j=1;j<=2*i-1;j++) 
        printf("*"); 	//in ra man hinh * vi tri 2xi-1
        printf("\n");
    }

}
