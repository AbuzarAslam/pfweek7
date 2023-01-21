#include<iostream>
using namespace std;
main()
{
   int n1 =0;
   int n2 =1;
   int next=0;
   int number;
   cout << "Enter a number...";
   cin >> number;
   cout << n1 << "," << n2 << ",";
   for(int count=1;count<=number-2;count=count+1)
   {
    next = n1+n2;
    n1 = n2;
    n2 = next;
    cout << next << ",";
    
   }
  
   

}