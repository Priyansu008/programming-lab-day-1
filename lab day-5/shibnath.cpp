#include <iostream>
using namespace std;

class Pattern {
    int rows;

public:
    void setRows(int r) {
        rows = r;
    }

    friend void displayTriangle(Pattern p);
};

void displayTriangle(Pattern p) {
    for (int i = 1; i <= p.rows; i++) {
        for (int j = 1; j <= i; j++)
            cout << "* ";
        cout << endl;
    }
}

int main() {
    Pattern p;
    p.setRows(5);
    displayTriangle(p);
    return 0;
}
