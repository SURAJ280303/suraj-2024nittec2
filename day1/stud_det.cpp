#include <bits/stdc++.h>
using namespace std;

int main() {
    // Variables to store input
    string name;
    int age;
    float cgpa;
    char grade;
    getline(cin,name);
    cin >> age >> cgpa >> grade;

    // Outputting the values
    cout << "Name: "<<name << endl;
    cout << "Age: "<<age << endl;
    cout << "CGPA: "<<fixed << setprecision(2) <<floor(cgpa * 100) / 100;
    cout<<endl;
    cout << "Grade: "<<grade << endl;

    return 0;
}