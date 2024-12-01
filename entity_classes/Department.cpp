#include<Department.h>

string Department::getDepartmentName(){
    return departmentName;
}

string Department::getDepartmentID(){
    return departmentID;
}

vector<Course> Department::getDepartmentCourses(){
    return departmentCourses;
}

vector<Faculty> Department::getDepartmentFaculty(){
    return departmentFaculty;
}

void Department::printDepartmentName(){
    cout << departmentName << endl;
}

void Department::printDepartmentID(){
    cout << departmentID << endl;
}

void Department::printDepartmentCourses(){
    for(int i = 0; i < departmentCourses.size(); i++){
        departmentCourses[i].printSection();
    }
}

void Department::printDepartmentFaculty(){
    for(int i = 0; i < departmentFaculty.size(); i++){
        departmentFaculty[i].printFaculty();
    }
}

void Department::updateDepartmentName(string newName){
    departmentName = newName;
}

void Department::updateDepartmentID(string newDepartmentID){
    departmentID = newDepartmentID;
}

void Department::addDepartmentCourse(Course newCourse){
    departmentCourses.push_back(newCourse);
}

void Department::addDepartmentFaculty(Faculty newFaculty){
    departmentFaculty.push_back(newFaculty);
}

//removeDepartmentCourse will take the CourseID as a parameter
void Department::removeDepartmentCourse(string departmentName){
    
}

//removeDepartmentFaculty will take the Faculty Email as a parameter
void Department::removeDepartmentFaculty(string addDepartmentFaculty){

}