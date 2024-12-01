#include <bits/stdc++.h>

using namespace std;

class Student {
    public:
        int id;
        string name;
        char section;
        int totalMarks;
    
    Student(int id, string name, char section, int totalMarks){
        this->id = id;
        this->name = name;
        this->section = section;
        this->totalMarks = totalMarks;
    }
    
    static Student findTopStudent(const vector<Student>& students){
        Student topStudent(INT_MAX, "", 'Z', 0);
        for(const auto & student : students){
            if(student.totalMarks > topStudent.totalMarks || 
                (student.totalMarks == topStudent.totalMarks && student.id < topStudent.id)){
                topStudent = student;
            }
        }
        return topStudent;
    }
};

int main()
{
    // Write your code here
    int T;
    cin >> T;
    
    while(T--){
        vector<Student> students;
        
        for(int i = 0; i < 3; i++){
            int id, totalMarks;
            string name;
            char section;
            cin >> id >> name >> section >> totalMarks;
            students.emplace_back(id, name, section, totalMarks);
        }
        
        Student topStudent = Student::findTopStudent(students);
        
        cout << topStudent.id << " " << topStudent.name << " " << topStudent.section << " " << topStudent.totalMarks <<             endl;
    }

    return 0;
}