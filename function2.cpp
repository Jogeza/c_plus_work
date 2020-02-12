//a program with a function
# include <iostream>
using namespace std;
void sum();
void sum()
{
	int a,b,s;
	cout<<"please enter any two integers";
	cin>>a>>b;
	s=a+b;
	cout<<s;
};
int main ()
{
	sum ();
	return 0;
}
