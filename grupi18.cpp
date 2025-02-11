#include <iostream>
using namespace std;

#define NUMRI_I_STUDENTEVE 4

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

int main() {
    return 0;
}
