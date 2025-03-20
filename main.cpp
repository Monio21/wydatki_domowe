#include "Singleton.h"
#include "odczyt.h"
#include "lista.h"
#include "Wydatki.h"
#include "Operacje.h"
#include "zapis.h"
#include <limits>

int main() {
    FileLoader* fileLoader = Singleton<FileLoader>::getInstance();
    LinkedList<Wydatki> list;
    int input = 1;
    Wydatki biezacy;
    biezacy.set_miesiac("biezacy");
    fileLoader->loadFile("szablon.csv", list);
    while(input >0 && input < 14){
        std::cout << "Prosze wpisac liczbe odpowiadajaca operacji ktora chcesz wykonac:" << std::endl <<
        "1) Oblicz roczna sume wydatkow" << std::endl << "2) Oblicz roczne wydatki na artykuly podstawowe" <<
        std::endl << "3) Oblicz roczne wydatki na rozrywke i podroze" << std::endl <<
        "4) Oblicz roczne wydatki na dom i rachunki" << std::endl << "5) Oblicz roczne wydatki na zdrowie" <<
        std::endl << "6) Oblicz roczne wydatki na transport" << std::endl << "7) Oblicz roczne wydatki na edukacje" <<
        std::endl << "8) Oblicz roczne wydatki z kategorii pozostale" << std::endl << "9) Oblicz wydatki w I kwartale roku" <<
        std::endl << "10) Oblicz wydatki w II kwartale roku" << std::endl << "11) Oblicz wydatki w III kwartale roku" <<
        std::endl << "12) Oblicz wydatki w IV kwartale roku" << std::endl << "13) Dodaj wydatki do biezacego miesiaca" << std::endl <<
        "Wprowadz numer: ";
        std::cin >> input;
        std::cout << std::endl;
        if(input == 1){
            Operacje::Oblicz_roczna_sume(list);
        }
        else if(input == 2){
            Operacje::Oblicz_roczne_podstawowe(list);
        }
        else if(input == 3){
            Operacje::Oblicz_roczne_rozrywka(list);
        }
        else if(input == 4){
            Operacje::Oblicz_roczne_dom(list);
        }
        else if(input == 5){
            Operacje::Oblicz_roczne_zdrowie(list);
        }
        else if(input == 6){
            Operacje::Oblicz_roczne_transport(list);
        }
        else if(input == 7){
            Operacje::Oblicz_roczne_edukacja(list);
        }
        else if(input == 8){
            Operacje::Oblicz_roczne_pozostale(list);
        }
        else if(input == 9){
            Operacje::Oblicz_kwartal_I(list);
        }
        else if(input == 10){
        Operacje::Oblicz_kwartal_II(list);
        }
        else if(input == 11){
        Operacje::Oblicz_kwartal_III(list);
        }
        else if(input == 12){
        Operacje::Oblicz_kwartal_IV(list);
        }
        else if(input == 13){
        Operacje::Nowy_wydatek(biezacy);
        biezacy.wypiszWydatki();
        }
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.get();
    }
    SavetoFile(biezacy,"wynik.csv");
    std::cout << "Dane zapisane do pliku.";
    return 0;
}
