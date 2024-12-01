#include "Storage.h"
#include <algorithm>

// Default constructor
Storage::Storage() {}

// Constructor with initial values
Storage::Storage(vector<Student> listStudent, vector<Admin> listAdmin, vector<Department> listDepartment)
    : listStudent_(listStudent), listAdmin_(listAdmin), listDepartment_(listDepartment) {}

// Getters
vector<Student> Storage::getListStudent() const {
    return listStudent_;
}

vector<Admin> Storage::getListAdmin() const {
    return listAdmin_;
}

vector<Department> Storage::getListDepartment() const {
    return listDepartment_;
}

// Setters
void Storage::setListStudent(vector<Student> listStudent) {
    listStudent_ = listStudent;
}

void Storage::setListAdmin(vector<Admin> listAdmin) {
    listAdmin_ = listAdmin;
}

void Storage::setListDepartment(vector<Department> listDepartment) {
    listDepartment_ = listDepartment;
}

// Add methods
void Storage::addCourse(Course course) {
    for (auto& department : listDepartment_) {
        if (department.getId() == course.getDepartmentId()) {
            department.addCourse(course);
            break;
        }
    }
}

void Storage::addSection(Section section) {
    for (auto& department : listDepartment_) {
        if (department.getId() == section.getDepartmentId()) {
            department.addSection(section);
            break;
        }
    }
}

void Storage::addDepartment(Department department) {
    listDepartment_.push_back(department);
}

void Storage::addStudent(Student student) {
    listStudent_.push_back(student);
}

void Storage::addFaculty(Faculty faculty) {
    for (auto& department : listDepartment_) {
        if (department.getId() == faculty.getDepartmentId()) {
            department.addFaculty(faculty);
            break;
        }
    }
}

void Storage::addAdmin(Admin admin) {
    listAdmin_.push_back(admin);
}

// Remove methods
void Storage::removeCourse(string courseId) {
    for (auto& department : listDepartment_) {
        department.removeCourse(courseId);
    }
}

void Storage::removeSection(string sectionId) {
    for (auto& department : listDepartment_) {
        department.removeSection(sectionId);
    }
}

void Storage::removeStudent(string studentId) {
    listStudent_.erase(remove_if(listStudent_.begin(), listStudent_.end(),
        [&](const Student& student) { return student.getId() == studentId; }), listStudent_.end());
}

void Storage::removeFaculty(string facultyId) {
    for (auto& department : listDepartment_) {
        department.removeFaculty(facultyId);
    }
}

void Storage::removeAdmin(string adminId) {
    listAdmin_.erase(remove_if(listAdmin_.begin(), listAdmin_.end(),
        [&](const Admin& admin) { return admin.getId() == adminId; }), listAdmin_.end());
}

void Storage::removeDepartment(string departmentId) {
    listDepartment_.erase(remove_if(listDepartment_.begin(), listDepartment_.end(),
        [&](const Department& department) { return department.getId() == departmentId; }), listDepartment_.end());
}

