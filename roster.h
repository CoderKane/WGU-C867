#pragma once
#include "degree.h"
#include "student.h"

class Roster {
private:
	int studentsAdded = 0;
public:
	Student* classRosterArray[5] = {nullptr,nullptr,nullptr,nullptr,nullptr};
	void parse(string data);
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, DegreeProgram degreeprogram);
	Student* getStudentObject(string studentID);
	void remove(string studentID);
	void printStudentData(Student* student);
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(DegreeProgram degreeProgram);

	~Roster();
};