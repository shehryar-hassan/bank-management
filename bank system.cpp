#include <iostream>
#include <string>

using namespace std;

void createAccount(string &name, string &address, string &contact, string &accountType, double &balance) 
{
    cout << "Enter your name: ";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your address: ";
    getline(cin, address);
    cout << "Enter your contact number: ";
    getline(cin, contact);
    cout << "Enter account type (Savings/Checking/Fixed Deposit): ";
    getline(cin, accountType);
    cout << "Enter initial deposit amount: ";
    cin >> balance;
    cout << "Account created successfully!\n\n";
}

void viewAccount(const string &name, const string &address, const string &contact, const string &accountType, double balance) 

{
    cout << "\n Account Details:\n";
    cout << " Name: "<<name<<"\n";
    cout << " Address: "<<address<<"\n";
    cout << " Contact: "<<contact<<"\n";
    cout << " Account Type: "<<accountType<<"\n";
    cout << " Balance: $"<<balance<<"\n\n";
}

void depositFunds(double &balance) 

{
    double amount;
    
    cout << "Enter deposit amount: ";
    cin >> amount;
    
    if (amount > 0) 
	{
        balance += amount;
        cout << "Deposited $"<<amount<<" successfully.\n";
    } 
	else 
	{
		
    cout << "Invalid deposit amount.\n";
	}
	
    cout <<"Current Balance: $"<<balance<<"\n\n";
}

void withdrawFunds(double &balance) 
{
	
    double amount;
    
    cout <<"Enter withdrawal amount: ";
    cin >>amount;
    
    if (amount > 0 && amount <= balance) 
    {
        
		balance -= amount;
        cout <<"Withdrew $"<<amount<<" successfully. \n";
    }
	else 
    {
    	
    cout << "Invalid withdrawal amount or insufficient balance. \n";
    
	}
    cout << "Current Balance: $" << balance << "\n\n";

}

void balanceEnquiry(double balance) 
{
    cout <<"Current Balance: $"<<balance<<"\n\n";
}

int main() 
{
    string name, address, contact, accountType;
    double balance = 0.0;
    int choice;

    do 
    {
    	
        cout << "Menu: \n ";
        cout << "1. Create Account \n ";
        cout << "2. View Account Information \n ";
        cout << "3. Deposit Funds \n ";
        cout << "4. Withdraw Funds \n ";
        cout << "5. Balance Enquiry \n ";
        cout << "6. Exit \n ";
        cout << "Enter your choice: ";
        
        cin >> choice;

        switch (choice)
		 
        {
        	
            case 1:
                createAccount(name, address, contact, accountType, balance);
                break;
                
            case 2:
                viewAccount(name, address, contact, accountType, balance);
                break;
                
            case 3:
                depositFunds(balance);
                break;
                
            case 4:
                withdrawFunds(balance);
                break;
                
            case 5:
                balanceEnquiry(balance);
                break;
                
            case 6:
                cout << "Exiting the program. Goodbye!\n";
                break;
                
            default:
                cout << "Invalid choice. Please try again.\n";
                
        }
        
    } while (choice != 6);

    return 0;
}

