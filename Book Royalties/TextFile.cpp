




#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int choice; // menu choice
	double royalty1, royalty2, royalty3;


	cout << "**************************************************\n";
	cout << "*              Welcome to the                     \n";
	cout << "*         Book Royalty Calculator                 \n";
	cout << "*                                                 \n";
	cout << "*    1:  5000 now, 2000 at publication            \n";
	cout << "*    2:  12.5% per novel (net price)              \n";
	cout << "*    3:  10% per novel <= 4000.                   \n";
	cout << "*        and 14 % per novel > 4000                \n";
	cout << "*                                                 \n";
	cout << "**************************************************\n";
	cout << "     Please enter choice :";
	cin >> choice;


	if (choice == 1)
	{
		royalty1 = 5000 + 20000.0;

	}
	else if (choice == 2)
	{
		cout << "How many books will be sold?";
			cin >> books;
		cout << "What isthe price?"
			cin >> price;

	}
	
	else if (choice == 3)
	{
		royalty3 = .1 * books * price;
		royalty3 += .14 * (books - 4000) * price;

    }
	else
		cout << "Invalid choice" << endl;
		
  





    system("Pause");
	return 0;.

