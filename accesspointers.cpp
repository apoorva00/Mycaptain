#include <iostream>
using namespace std;

int main()
{
   int n,a[5];
   cout<<"Enter the number of elements :";
   cin>>n;
   cout << "Enter elements: ";
   for(int i = 0; i < 5; ++i)
      cin >> a[i];
   cout << "The elements entered are : ";
   for(int i = 0; i < 5; ++i)
      cout << endl << *(a + i);
   return 0;
}