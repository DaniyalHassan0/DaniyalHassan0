#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

struct Student {
  string name;
  int id;
  int numTests;
  int *tests;
  double average;
  char grade;
  char *description;
};

void computeAverage(Student &student) {
  double sum = 0;
  for (int i = 0; i < student.numTests; i++) {
    sum += student.tests[i];
  }
  student.average = sum / student.numTests;
}

void computeGrade(Student &student) {
  if (student.average >= 90) {
    student.grade = 'A';
    student.description = "Excellent";
  } else if (student.average >= 80) {
    student.grade = 'B';
    student.description = "Very Good";
  } else if (student.average >= 70) {
    student.grade = 'C';
    student.description = "Good";
  } else if (student.average >= 60) {
    student.grade = 'D';
    student.description = "Satisfactory";
  } else {
    student.grade = 'F';
    student.description = "Unsatisfactory";
  }
}

int main() {
  int numTests, numStudents;
  cout << "Enter the number of tests: ";
  cin >> numTests;
  cout << "Enter the number of students: ";
  cin >> numStudents;

  Student *students = new Student[numStudents];

  for (int i = 0; i < numStudents; i++) {
    cout << "Enter the name of student " << i+1 << ": ";
    cin >> students[i].name;
    cout << "Enter the ID number of student " << i+1 << ": ";
    cin >> students[i].id;
    students[i].numTests = numTests;
    students[i].tests = new int[numTests];
    cout << "Enter the test scores for student " << i+1 << ": ";
    for (int j = 0; j < numTests; j++) {
      cin >> students[i].tests[j];
    }
    computeAverage(students[i]);
    computeGrade(students[i]);
  }

  cout << endl << "Student Grades:" << endl;
  for (int i = 0; i < numStudents; i++) {
    cout << students[i].name << " (" << students[i].id << "): " << students[i].grade << " - " << students[i].description << endl;
  }

  
}

