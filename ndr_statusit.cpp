void ndryshoStatusin(int id, Statusi statusRi)
    {
        for (int i = 0; i < NUMRI_I_STUDENTEVE; i++)
        {
            if (s[i].id == id)
            {
                cout << "Duke ndryshuar statusin e studentit me ID " << id << "..." << endl;
                s[i].statusi = statusRi;
                cout << "Statusi u perditesua me sukses!" << endl;
                return;
            }
        }
        cout << "Studenti me ID " << id << " nuk u gjet!" << endl;
    }
