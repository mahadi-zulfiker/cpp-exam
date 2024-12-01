#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int cls;
    char section;
    int id;
    int math_marks;
    int eng_marks;

    Student(string nm, int cl, char sec, int i, int math, int eng)
        : name(nm), cls(cl), section(sec), id(i), math_marks(math), eng_marks(eng) {}

    int total_marks() const
    {
        return math_marks + eng_marks;
    }

    void print() const
    {
        cout << name << " " << cls << " " << section << " " << id << " "
             << math_marks << " " << eng_marks << endl;
    }
};

int main()
{
    int N;
    cin >> N;
    vector<Student> students;

    for (int i = 0; i < N; i++)
    {
        string nm;
        int cls, id, math_marks, eng_marks;
        char section;
        cin >> nm >> cls >> section >> id >> math_marks >> eng_marks;
        students.emplace_back(nm, cls, section, id, math_marks, eng_marks);
    }

    sort(students.begin(), students.end(), [](const Student &a, const Student &b)
         {
             if (a.total_marks() != b.total_marks())
             {
                 return a.total_marks() > b.total_marks();
             }
             return a.id < b.id; });

    for (const auto &student : students)
    {
        student.print();
    }

    return 0;
}
