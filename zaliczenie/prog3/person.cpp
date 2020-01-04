#include <iostream>
#include <string>

using namespace std;

class Person
{
    private:
        string imie;
        string nazwisko;
    
    public:

    Person(Person &p)
    {
        imie = p.imie;
        nazwisko = p.nazwisko;
    }

    Person(string i, string n)
    {
        imie = i;
        nazwisko = n;
    }

    Person& operator=(Person& r)
    {
        imie = r.imie;
        nazwisko = r.nazwisko;
        return *this;
    }

    void print()
    {
        cout << imie << " " << nazwisko << endl;
    }
};

int main()
{
    Person osoba = {"Jan", "Kowalski"};
    Person osoba2 = osoba;
    Person osoba3("Ala", "Makota");
    osoba3 = osoba2;
    osoba.print();
    osoba2.print();
    osoba3.print();
}