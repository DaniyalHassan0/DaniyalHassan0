#include <iostream>
using namespace std;

struct weatherData
{
	float total_rainfall;
	float H_temperature;
	float L_temperature;
};

int main ()
{
	
	weatherData wd [12];
	int sum=0;
	int i;
	int highest;
	int lowest;
	
	for (i = 0; i<12; i++)
	{
		cout << "Month is = " << i + 1 << endl;
		
		cout << "Rainfall of " << i + 1 << " Months is :" , cin >> wd[i].total_rainfall; sum = sum + wd[i].total_rainfall;
		cout << "Highest Temperature of " << i + 1 << " Months is :" , cin >> wd[i].H_temperature;
		while (wd[i].H_temperature < -100 || wd[i].H_temperature > 140){
			cout << "Error: Temperature must be between -100 and 140 degrees Fahrenheit. Please enter a valid value: " << endl;
			cin >> wd[i].H_temperature;
		}
			
		cout << "Lowest Temperature of " << i + 1 << " Months is :" , cin >> wd[i].L_temperature;
		while ( wd[i].L_temperature < -100 || wd[i].L_temperature > 140){
			cout << "Error: Temperature must be between -100 and 140 degrees Fahrenheit. Please enter a valid value: " << endl;
			cin >> wd[i].L_temperature;
		}
		cout << "-------------------------------------------------" << endl;
		
		if (wd[i].H_temperature > wd[0].H_temperature)
			highest = wd[i].H_temperature;
		else if (wd[i].L_temperature < wd[0].L_temperature)
			lowest = wd[i].L_temperature;	
		
		}
		
		cout << "Highest RainFall is " << highest << endl;
		cout << "Lowest Rainfall is " << lowest << endl;
	
	cout << "Total RainFall of 12 Year is: " << sum << endl;
	cout << "Average RainFall of 12 Year is : " << sum/12 << endl;
	
	
	
}
	
		

