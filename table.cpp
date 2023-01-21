#include<iostream>
using namespace std;
main()
{
   int number;
   cout << "Enter number...";
   cin >> number;
   for(int num=1;num<=10;num=num+1)
   {
      cout << number << " * " << num << " = " << num*number << endl;
   }


}