#include<Course.h>

Course::Course(string courseName, string courseDescription, string courseID, string courseIDNum){}

string Course::getCourseName(){
    return courseName;
}

string Course::getCourseDescription() {
    return courseDescription;
}

string Course::getCourseID() {
    return courseID;
}

void Course::printCourseName(){
    cout << courseName << endl;
}

void Course::printCourseDescription(){
    cout << courseDescription << endl;
}

void Course::printCourseID(){
    cout << courseID << endl;
}

//removeSectionFromList requires the Section ID as the parameter(this is a string)
void Course::removeSectionFromList(string){

}

void Course::updateCourseName(string newCourseName){
    courseName = newCourseName;
}

void Course::updateCourseDescription(string newCourseDescription){
    courseDescription = newCourseDescription;
}

//updateCourseIDNum will need to update courseID as well
void Course::updateCourseIDNum(string newCourseIDNum){
    courseIDNum = newCourseIDNum;
}

void Course::updateCourseDepartment(string newCourseDepartment){
    courseDepartment.updateDepartmentName(newCourseDepartment);
}