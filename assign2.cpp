//a person can vote or not
#include <iostream>
using namespace std;
int main()
{
	int age;
	string Name;
	cout<<"Enter your Name: ";
	cin >> Name;
	
	cout << "\nEnter your age: ";
	cin>>age;
	
	string Region;
	cout<<"Enter your Region/Ward: ";
	cin>>Region;
	
	if (age>=18)
	{
		cout<<"\n You are eligible";
				 cout<<"\n You have voted successfully!!";
	}
	 
	else
	{
				cout<<"\n You are not eligible";
		cout<<"\nYou can vote after "<<18-age<<"yr(s)";
		
	}

	

return age; 
	 
}


