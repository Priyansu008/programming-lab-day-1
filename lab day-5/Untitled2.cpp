#include <iostream>
using namespace std;
class Book {
private:
    float length;
    float breadth;
    float height;
public:
    void getData() {
        cout << "Enter length of the book: ";
        cin >> length;
        cout << "Enter breadth of the book: ";
        cin >> breadth;
        cout << "Enter height of the book: ";
        cin >> height;
    }
    float calculateVolume() {
        return length * breadth * height;
    }
    void displayVolume() {
        float volume = calculateVolume();
        cout << "Volume of the book: " << volume << endl;
    }
};
int main() {
    Book myBook;
    myBook.getData();
    myBook.displayVolume();

    return 0;
}

