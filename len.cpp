#include <iostream>
using namespace std;
int main()
{
  int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i;
  
	cout<<"\nArray:\n";
    
for(i=0; i<10; i++)
    cout<<num[i]<<" ";
    cout<<"\n";
        
int numLen = sizeof(num)/sizeof(num[0]);
  
cout << "\n Length of the Array = " << numLen << "\n";
  
return 0;
}
