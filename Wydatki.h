#ifndef WYDATKI_H
#define WYDATKI_H
#include <iostream>
#include <string>

class Wydatki {
private:
    std::string miesiac;
    double podstawowe = 0.0;
    double rozrywka = 0.0;
    double dom = 0.0;
    double zdrowie = 0.0;
    double transport = 0.0;
    double edukacja = 0.0;
    double pozostale = 0.0;

public:
    void wypiszWydatki() {
        std::cout << "            Wydatki w " << miesiac << std::endl;
        std::cout << "Wydatki podstawowe: " << get_podstawowe() << std::endl;
        std::cout << "Rozrywka i podróże: " << get_rozrywka() << std::endl;
        std::cout << "Dom i rachunki: " << get_dom() << std::endl;
        std::cout << "Zdrowie: " << get_zdrowie() << std::endl;
        std::cout << "Transport: " << get_transport() << std::endl;
        std::cout << "Edukacja: " << get_edukacja() << std::endl;
        std::cout << "Pozostałe wydatki: " << get_pozostale() << std::endl;
    }

    // Settery
        void set_miesiac(std::string _miesiac){
            miesiac += _miesiac;
        }
        void set_podstawowe(double _podstawowe){
            podstawowe += _podstawowe;
        }
        void set_rozrywka(double _rozrywka){
            rozrywka += _rozrywka;
        }
        void set_dom(double _dom){
            dom += _dom;
        }
        void set_zdrowie(double _zdrowie){
            zdrowie += _zdrowie;
        }
        void set_transport(double _transport){
            transport += _transport;
        }
        void set_edukacja(double _edukacja){
            edukacja += _edukacja;
        }
        void set_pozostale(double _pozostale){
            pozostale += _pozostale;
        }

    // Gettery
        std::string get_miesiac(){
            return miesiac;
        }
        double get_podstawowe(){
            return podstawowe;
        }
        double get_rozrywka(){
            return rozrywka;
        }
        double get_dom(){
            return dom;
        }
        double get_zdrowie(){
            return zdrowie;
        }
        double get_transport(){
            return transport;
        }
        double get_edukacja(){
            return edukacja;
        }
        double get_pozostale(){
            return pozostale;
        }

    double sumaWydatkow() {
        return get_podstawowe() + get_rozrywka() + get_dom() + get_zdrowie() + get_transport() + get_edukacja() + get_pozostale();
    }
};
#endif
