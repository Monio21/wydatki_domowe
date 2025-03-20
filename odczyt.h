#ifndef ODCZYT_H
#define ODCZYT_H

#include "lista.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Wydatki.h"

class FileLoader {
public:
    // Wczytuje dane z pliku i dodaje je do LinkedList
    void loadFile(const std::string& filePath, LinkedList<Wydatki>& list) {
        std::ifstream file(filePath);

        if (file.is_open()) {
            std::string line;
            while (getline(file, line)) {
                std::stringstream ss(line);
                Wydatki wydatki;
                std::string dane;
                getline(ss,dane,',');
                wydatki.set_miesiac(dane);
                getline(ss,dane,',');
                wydatki.set_podstawowe(stoi(dane));
                getline(ss,dane,',');
                wydatki.set_rozrywka(stoi(dane));
                getline(ss,dane,',');
                wydatki.set_dom(stoi(dane));
                getline(ss,dane,',');
                wydatki.set_zdrowie(stoi(dane));
                getline(ss,dane,',');
                wydatki.set_transport(stoi(dane));
                getline(ss,dane,',');
                wydatki.set_edukacja(stoi(dane));
                getline(ss,dane,',');
                wydatki.set_pozostale(stoi(dane));
                list.append(wydatki);
            }
            file.close();
        } else {
            std::cerr << "Nie można otworzyć pliku: " << filePath << std::endl;
        }
    }
};

#endif
