#include <iostream>
using namespace std;
class Student {
    int roll;
    int marks[5];
public:
    void input() {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter marks of 5 subjects:\n";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }
    int totalMarks() {
        int total = 0;
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }
    void displayTotal() {
    	cout << "Roll no.:" << roll << endl;
        cout << "Total marks: " << totalMarks() << endl;
    }
};
int main() {
    Student s;
    s.input();
    s.displayTotal();
    return 0;
}

