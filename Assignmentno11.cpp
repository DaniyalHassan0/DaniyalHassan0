#include <iostream>
using namespace std;

struct Expenses{
	
	float housing;
	float utilities;
	float hou_exp;
	float transport;
	float food;
	float medical;
	float insurance;
	float ent;
	float cloth;
	float miscallenous;
	
};

void Store (Expenses s){
	
	cout << "Housing Expenses: " , cin >> s.housing;
	cout << "Utilities Expenses: " , cin >> s.utilities;
	cout << "House Expenses: " , cin >> s.hou_exp;
	cout << "Transport Expenses: " , cin >> s.transport;
	cout << "Food Expenses: " , cin >> s.food;
	cout << "Medical Expenses: " , cin >> s.medical;
	cout << "Insurance Expenses: " , cin >> s.insurance;
	cout << "Entertainment Expenses: " , cin >> s.ent;
	cout << "Clothing Expenses:" , cin >> s.cloth;
	cout << "Miscallenous: " , cin >> s.miscallenous;
	
}

void Display (Expenses d){

	cout << "Housing Expenses: " << d.housing << endl;
	cout << "Utilities Expenses: " << d.utilities << endl;
	cout << "House Expenses: " << d.hou_exp << endl;
	cout << "Transport Expenses: " << d.transport << endl;
	cout << "Food Expenses: " <<d.food << endl;
	cout << "Medical Expenses: " << d.medical << endl;
	cout << "Insurance Expenses: " << d.insurance << endl;
	cout << "Entertainment Expenses: " << d.ent << endl;
	cout << "Clothing Expenses:" << d.cloth << endl;
	cout << "Miscallenous: " << d.miscallenous << endl;
	
}

int main ()
{
	
	Expenses budget;
	int month;
	
	cout << "Which Month Budget?" << endl;
	cin >> month;
	
	if (month > 12){
		cout << "Months Must Be Within the reach of 12" << endl;
	}
	else {
		cout << "Enter " << month << " Month Data" << endl;
		Store (budget);
		cout << "---------Displaying Data-----------" << endl;
		Display (budget);
		
	}
	
	
}
