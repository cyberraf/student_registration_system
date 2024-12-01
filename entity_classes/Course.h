#ifndef COURSE_H
#define COURSE_H

#include<iostream>
#include<faculty.h>
#include<Department.h>

class Course{
    private:
    string courseName;
    string courseDescription;
    //courseID consists of the department ID plus an courseIDNum
    string courseID;
    string courseIDNum;
    public:
    string getCourseName();
    string getCourseDescription();
    string getCourseID();
    Department getCourseDepartment();
    void printCourseName();
    void printCourseDescription();
    void printCourseID();
    void printListOfSections();

    //removeSectionFromList requires the Section ID as the parameter(this is a string)
    void removeSectionFromList(string);
    void updateCourseName(string);
    void updateCourseDescription(string);
    //updateCourseIDNum will need to update courseID as well
    void updateCourseIDNum(string);
    void updateCourseDepartment(string);
};
#endif