#ifndef WZKAZNIK_INTELIGENTNY_H
#define WZKAZNIK_INTELIGENTNY_H

#include <iostream>

template <typename T>
class SmartPointer {
private:
    T* ptr;

public:
    // Konstruktor  
    explicit SmartPointer(T* p) : ptr(p) {}

    // Destruktor
    ~SmartPointer() {
        delete ptr;
    }

    // Operator dereferencji
    T& operator*() const {
        return *ptr;
    }

    // Operator ->
    T* operator->() const {
        return ptr;
    }
    // Metoda sprawdzająca, czy wskaźnik jest pusty
    bool isNull() const { return ptr == nullptr;
    }

    // Zakaz kopiowania
    SmartPointer(const SmartPointer&) = delete;
    SmartPointer& operator=(const SmartPointer&) = delete;

    // Przenoszenie
    SmartPointer(SmartPointer&& other) noexcept : ptr(other.ptr) {
        other.ptr = nullptr;
    }

    SmartPointer& operator=(SmartPointer&& other) noexcept {
        if (this != &other) {
            delete ptr;
            ptr = other.ptr;
            other.ptr = nullptr;
        }
        return *this;
    }
};



#endif
