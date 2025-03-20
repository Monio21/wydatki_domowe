# Program do zarządzania wydatkami gospodarstwa domowego
## Opis Projektu
Projekt to **System Zarządzania Budżetem** napisany w języku C++. Umożliwia użytkownikom zarządzanie i analizowanie miesięcznych oraz rocznych wydatków w różnych kategoriach.

## Funkcjonalności

- **Wczytywanie wydatków**: Wczytywanie danych o wydatkach z pliku CSV.
- **Obliczanie rocznych wydatków**: Obliczanie całkowitych rocznych wydatków oraz wydatków w poszczególnych kategoriach.
- **Analiza kwartalna**: Analiza wydatków w każdym kwartale roku.
- **Dodawanie nowych wydatków**: Dodawanie nowych wydatków do bieżącego miesiąca.
- **Zapisywanie danych**: Zapisywanie zaktualizowanych danych o wydatkach do pliku CSV.

## Struktura projektu
.vscode/ .vscode/launch.json .vscode/settings.json .vscode/tasks.json lista.h main.cpp main.exe odczyt.h Operacje.h Singleton.h szablon.csv Wydatki.h wynik.csv wzkaznik_inteligentny.h zapis.h

### Kluczowe pliki

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

## Jak zbudować i uruchomić

### Wymagania

- **Kompilator C++**: Upewnij się, że masz zainstalowany kompilator C++ (np. `g++`).
- **Visual Studio Code**: Zalecane IDE z zainstalowanym rozszerzeniem C++.

### Budowanie

1. Otwórz projekt w Visual Studio Code.
2. Użyj domyślnego zadania budowania:
   - Naciśnij `Ctrl+Shift+B` lub przejdź do `Terminal > Run Build Task`.
   - Projekt zostanie skompilowany, a plik wykonywalny zostanie wygenerowany.

### Uruchamianie

1. Uruchom program:
   - Naciśnij `F5` lub przejdź do `Run > Start Debugging`.
   - Program zostanie uruchomiony, a interakcja odbywa się w terminalu.

### Przykładowe wejście

Po uruchomieniu programu wprowadź liczbę odpowiadającą wybranej operacji:
Oblicz roczna sume wydatkow
Oblicz roczne wydatki na artykuly podstawowe ...
Dodaj wydatki do biezacego miesiaca
