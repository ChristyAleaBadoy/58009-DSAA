#include<iostream>
using namespace std;
int main()
{
  int array[] = {1,2,3,4,5,6,7,8,9,10};
  int i, x;
  
for(i=0; i<10; i++)
	cout<<array[i]<<" ";

cout<<"\nEnter a number to append in an array: ";
cin>>x;
  array[i] = x;
  
cout<<"\nThe new array is:\n";
for(i=0; i<=10; i++)
cout<<array[i]<<" ";

cout<<endl;
  return 0;
}

