
#include<iostream>
using namespace std;
int main()
{
	int a[20][20],b[20][20],i,j,n,k;
	cout<<"Enter the value of n";
	cin>>n;
	cout<<endl<<"Enter the elements"<<endl;
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			cin>>a[i][j];
			
	k=n;
	
	cout<<"After Rotate of 90 degree"<<endl;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
			{
			b[k][i]=a[i][j];
			k--;
			}
		k=n;
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			cout<<b[i][j];
		}
	cout<<endl;
	}
	
}

