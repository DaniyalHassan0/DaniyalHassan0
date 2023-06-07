#include <iostream>
using namespace std;

struct Data {
	string p_name;
	int p_number;
	int p_scored;
	
};

int main ()
{
	Data info[12];
	int sum=0;
	int highest;
	string best_player;
	
	for (int i = 0 ; i < 12 ; i++)
	{
		cout << "Enter The Info Of Number " << i + 1 << " Player" << endl;
		
		cout << "Player Name: "; cin >> info [i].p_name;
		cout << "Number of Player: " , cin >> info[i].p_number;
		cout << "Points Scored by Player: " , cin >> info[i].p_scored;
		while (info[i].p_scored < 0){
			cout << "Invalid Input. Enter the Score in Positive Number" << endl;
			cin >> info[i].p_scored;
		}
		sum= sum + info[i].p_scored;
		
		cout <<"------------------------------------------------" << endl;
		
		if (info[0].p_scored < info[i].p_scored){
			highest = info[i].p_scored;
			best_player = info[i].p_name;
			
		}
	}
	

	
	for (int j = 0 ; j < 12 ; j++){
		
		cout << "Displaying Player " << j+1 << " Player Information" << endl;
		cout << "Player Name: " << info[j].p_name << endl;
		cout << "Player Number: " <<info[j].p_number << endl;
		cout << "Player Scored Points : " << info[j].p_scored<< endl;
		cout << "---------------------------" << endl;
		
	}
	
	cout << "Displaying Best Player Information" << endl;
		cout << "Best Player is : " << best_player << endl;
		cout << "Highest Score is : " << highest << endl;
	
	cout << "________________________________________________" << endl;
	cout << "Points Scored By Team " << sum << endl;
	
}
