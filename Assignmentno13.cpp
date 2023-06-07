#include <iostream>

using namespace std;

struct Hourly {
  double hoursWorked;
  double hourlyRate;
};

struct Salaried {
  double salary;
  double bonus;
};

union Pay {
  Hourly hourly;
  Salaried salaried;
};

int main() {
  Pay pay;
  char workerType;
  cout << "Are you calculating pay for an hourly paid worker (H) or a salaried worker (S)? ";
  cin >> workerType;
  
  if (workerType == 'H' || workerType == 'h') {
    cout << "Enter the number of hours worked: ";
    cin >> pay.hourly.hoursWorked;
    while (pay.hourly.hoursWorked < 0 || pay.hourly.hoursWorked > 80) {
      cout << "Invalid input. Enter a value between 0 and 80: ";
      cin >> pay.hourly.hoursWorked;
    }
    cout << "Enter the hourly rate: ";
    cin >> pay.hourly.hourlyRate;
    while (pay.hourly.hourlyRate < 0) {
      cout << "Invalid input. Enter a positive value: ";
      cin >> pay.hourly.hourlyRate;
    }
    cout << "Total pay: $" << pay.hourly.hoursWorked * pay.hourly.hourlyRate << endl;
  } else if (workerType == 'S' || workerType == 's') {
    cout << "Enter the salary: ";
    cin >> pay.salaried.salary;
    while (pay.salaried.salary < 0) {
      cout << "Invalid input. Enter a positive value: ";
      cin >> pay.salaried.salary;
    }
    cout << "Enter the bonus: ";
    cin >> pay.salaried.bonus;
    while (pay.salaried.bonus < 0) {
      cout << "Invalid input. Enter a positive value: ";
      cin >> pay.salaried.bonus;
    }
    cout << "Total pay: $" << pay.salaried.salary + pay.salaried.bonus << endl;
  } else {
    cout << "Invalid input. Please enter either 'H' or 'S'." << endl;
  }
}

