#include <iostream>
using namespace std;
int main()
{
    // FOR
   for(int i=1; i<=100; i++)
   {
       if(i%2==0)
       {
           cout << i << " ";
       }
   }
   for(int i=1; i>0; i++)
   {
       if(i%2==0)
       {
           cout << i << " ";
       }
       if(i>100)
        break;
   }
   for(int i=1; i<=100; i++)
   {
       if(i%2==0)
        continue;
       cout << i << " ";
   }

   //WHILE
   int n=1;
   while(0<n && n<=100)
   {
       if(n%2==0)
       {
           cout << n << " ";
       }
       n++;
   }

   //DO-WHILE
   int m=1;
   do
   {
       if(m%2==0)
        cout << m << " ";
       m++;
   }
   while(m<=100);
   return 0;
}


