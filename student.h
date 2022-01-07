#pragma once
#include <vector>
using std::vector;

//Rubric D1
class Student {
private:
	//class instance variables
	string studentID;
	string firstName;
	string lastName;
	string email;
	int age;
	vector<int> daysInCourse;
	DegreeProgram degree;

public:
	Student(string studentID, string firstName, string lastName, string email, int age, vector<int> daysInCourse, DegreeProgram degree);
	Student();
	~Student();

	string getStudentID();
	string getFirstName();
	string getLastName();
	string getEmail();
	int getAge();
	vector<int> getDaysInCourse();
	DegreeProgram getDegree();

	void setStudentID(string);
	void setFirstName(string);
	void setLastName(string);
	void setEmail(string);
	void setAge(int);
	void setDaysInCourse(vector<int>);
	void setDegree(DegreeProgram);

	string getDegreeProgramName();

	void print();
};