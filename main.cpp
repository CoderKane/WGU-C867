/* Copyright (C) 2021 Michel Britain - All Rights Reserved
   Western Governors University - C867 Performance Assessment - Student ID #009459521
*/
// main.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::getline;
#include "degree.h"
#include "student.h"
#include "roster.h"

int main()
{
	//Print the course title, the programming language used, WGU student ID  name.
	cout << "Western Governors University - C867 - Scripting and Programming: Applications" << endl;
	cout << "Programmed in C++ - Michel Britain - Student ID: #009459521" << "\n" << endl;

	//Set the student data as provided by WGU
	const string studentData[] =
	{
		"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
		"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
		"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
		"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
		"A5,Michel,Britain,mbrita1@wgu.edu,26,9,30,4,SOFTWARE"
	};

	//Create our roster object
	Roster classRoster;

	//parse studentData[]
	for (string data : studentData) {
		classRoster.parse(data);
	}

	//print the name of all students
	classRoster.printAll();

	//print all invalid emails
	classRoster.printInvalidEmails();

	//loop through classRosterArray and for each element print the average days in course
	for (Student* student : classRoster.classRosterArray) {
		classRoster.printAverageDaysInCourse(student->getStudentID());
	}
	cout << "\n";

	classRoster.printByDegreeProgram(DegreeProgram::SOFTWARE);

	classRoster.remove("A3");

	classRoster.printAll();

	classRoster.remove("A3");
	//expected: the above line should print a message saying such a student with this ID was not found.

	//leave command line open
	system("pause");
}