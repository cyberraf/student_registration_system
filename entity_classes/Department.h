#ifndef DEPARTMENT_H
#define DEPARTMENT_H

#include<iostream>
#include<faculty.h>
#include<Department.h>
#include<Course.h>

class Department{
    private:
    string departmentName;
    string departmentID;
    vector<Course> departmentCourses;
    vector<Faculty> departmentFaculty;
    public:
    string getDepartmentName();
    string getDepartmentID();
    vector<Course> getDepartmentCourses();
    vector<Faculty> getDepartmentFaculty();
    void printDepartmentName();
    void printDepartmentID();
    void printDepartmentCourses();
    void printDepartmentFaculty();
    void updateDepartmentName(string);
    void updateDepartmentID(string);
    void addDepartmentCourse(Course);
    void addDepartmentFaculty(Faculty);
    //removeDepartmentCourse will take the CourseID as a parameter
    void removeDepartmentCourse(string);
    //removeDepartmentFaculty will take the Faculty Email as a parameter
    void removeDepartmentFaculty(string);

};
#endif