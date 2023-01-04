#include <iostream>

using  namespace std;

int longeurNombre(string nmb ){

    return nmb.length();
}

int main() {
    string nombre;
    int etat = 0;
    int i;


    std::cout << "entrer un nombre entre 0 et 138: " << std::endl;
    cin >> nombre;


    while (true)
    {
        switch (etat) {
            case 0:
                if (nombre[i] == '0')
                 etat = 9;
                else if (nombre[i] >= '2' && nombre[i] <= '9') {
                    etat = 6;
                    i++;
                } else if (nombre[i] == '1') {
                    etat = 1;
                    i++;
                }else
                    cout << "erreur etat 2 ";

                break;

            case 1:
                if (nombre[i] >= '4' && nombre[i] <= '9') {
                    etat = 8;
                    cout<<"nombre valid";
                    // etat d'acceptation
                } else if (nombre[i] >= '0' && nombre[i] <= '2') {
                    etat = 2;
                    i++;
                    cout<<"nombre valid";

                    //etat d'acceptation
                } else if (nombre[i] == '3') {
                    etat = 4;
                    i++;
                    cout<<"nombre valid";

                    //etat d'acceptation
                }else
                    cout << "erreur etat 1 ";

            case 2:
                if (nombre[i] <= '9' && nombre[i] >= '0') {
                    etat = 3;
                    cout<<"nombre valid";

                    //etat d'acceptation
                } else
                    cout << "erreur etat 2 ";

                break;

            case 3 :
            {
                cout << nombre;
             }

            case 5 :
                cout << nombre;
                break;

            case 6:
                if (nombre[i] >= '2' && nombre[i] <= '9') {
                    etat = 7;
                    i++;
                    cout << "nombre valid :"<< nombre;
                } else
                    cout << "erreur  6 ";
                break ;

            case 7: {
                cout << "nombre valid :"<< nombre;
                exit(7);
            }
            case 8:
                cout << "nombre valid :"<< nombre;
                exit(8);

            case 9:
                cout << "nombre valid :"<< nombre;
                exit(9);

        }
    }
}