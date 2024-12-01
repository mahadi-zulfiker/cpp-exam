#include<bits/stdc++.h>
using namespace std;

class Student {
    public:
    string name;
    int cls;
    char section;
    int id;

    Student(string nm, int cl, char sec, int i) : name(nm), cls(cl), section(sec), id(i){}

    void print() const {
        cout << name << " " << cls << " " << section << " " << id << endl;
    }
};

int main(){
    int N;
    cin >> N;
    vector<Student> students;

    for(int i = 0; i < N; i++){
        string nm;
        int cls, id;
        char section;
        cin >> nm >> cls >> section >> id;
        students.emplace_back(nm, cls, section, id);
    }

    for(int i = 0; i < N / 2; i++){
        swap(students[i].section, students[N - i - 1].section);
    }

    for(const auto& student : students){
        student.print();
    }
    return 0;
}