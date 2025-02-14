struct Grupi
{
    Studenti s[NUMRI_I_STUDENTEVE];

    void shfaqStudent()
    {
        for (int i = 0; i < NUMRI_I_STUDENTEVE; i++)
        {
            if (s[i].id != 0) // Only show non-empty students
                s[i].shfaqTeDhenat();
        }
    }

    void kerkoStudentin(int nr)
    {
        bool st = false;
        for (int i = 0; i < NUMRI_I_STUDENTEVE; i++)
        {
            if (s[i].id == nr)
            {
                cout << "Duke kerkuar studentin me id: '" << s[i].id << "'..." << endl;
                cout << "Studenti me id " << i + 1 << " eshte pjese e grupit!" << endl;
                s[i].shfaqTeDhenat();
                st = true;
                break;
            }
        }
        if (!st)
        {
            cout << "Studenti me kete id nuk eshte pjese e grupit" << endl;
        }
    }
