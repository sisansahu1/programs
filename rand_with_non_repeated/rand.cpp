#include <iostream>
#include <cstdlib>
#include <ctime>
#include<algorithm>
using namespace std;

int main() {
    srand(time(NULL));
    int min = 0,a[20],j,max = 20,i=0,count=0,flag=0,num;
    while(i!=20)
		{
			num = (min + (rand() % (int)(max - min + 1)));
			if(num<20)
			{
				if(i==0)
				{
				a[i]=num;
				i++;
				}
				else
				{
				    for(j=0;j<i;j++)
				{
					if(num==a[j])
					{
						count++;
					}
	
				}
				if(count==0)
				{
				a[i]=num;
				i++;
				}
				else
				count=0;
				
			}
		}
		flag++;
		}
		sort(a,a+20);
		cout<<"Elements are : ";
		for(j=0;j<i;j++)
		{
		    cout<<a[j]<<" ";
		}
		cout<<endl<<"No of time took : "<<flag;
		 return 0;
}
