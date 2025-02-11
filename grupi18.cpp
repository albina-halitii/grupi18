#include <iostream>
using namespace std;

#define NUMRI_I_STUDENTEVE 5

enum Statusi {
    I_RREGULLT,
    ME_KORRESPONDENCE
};

struct Studenti {
    int id = 0;
    string emri;
    string mbiemri;
    Statusi statusi;

};


void shtoStudent() {
    Studenti student;
    cout << "Vendos ID e studentit: ";
    cin >> student.id; 
    cin.ignore();

    cout << "Vendos emrin e studentit: ";
    getline(cin, student.emri);

    cout << "Vendos mbiemrin e sudentit: ";
    getline(cin, student.mbiemri);

    int status;
    cout << "Vendos statusin (0 - I rregullt, 1 - Me korrespondence): ";
    cin >> status;
    student.status = (status == 0) ? I_RREGULLT : ME_KORRESPONDENCE;

    for(int i = 0; i < NUMRI_STUDENTEVE: i++) {
        if(s[i].id == 0) {
            s[i] = student;
            cout << "Studentiu shtua me sukses!" << endl;
            return;
        }
    }
    cout << "Grupi eshte i plote, nuk mund te shtohet student i ri!" << endl;

}

int main() {
    Grupi grupi18 = {{1, "Albina", "Haliti", ME_KORRESPONDENCE}, 
                    {2, "Agnesa", "Godeni", I_RREGULLT}, 
                    {3, "Anisa", "Potera", I_RREGULLT}, 
                    {4, "Albina", "Mehmeti", ME_KORRESPONDENCE}};
                    
    cout << "Studentet e grupit:" << endl;
    grupi18.shfaqStudentin(1);

    cout << endl;
    grupi18.kerkoStudentin(1);

    cout << endl;
    grupi18.ndryshoStatusin(1, I_RREGULLT);
    grupi18.shfaqStudent();

    cout << "\nShto nje student te ri:" << endl;
    grupi18.shtoStudent();
    grupi18.shfaqStudent();
    
    return 0;
}
