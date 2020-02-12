//a program which compues and executes math marks
#include<iostream>
using namespace std;
int main()
{
	float marks;
	cout<<"Enter the math marks for students";
	cin>>marks;
	if(marks>=50)
	{cout<<"the student has passed math";
	}
	if(marks<50)
	{cout<<"the student has failed math";
	}
	return 0;
}
