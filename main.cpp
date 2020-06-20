#include <iostream>

using namespace std;

int main(){
    int total{0};
    unsigned int gradecounter{1};

    while (gradecounter <= 10) {
        cout<< "Enter the grade: ";
        int grade;
        cin >> grade;
        total = total + grade;
        gradecounter = gradecounter + 1;

    }

int average(total / 10);
cout << "Total of all grades is: " << total;

cout << "Class average is:" << average << endl;
}
