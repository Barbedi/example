﻿// example.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;


    class lista {
        int data;
        lista* prev;
        lista* next;
        
       
        
    public:
        unsigned c; // zerujemy licznik
        lista(int aa) :data(aa), prev(nullptr), next(nullptr){}//konstr
        ~lista(void){}//destr

        void dodajStart(int aa);
        void dodajEnd(int aa);
        void dodajWskaIndex();
        void usunStart();
        void usunEnd();
        void usunWskaIndex();
        void wyswietl();
        void wyswietlOdwrotnie();
        void wyswitlNastepny();
        void wyswitlPoprzedni();
        void czycsListe();

        
    };

    void lista::dodajStart(int aa)
    {
       
    }
    void lista::dodajEnd(int aa)
    {
        lista* newNode = new lista(aa);
        if (!next) {
            next = newNode;
            newNode->prev = this;
        }
        else {
            lista* current = this;
            while (current->next) {
                current = current->next;
            }
            current->next = newNode;
            newNode->prev = current;
        }
    }
    
        void lista::wyswietl()
    {
            lista* current = this;
            while (current) {
                cout << current->data << "";
                current = current->next;
            }
    }




// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln

    int main() {
        lista list1(0);
       
        list1.dodajStart(12);
        list1.dodajEnd(3);
        
     
        
        list1.wyswietl();
      
    }

