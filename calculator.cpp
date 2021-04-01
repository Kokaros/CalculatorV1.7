#include <iostream> 
#include <string.h>
using namespace std;

int main ()
{
	char option;
	std::string ans;
	float number1, number2;
	int repeater=1;
	
	
	do {
		cout <<"Which operation you want to perform\n1. addition\n2. subtraction\n3. multiplication\n4. division\n5. exit the program\n";
		std::getline(std::cin, ans);
		cout<<"\n";
	
		if(ans.length()!=1)
		cout<<"\nError, wrong operation was given\n\n";
		else
		if (ans[0]=='1' || ans[0]=='2' || ans[0]=='3' || ans[0]=='4' || ans[0]=='5' )
		option=ans[0];
		
		
				
		bool valid = false;

		switch (option)
		{
			case '5':
				repeater=0;
			break;
			case '1':
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;
			cout<<"\n";

			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}

			cout <<"Give the second number\n";
			cin>>number2;
			cout<<"\n";
				
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}
			}
				cout<<"The answer is ";
				cout<<number1 + number2;
				cout<<"\n\n";
				break;
			case '2':
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;
			cout<<"\n";

			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}

			cout <<"Give the second number\n";
			cin>>number2;
			cout<<"\n";
				
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}}
				cout<<"The answer is ";
				cout<<number1 - number2;
				cout<<"\n\n";
				break;
			case '3':
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;
			cout<<"\n";

			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}	

			cout <<"Give the second number\n";
			cin>>number2;
			cout<<"\n";
				
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}}
				cout<<"The answer is ";
				cout<<number1 * number2;
				cout<<"\n\n";
				break;
			case '4':
				while (!valid)
			{
			valid = true; 
		
			cout <<"Give the first number\n";
			cin>>number1;
			cout<<"\n";

			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}

			cout <<"Give the second number\n";
			cin>>number2;
			cout<<"\n";
			
			if(cin.fail()) 
			{
			cin.clear(); 
			cin.ignore(); 
			cout << "Please enter a number only." << endl;
			valid = false; 
			}}
				if(number2==0)
				cout<<"Cannot be performed, the answer is undefined \n";
				else
				{
				cout<<"The answer is ";
				cout<<number1 / number2;
				cout<<"\n\n";
				}
				break;
				default:
					break;
			
		
		
	}}
	while (repeater != 0);
	return 0;
}


