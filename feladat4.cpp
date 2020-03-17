#include <iostream>

using namespace std;

int main()
{
    float  ceruzaEgysegAr, dbC, fuzetEgysegAr, dbF, penz, osszErtek;

    cout << "Add meg a ceruza egysegarat: ";
    cin >> ceruzaEgysegAr;
    cout << "Add meg a ceruza darabszamat: ";
    cin >> dbC;
    cout << "Add meg a fuzet egysegarat: ";
    cin >> fuzetEgysegAr;
    cout << "Add meg a fezet darabszamat: ";
    cin >> dbF;
    cout << "Add meg a rendelkezesedre allo penzosszeget: ";
    cin >> penz;

    osszErtek = (ceruzaEgysegAr * dbC) + (fuzetEgysegAr * dbF);

    if (penz >= osszErtek)
    {
        cout << "Meg tudjuk venni, mert " << osszErtek << "lejbe kerul es van " << penz << "lejem!" << endl;
    }
    else
    {
        cout << "Nem tudjuk megvenni, mert " << osszErtek << " lejbe kerul es csak " << penz << " lejem van!" << endl;
    }

    return 0;
}
