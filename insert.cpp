#include<iostream>
using namespace std;
int main()
{
  int array[] = {1,2,3,4,5,6,7,8,9,10};
  int i, x, position;
  
for(i=0; i<10; i++)
	cout<<array[i]<<" ";
	
cout<<"\nSelect the position: ";
cin>>position;

for(i=10; i>=position; i--)
  array[i] = array[i-1];

cout<<"\nEnter number to append in an array: ";
cin>>x;
  array[i] = x;
  i++;
  
cout<<"\nThe new array is:\n";
for(i=0; i<=10; i++)
cout<<array[i]<<" ";

cout<<endl;
  return 0;
}
