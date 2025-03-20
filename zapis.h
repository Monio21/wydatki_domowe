#ifndef ZAPIS_H
#define ZAPIS_H

#include "lista.h"
#include <iostream>
#include <fstream>
#include <string>
#include "Wydatki.h"

void SavetoFile(Wydatki& biezacy, std::string filename){
    std::ofstream file(filename);
    if(file.is_open()){
        file << biezacy.get_miesiac() << "," << biezacy.get_podstawowe() << "," << biezacy.get_rozrywka() << "," << 
        biezacy.get_dom() << "," << biezacy.get_zdrowie() << "," << biezacy.get_transport() << "," << biezacy.get_edukacja() <<
        "," << biezacy.get_pozostale();
        file.close();
    }
    else{
        std::cerr << "Nie można otworzyć pliku: " << filename << std::endl;
    }
}
#endif
