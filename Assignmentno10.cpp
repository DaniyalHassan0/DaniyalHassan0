#include <iostream>

using namespace std;

struct Data 
{
	string name;
	int tele_num;
	string topic;
	int fee;
};

void Display (Data d [] , int n){
	
	
	for(int j = 0; j < n; j++) {
		cout << "----------------Displaying Data-----------" << endl;
		
		cout << "Displaying The Data of " << j + 1 << " User" << endl;
					cout << "Enter Name: " << d[j].name << endl;
					cout << "Enter Telephone Number: " << d[j].tele_num << endl;
					cout << "Enter Topic: "  << d[j].topic << endl;
					cout << "Enter Fee: " << d[j].fee << endl;
					cout << "=========================================" << endl;
		
	}
	
}

void searchSpeakers(Data speakers[], string topic) {
  bool found = false; 
  int n;
  for (int i = 0; i < n; i++) {
    string speakerTopic = speakers[i].topic;

    if (topic.find(topic) != string::npos) {  
   
      cout << "Name: " << speakers[i].name << endl;
      cout << "Phone number: " << speakers[i].tele_num << endl;
      cout << "Speaking topic: " << speakers[i].topic << endl;
      cout << "Fee: " << speakers[i].fee << endl;
      found = true;
    }
  }
  if (!found) {  // If no matching speaker was found
    std::cout << "No speaker found with a speaking topic containing the key word '" << topic << "'." << std::endl;
  }
}

int main ()
{
	Data data [20];
	int n;
	int choice;
	int i;
	int change;
	string topic;
	
	do {
	
	cout << "-------Displaying Menu--------" << endl;
	
	cout << "1. Enter Data " << endl;
	cout << "2. Change Data " << endl;
	cout << "3. Display Record" << endl;
	cout << "4. Search Record" << endl;
	cout << "5. Exit" << endl;
	cout << endl;
	cout << "Enter The Option: " , cin >> choice;
	
	switch (choice){
		
		case 1 : {
			cout << "How Many Users Info You Want to Enter. Limit 10." << endl;
			cout << "Enter Limit:" , cin >> n;
			if (n > 10)
			break;
			else {
				for (i = 0 ; i < n ; i++){
					cout << "Enter The Data of " << i + 1 << " User" << endl;
					cout << "Enter Name: " , cin >> data[i].name;
					cout << "Enter Telephone Number: " , cin >> data[i].tele_num;
					cout << "Enter Topic: " , cin >> data[i].topic;
					cout << "Enter Fee: " , cin >> data[i].fee;
					while (data[i].fee < 0){
						cout << "Value must be in positive integer" << endl;
						cin >> data[i].fee;
					}
					cout << "=========================================" << endl;
					
				}
			}

			
			break;
		}
		
		case 2 :{
						cout << "Which Entry You want to Change?" << endl;
			cin >> change;
					cout << "Re-Enter The Data of " << i + 1 << " User" << endl;
					cout << "Re-Enter Name: " , cin >> data[change].name;
					cout << "Re-Enter Telephone Number: " , cin >> data[change].tele_num;
					cout << "Re-Enter Topic: " , cin >> data[change].topic;
					cout << "Re-Enter Fee: " , cin >> data[change].fee;
					while (data[change].fee < 0){
						cout << "Value must be in positive integer" << endl;
						cin >> data[change].fee;
					}
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
			searchSpeakers (data [20] , topic);
			break;
		}
	}
	
} while (choice !=5);
}
