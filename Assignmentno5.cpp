#include <iostream>
#include <string>

const int NUM_MONTHS = 12;


enum Month {
  JANUARY,
  FEBRUARY,
  MARCH,
  APRIL,
  MAY,
  JUNE,
  JULY,
  AUGUST,
  SEPTEMBER,
  OCTOBER,
  NOVEMBER,
  DECEMBER
};

struct WeatherData {
  Month month;  
  std::string name;  
  double totalRainfall;  
  double highTemperature; 
  double lowTemperature;  
  double averageTemperature;
};

int main() {
  WeatherData year[NUM_MONTHS];

  
  for (Month i = JANUARY; i <= DECEMBER; i = static_cast<Month>(i + 1)) {
    std::cout << "Enter data for month " << i + 1 << ":" << std::endl;
    std::cout << "Name: ";
    std::cin >> year[i].name;
    year[i].month = i;
    std::cout << "Total rainfall (in inches): ";
    std::cin >> year[i].totalRainfall;
    std::cout << "High temperature (in Fahrenheit): ";
    std::cin >> year[i].highTemperature;
    std::cout << "Low temperature (in Fahrenheit): ";
    std::cin >> year[i].lowTemperature;

    
    year[i].averageTemperature = (year[i].highTemperature + year[i].lowTemperature) / 2.0;

  
    while (year[i].highTemperature < -100 || year[i].highTemperature > 140 || year[i].lowTemperature < -100 || year[i].lowTemperature > 140) {
      std::cout << "Invalid temperature. Please enter a temperature within the range between -100 and 140 degrees Fahrenheit." << std::endl;
      std::cout << "High temperature (in Fahrenheit): ";
      std::cin >> year[i].highTemperature;
      std::cout << "Low temperature (in Fahrenheit): ";
      std::cin >> year[i].lowTemperature;
      year[i].averageTemperature = (year[i].highTemperature + year[i].lowTemperature) / 2.0;
    }
  }

  double totalRainfall = 0;
}


