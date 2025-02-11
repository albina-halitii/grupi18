#include <iostream>
using namespace std;

#define NUMRI_I_STUDENTEVE 5

enum Statusi {
    I_RREGULLT,
    ME_KORRESPONDENCE
};

struct Studenti {
    int id;
    string emri;
    string mbiemri;
    Statusi statusi;

};


void shtoStudent() {
    Studenti student;
    cout << "Vendos ID e studentit: ";
    cin >> student.id;
}

int main() {
    return 0;
}
