#pragma once
#include <map>
#include <iostream>
using namespace std;
void PrintMap(map<string, int>& studentGrades) {
	for (const auto& student : studentGrades)
	{
		cout << "student: " << student.first << ", grade: " << student.second << endl;
	}
}
void FindByKey(string studentName, map<string, int> studentGrades) {
	if (studentGrades.find(studentName) != studentGrades.end()) {
		cout << studentName << "'s grade: " << studentGrades[studentName] << endl;
	}
	else {
		cout << "Grade not found for " << studentName << endl;
	}
}
void MapEx() {
	map<string, int> studentGrades;
	studentGrades["AHMED"] = 100;
	studentGrades["EID"] = 200;
	studentGrades["MADY"] = 300;

	cout << "\nPrinting all map values..\n\n";
	PrintMap(studentGrades);

	string  studentName = "MADY";
	FindByKey(studentName, studentGrades);

	cout << "Size Of Map: " << studentName.size() << endl;
	cout << "===================================" << endl;


}