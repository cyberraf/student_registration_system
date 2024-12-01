#include <vector>
#include <string>
#include "User.h"
#include "Admin.h"
#include "faculty.h"
#include "Department.h"
#include <string>
#include <iostream>


using namespace std;


class Storage {
public:
    Storage();
    Storage(vector<Student> listStudent, vector<Admin> listAdmin, :vector<Department> listDepartment);

    // Getters
    vector<Student> getListStudent() const;
    vector<Admin> getListAdmin() const;
    vector<Department> getListDepartment() const;

    // Setters
    void setListStudent(vector<Student> listStudent);
    void setListAdmin(vector<Admin> listAdmin);
    void setListDepartment(vector<Department> listDepartment);

    void addCourse(Course course);
    void addSection(Section section);
    void addDepartment(Department department);
    void addStudent(Student student);
    void addFaculty(Faculty faculty);
    void addAdmin(Admin admin);

    void removeCourse(string courseId);
    void removeSection(string sectionId);
    void removeStudent(string studentId);
    void removeFaculty(string facultyId);
    void removeAdmin(string adminId);
    void removeDepartment(string departmentId);

private:
    vector<Student> listStudent_;
    vector<Admin> listAdmin_;
    vector<Department> listDepartment_;
};

