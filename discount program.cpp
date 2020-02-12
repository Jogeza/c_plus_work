//a program that gives a discount 
#include<iostream>
using namespace std;
int main()
{
	char item1[25];
	char item2[25];
	char item3[25];
	float qty1, qty2, qty3;
	int p1, p2, p3;
	float total;
	cout<<"please enter the names of the items requred by the customer";
	cin>>item1>>item2>>item3;
	cout<<"enter the qty of the products ";
	cin>>qty1>>qty2>>qty3;
	cout<<"enter the price of the items";
	cin>>p1>>p2>>p3;
	
	total=p1*qty1+p2*qty2+p3*qty3;
	
	if(total>100000)
	{
		float d, amounttopay;
	
		
		d=(10/100)*total;
		
		amounttopay=total-d;
		
		cout<<"please pay"<<amounttopay;
	}
	else{
		cout<<"please pay"<<total;
	}
	return 0;
}
