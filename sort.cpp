#include<iostream>
using namespace std;
int main()
{
	int num[] = {9,7,5,3,1,2,4,6,8,10};
	int i, j, temp;
	
	cout<<"Array:"<<endl;
	
	for(i=0; i<10; i++)
    {
        cout<<num[i]<<" ";
    }
	
	for (i=0; i<10; i++)
	{	
        for(j = i+1; j<10; j++)
        {
            if(num[i]>num[j])
            {
                temp=num[i];
                num[i]=num[j];
                num[j]=temp;
            }
        }
    }
 
    cout<<"\nSorted Array : "<<endl;
    for(i=0; i<10; i++)
    {
        cout<<num[i]<<" ";
    }
    
	return 0;
}
