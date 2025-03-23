# Program do zarządzania wydatkami gospodarstwa domowego
## Opis Projektu
Program do zarządzania wydatkami gospodarstwa domowego umożliwia, na podstawie wczytanego pliku CSV, obliczenie rocznej sumy wydatków, jak i rocznych wydatków z poszczególnej kategorii. Wyposażony jest on  także w opcję obliczeń kwartalnych oraz możliwość dodania wydatków do każdej z kategorii na obecny miesiąc.

## Funkcjonalności

- **Wczytywanie wydatków**: Wczytywanie danych o wydatkach z pliku **`szablon.csv`**.
- **Obliczanie rocznych wydatków**: Obliczanie całkowitych rocznych wydatków oraz wydatków w poszczególnych kategoriach.
- **Analiza kwartalna**: Analiza wydatków w każdym kwartale roku.
- **Dodawanie nowych wydatków**: Dodawanie nowych wydatków do bieżącego miesiąca.
- **Zapisywanie danych**: Zapisywanie zaktualizowanych danych o wydatkach do pliku **`wynik.csv`**.

## Struktura projektu

Projekt składa się z następujących plików:
- **`main.cpp`**: Główny punkt wejścia aplikacji. Obsługuje interakcję z użytkownikiem i wywołuje różne operacje.
- **`Operacje.h`**: Zawiera funkcje do obliczania rocznych i kwartalnych wydatków.
- **`odczyt.h`**: Obsługuje wczytywanie danych o wydatkach z pliku CSV.
- **`zapis.h`**: Obsługuje zapisywanie danych o wydatkach do pliku CSV.
- **`Wydatki.h`**: Definiuje klasę `Wydatki`, która reprezentuje miesięczne wydatki.
- **`lista.h`**: Implementuje listę jednokierunkową do przechowywania i zarządzania wydatkami.
- **`Singleton.h`**: Implementuje wzorzec singleton dla współdzielonych zasobów.
- **`wzkaznik_inteligentny.h`**: Implementuje inteligentny wskaźnik do zarządzania pamięcią.
- **`szablon.csv`**: Przykładowy plik CSV zawierający dane o wydatkach.
- **`wynik.csv`**: Plik wyjściowy, w którym zapisywane są zaktualizowane dane o wydatkach.

## Wymagania

- **C++11** lub nowszy
- **CMake** do budowania projektu
- Kompilator zgodny z C++ (np. **g++**, **clang**)

## Budowanie i urochomianie

Aby zbudować projekt, wykonaj następujące kroki:

1. Sklonuj repozytorium:
    ```sh
    git clone https://github.com/Monio21/wydatki_domowe.git
    cd wydatki_domowe
    ```

2. Stwórz katalog build i przejdź do niego:
    ```sh
    mkdir build
    cd build
    ```

3. Wygeneruj pliki make za pomocą CMake:
    ```sh
    cmake ..
    ```

4. Skompiluj projekt:
    ```sh
    make
    ```

5. Uruchom program:
    ```sh
    ./wydatki_domowe
    ```

## Przykład użycia

Po uruchomieniu programu wyświetla się lista dostępnych operacji.
Po otrzymaniu wyniku należy nacisnąć **Enter** aby powrócić do możliwości wyboru operacji.

## Autor

- **Maciej Jerominek** 

## Uwagi końcowe

Jeśli masz pytania lub uwagi dotyczące projektu, proszę o kontakt przez GitHub Issues lub bezpośrednio przez e-mail.
