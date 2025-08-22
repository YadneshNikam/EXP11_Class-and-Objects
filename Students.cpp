#include <iostream>
using namespace std;

class student{
public:
    string name;
    string branch;
    string subject;
    string year;
    float cgpa;

};
int  main(){
    student s1;
    s1.name="Yadnesh";
    s1.branch="ECE";
    s1.subject="Data Structures";
    s1.year="2nd";
    s1.cgpa=9.5;

    cout<<"Name: "<<s1.name<<endl;
    cout<<"Branch: "<<s1.branch<<endl;
    cout<<"Subject: "<<s1.subject<<endl;
    cout<<"Year: "<<s1.year<<endl;
    cout<<"CGPA: "<<s1.cgpa<<endl;

    student s2;
    s2.name="Tanmay";
    s2.branch="ECE";
    s2.subject="DSA";
    s2.year="2nd";
    s2.cgpa=9.0;

    cout<<"Name: "<<s2.name<<endl;
    cout<<"Branch: "<<s2.branch<<endl;
    cout<<"Subject: "<<s2.subject<<endl;
    cout<<"Year: "<<s2.year<<endl;
    cout<<"CGPA: "<<s2.cgpa<<endl;

    return 0;
}