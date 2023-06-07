#include <iostream>

using namespace std;

struct Data 
{
	string name;
	string address;
	string city, state , zip;
	string number;
	float acc_blnc;
	string date_lp;
};

void Display (Data d [] , int n){
	
	
	for(int j = 0; j < n; j++) {
		cout << "----------------Displaying Data-----------" << endl;
		
		cout << "Displaying The Data of " << j + 1 << " User" << endl;
					cout << "Enter Name: " << d[j].name << endl;
					cout << "Enter Address: " << d[j].address << endl;
					cout << "Enter City: "  << d[j].city << endl;
					cout << "Enter State: " << d[j].state << endl;
					cout << "Enter ZIP Code: " << d[j].zip << endl;
					cout << "Enter Number: " << d[j].number << endl;
					cout << "Enter Account Balance: " << d[j].acc_blnc << endl;
					cout << "Enter Date of Last Deposit: " << d[j].date_lp << endl;
					cout << "=========================================" << endl;
		
	}
	
}

void searchAccounts(Data accounts[], string name) {
  bool found = false;
  int n;
  for (int i = 0; i < n; i++) {
    string accountName = accounts[i].name;
    if (accountName.find(name) != string::npos) {

      cout << "Name: " << accounts[i].name << endl;
      cout << "Address: " << accounts[i].address << endl;
      cout << "City: " << accounts[i].city << endl;
      cout << "State: " << accounts[i].state << endl;
      cout << "ZIP: " << accounts[i].zip << endl;
      cout << "Phone number: " << accounts[i].number << endl;
      cout << "Account balance: " << accounts[i].acc_blnc << endl;
      cout << "Date of last payment: " << accounts[i].date_lp << endl;
      found = true;
    }
  }
  if (!found) { 
    std::cout << "No account found with a name matching '" << name << "'." << std::endl;
  }
}

int main ()
{
	Data data [20];
	int n;
	int choice;
	int i;
	int change;
	char search;
	string name;
	
	do {
	
	cout << "-------Displaying Menu--------" << endl;
	
	cout << "1. Enter Data " << endl;
	cout << "2. Change Data " << endl;
	cout << "3. Display Record" << endl;
	cout << "4. Search Entry" << endl;
	cout << "5. Exit" << endl;
	cout << endl;
	cout << "Enter The Option: " , cin >> choice;
	
	switch (choice){
		
		case 1 : {
			cout << "How Many Users Info You Want to Enter. Limit 20." << endl;
			cout << "Enter Limit:" , cin >> n;
			if (n > 20)
			break;
			else {
				for (i = 0 ; i < n ; i++){
					cout << "Enter The Data of " << i + 1 << " User" << endl;
					cout << "Enter Name: " , cin >> data[i].name;
					cout << "Enter Address: " , cin >> data[i].address;
					cout << "Enter City: " , cin >> data[i].city;
					cout << "Enter State: " , cin >> data[i].state;
					cout << "Enter ZIP Code: " , cin >> data[i].zip;
					cout << "Enter Number: " , cin >> data[i].number;
					cout << "Enter Account Balance: " , cin >> data[i].acc_blnc;
					while (data[i].acc_blnc < 0) {
						cout << "Balance Must be Positive. Re-Enter Value" << endl;
						cin >> data[i].acc_blnc;
					}
					cout << "Enter Date of Last Deposit: " , cin >> data[i].date_lp;
					cout << "=========================================" << endl;
					
				}
			}

			
			break;
		}
		
		case 2 :{
						cout << "Which Entry You want to Change?" << endl;
			cin >> change;
					cout << "Re-Enter Name " , cin >> data[change].name;
					cout << "Enter Address: " , cin >> data[change].address;
					cout << "Enter City: " , cin >> data[change].city;
					cout << "Enter State: " , cin >> data[change].state;
					cout << "Enter ZIP Code: " , cin >> data[change].zip;
					cout << "Enter Number: " , cin >> data[change].number;
					cout << "Enter Account Balance: " , cin >> data[change].acc_blnc;
					while (data[change].acc_blnc < 0) {
						cout << "Balance Must be Positive. Re-Enter Value" << endl;
						cin >> data[change].acc_blnc;
					}
					cout << "Enter Date of Last Deposit: " , cin >> data[change].date_lp;
					cout << "=========================================" << endl;
			
			break;
		}
		
		case 3 : {
						while (data == 0){
				
				cout << "No Data Available" << endl;
				}
				Display (data , n);

			
			break;
		}
		
		case 4 : {
			
					searchAccounts (data [] , name);			
			}
			break;
		}
		
	} while (choice != 5)
	
} 
