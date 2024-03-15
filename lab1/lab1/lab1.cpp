#include "pch.h"
#include <iostream>
using namespace System;
using namespace std;

struct Persoana
{
    unsigned vs;
    char nume[20];
    char prenume[20];
};
struct Carte
{
    char autor[20];
    char editura[20];
    unsigned anul_aparitie;
    unsigned vechime;
};

class Pers
{
private:
    unsigned vs;
    char nume[20];
    char prenume[20];
public:
    Pers(unsigned vs1, char* num1, char* prenum1)
    {
        vs = vs1;
        strcpy_s(nume, 20, num1);
        strcpy_s(prenume, 20, prenum1);
    }
    Pers() {}
    unsigned arata_vs() { return this->vs; }
    char* arata_nume() { return this->nume; }
};

class Carti
{
private:
    char autor[20];
    char editura[20];
    unsigned anul_aparitie;
    unsigned vechime;
public:
    Carti(char* autor1, char* editura1, unsigned anul_aparitiei1, unsigned vechime1)
    {
        strcpy_s(autor, 20, autor1);
        strcpy_s(editura, 20, editura1);
        anul_aparitie = anul_aparitiei1;
        vechime = vechime1;
    }
    Carti() {}
    char* arata_autor() { return this->autor; }
    unsigned arata_vechime() { return this->vechime; }
};

int main()
{
    Console::WriteLine("Introduceti numarul de carti: ");
    int nr_carti;
    cin >> nr_carti;
    Carte* carte = new Carte[nr_carti];
    
    for (int i = 0; i < nr_carti; i++)
    {
        Console::WriteLine("Introduceti numele autorului {0}: ", i + 1);
        char autor[20];
        cin >> autor;
        strcpy_s(carte[i].autor, 20, autor);
        Console::WriteLine("Introduceti vechimea cartii {0}: ", i + 1);
        unsigned vechime;
        cin >> vechime;
        carte[i].vechime = vechime;
    }
    Console::WriteLine("Afisam numele autorului si vechimea cartii aferente: ");
    for (int i = 0; i < nr_carti; i++)
    {
        cout << carte[i].autor << "\t" << carte[i].vechime << endl;
    }
    Console::ReadKey();
    /*Console::WriteLine("Introduceti numarul de persoane: ");
    int nr_persoane;
    cin >> nr_persoane;
    Persoana* persoane = new Persoana[nr_persoane];
    for (int i = 0; i < nr_persoane; i++)
    {
        Console::WriteLine("Introduceti numele peroanei {0}: ", i + 1);
        char nume[20];
        cin >> nume;
        strcpy_s(persoane[i].nume, 20, nume);
        Console::WriteLine("Introduceti varsta peroanei {0}: ", i + 1);
        unsigned vs;
        cin >> vs;
        persoane[i].vs = vs;
    }
    Console::WriteLine("Afisam numele persoanelor si varstele aferente: ");
    for (int i = 0; i < nr_persoane; i++)
    {
        cout << persoane[i].nume << "\t" << persoane[i].vs << endl;
    }
    Console::ReadKey();
    */
    return 0;
}
