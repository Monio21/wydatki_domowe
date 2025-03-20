#ifndef OPERACJE_H
#define OPERACJE_H
#include <iostream>
#include <string>
#include "Wydatki.h"
#include "lista.h"

class Operacje{
public:
    static double Oblicz_roczna_sume(LinkedList<Wydatki>& lista){
        double suma = 0;
        for (int i = 0; i < lista.getLength(); ++i){
            suma = suma + lista.get(i).sumaWydatkow();
        }
        std::cout << "Roczne wydatki wyniosly: " << suma << " zl" << std::endl;
        return suma;
    }
    static double Oblicz_roczne_podstawowe(LinkedList<Wydatki>& lista){
        double suma = 0;
        for (int i = 0; i < lista.getLength(); ++i){
            suma = suma + lista.get(i).get_podstawowe();
        }
        std::cout << "W tym roku wydales: " << suma << " zl na podstawowe artykuly" << std::endl;
        return suma;
    }
    static double Oblicz_roczne_rozrywka(LinkedList<Wydatki>& lista){
        double suma = 0;
        for (int i = 0; i < lista.getLength(); ++i){
            suma = suma + lista.get(i).get_rozrywka();
        }
        std::cout << "W tym roku wydales: " << suma << " zl na rozrywke i podróże" << std::endl;
        return suma;
    }
    static double Oblicz_roczne_dom(LinkedList<Wydatki>& lista){
        double suma = 0;
        for (int i = 0; i < lista.getLength(); ++i){
            suma = suma + lista.get(i).get_dom();
        }
        std::cout << "W tym roku wydales: " << suma << " zl na dom i rachunki" << std::endl;
        return suma;
    }
    static double Oblicz_roczne_zdrowie(LinkedList<Wydatki>& lista){
        double suma = 0;
        for (int i = 0; i < lista.getLength(); ++i){
            suma = suma + lista.get(i).get_zdrowie();
        }
        std::cout << "W tym roku wydales: " << suma << " zl na zdrowie" << std::endl;
        return suma;
    }
    static double Oblicz_roczne_transport(LinkedList<Wydatki>& lista){
        double suma = 0;
        for (int i = 0; i < lista.getLength(); ++i){
            suma = suma + lista.get(i).get_transport();
        }
        std::cout << "W tym roku wydales: " << suma << " zl na transport" << std::endl;
        return suma;
    }
    static double Oblicz_roczne_edukacja(LinkedList<Wydatki>& lista){
        double suma = 0;
        for (int i = 0; i < lista.getLength(); ++i){
            suma = suma + lista.get(i).get_edukacja();
        }
        std::cout << "W tym roku wydales: " << suma << " zl na edukacje" << std::endl;
        return suma;
    }
    static double Oblicz_roczne_pozostale(LinkedList<Wydatki>& lista){
        double suma = 0;
        for (int i = 0; i < lista.getLength(); ++i){
            suma = suma + lista.get(i).get_pozostale();
        }
        std::cout << "W tym roku wydales: " << suma << " zl na pozostale wydatki" << std::endl;
        return suma;
    }
    static double Oblicz_kwartal_I(LinkedList<Wydatki>& lista){
        double suma = 0;
        double suma_pods = 0;
        double suma_roz = 0;
        double suma_dom = 0;
        double suma_zdr = 0;
        double suma_tra = 0;
        double suma_edu = 0;
        double suma_poz = 0;
        for (int i = 0; i <= 3; ++i){
            suma = suma + lista.get(i).sumaWydatkow();
            suma_pods = suma_pods + lista.get(i).get_podstawowe();
            suma_roz = suma_roz + lista.get(i).get_rozrywka();
            suma_dom = suma_dom + lista.get(i).get_dom();
            suma_zdr = suma_zdr + lista.get(i).get_zdrowie();
            suma_tra = suma_tra + lista.get(i).get_transport();
            suma_edu = suma_edu + lista.get(i).get_edukacja();
            suma_poz = suma_poz + lista.get(i).get_pozostale();
        }
        std::cout << "W I kwartale tego roku wydales: " << suma << " zl" << std::endl << "w tym: " << std::endl <<
        suma_pods << " zl na artykuly podstawowe, " << suma_roz << " zl na rozrywke i podroze, " << suma_dom << 
        " zl na dom i rachunki, " << suma_zdr << " zl na zdrowie, " << suma_tra << " zl na transport, " <<
        suma_edu << " zl na edukacje, " << suma_poz << " zl na pozostale wydatki" << std::endl;
        return suma;
    }
    static double Oblicz_kwartal_II(LinkedList<Wydatki>& lista){
        double suma = 0;
        double suma_pods = 0;
        double suma_roz = 0;
        double suma_dom = 0;
        double suma_zdr = 0;
        double suma_tra = 0;
        double suma_edu = 0;
        double suma_poz = 0;
        for (int i = 4; i <= 6; ++i){
            suma = suma + lista.get(i).sumaWydatkow();
            suma_pods = suma_pods + lista.get(i).get_podstawowe();
            suma_roz = suma_roz + lista.get(i).get_rozrywka();
            suma_dom = suma_dom + lista.get(i).get_dom();
            suma_zdr = suma_zdr + lista.get(i).get_zdrowie();
            suma_tra = suma_tra + lista.get(i).get_transport();
            suma_edu = suma_edu + lista.get(i).get_edukacja();
            suma_poz = suma_poz + lista.get(i).get_pozostale();
        }
        std::cout << "W II kwartale tego roku wydales: " << suma << " zl" << std::endl << "w tym: " << std::endl <<
        suma_pods << " zl na artykuly podstawowe, " << suma_roz << " zl na rozrywke i podroze, " << suma_dom << 
        " zl na dom i rachunki, " << suma_zdr << " zl na zdrowie, " << suma_tra << " zl na transport, " <<
        suma_edu << " zl na edukacje, " << suma_poz << " zl na pozostale wydatki" << std::endl;
        return suma;
    }
    static double Oblicz_kwartal_III(LinkedList<Wydatki>& lista){
        double suma = 0;
        double suma_pods = 0;
        double suma_roz = 0;
        double suma_dom = 0;
        double suma_zdr = 0;
        double suma_tra = 0;
        double suma_edu = 0;
        double suma_poz = 0;
        for (int i = 7; i <= 9; ++i){
            suma = suma + lista.get(i).sumaWydatkow();
            suma_pods = suma_pods + lista.get(i).get_podstawowe();
            suma_roz = suma_roz + lista.get(i).get_rozrywka();
            suma_dom = suma_dom + lista.get(i).get_dom();
            suma_zdr = suma_zdr + lista.get(i).get_zdrowie();
            suma_tra = suma_tra + lista.get(i).get_transport();
            suma_edu = suma_edu + lista.get(i).get_edukacja();
            suma_poz = suma_poz + lista.get(i).get_pozostale();
        }
        std::cout << "W III kwartale tego roku wydales: " << suma << " zl" << std::endl << "w tym: " << std::endl <<
        suma_pods << " zl na artykuly podstawowe, " << suma_roz << " zl na rozrywke i podroze, " << suma_dom << 
        " zl na dom i rachunki, " << suma_zdr << " zl na zdrowie, " << suma_tra << " zl na transport, " <<
        suma_edu << " zl na edukacje, " << suma_poz << " zl na pozostale wydatki" << std::endl;
        return suma;
    }
    static double Oblicz_kwartal_IV(LinkedList<Wydatki>& lista){
        double suma = 0;
        double suma_pods = 0;
        double suma_roz = 0;
        double suma_dom = 0;
        double suma_zdr = 0;
        double suma_tra = 0;
        double suma_edu = 0;
        double suma_poz = 0;
        for (int i = 10; i < 12; ++i){
            suma = suma + lista.get(i).sumaWydatkow();
            suma_pods = suma_pods + lista.get(i).get_podstawowe();
            suma_roz = suma_roz + lista.get(i).get_rozrywka();
            suma_dom = suma_dom + lista.get(i).get_dom();
            suma_zdr = suma_zdr + lista.get(i).get_zdrowie();
            suma_tra = suma_tra + lista.get(i).get_transport();
            suma_edu = suma_edu + lista.get(i).get_edukacja();
            suma_poz = suma_poz + lista.get(i).get_pozostale();
        }
        std::cout << "W IV kwartale tego roku wydales: " << suma << " zl" << std::endl << "w tym: " << std::endl <<
        suma_pods << " zl na artykuly podstawowe, " << suma_roz << " zl na rozrywke i podroze, " << suma_dom << 
        " zl na dom i rachunki, " << suma_zdr << " zl na zdrowie, " << suma_tra << " zl na transport, " <<
        suma_edu << " zl na edukacje, " << suma_poz << " zl na pozostale wydatki" << std::endl;
        return suma;
    }
    static Wydatki Nowy_wydatek(Wydatki& Wydatki){
        double kwota;
        int kategoria;
        std::cout<< "Podaj kwote: " << std::endl;
        std::cin >> kwota;
        std::cout << "Do jakiej kategorii chcesz przypisać wydatek: " << std::endl << "1) Wydatki podstawowe " << std::endl
        << "2) Rozrywka i podróże " << std::endl << "3) Dom i rachunki " << std::endl << "4) Zdrowie " << std::endl <<
        "5) Transport " << std::endl << "6) Edukacja " << std::endl << "7) Pozostale wydatki " << std::endl <<
        "Wpisz numer interesujacej cie kategorii: ";
        std::cin >> kategoria;
        if(kategoria == 1){
            Wydatki.set_podstawowe(kwota);
        }
        else if(kategoria == 2){
            Wydatki.set_rozrywka(kwota);
        }
        else if(kategoria == 3){
            Wydatki.set_dom(kwota);
        }
        else if(kategoria == 4){
            Wydatki.set_zdrowie(kwota);
        }
        else if(kategoria == 5){
            Wydatki.set_transport(kwota);
        }
        else if(kategoria == 6){
            Wydatki.set_edukacja(kwota);
        }
        else if(kategoria == 7){
            Wydatki.set_pozostale(kwota);
        }
        else{
            std::cout << "Bledny numer" << std::endl;
        }
        return Wydatki;
    }
};
#endif