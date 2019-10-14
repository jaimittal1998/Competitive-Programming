#include <iostream>
using namespace std;
int main()
{
	int com;
	float sum,price[100];
	cout<<"\nENTER THE NUMBER OF ITEMS BOUGHT = ";
	cin>>com;
	cout<<"\nNOW ENTER THE PRICES FOR EACH COMMODITY!!!\n";
	for(int i=0; i<com; i++)
	{
		cout<<"\nENTER PRICE FOR COMMODITY "<<i+1<<" = ";
		cin>>price[i];
		if(price[i]>=1000)
		{
			price[i]=price[i]-(price[i]/10);
		}
		cout<<"\nTHE PRICE FOR COMMODITY "<<i+1<<" = "<<price[i];
		sum+=price[i];		
	}
	cout<<"\nYOUR TOTAL PRICE IS = "<<sum;
	return 0;
}
