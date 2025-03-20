#ifndef LISTA_H
#define LISTA_H

#include "wzkaznik_inteligentny.h"
#include <iostream>
#include <stdexcept>

template <typename T>
class ListNode {
public:
    T data;
    SmartPointer<ListNode<T>> next;

    ListNode(const T& value) : data(value), next(nullptr) {}
};

template <typename T>
class LinkedList {
private:
    SmartPointer<ListNode<T>> head;
    int length = 0;

public:
    LinkedList() : head(nullptr) {}

    void append(const T& value) {
        SmartPointer<ListNode<T>> newNode(new ListNode<T>(value));

        if(head.isNull()) {
            head = std::move(newNode);
        } else {
            ListNode<T>* current = head.operator->();
            while (current->next.operator->()) {
                current = current->next.operator->();
            }
            current->next = std::move(newNode);
        }
        ++length;
    }

    void display() const {
        ListNode<T>* current = head.operator->();
        int index = 0;
        while (current) {
            std::cout << "Element " << index + 1 << ": " << current->data << " -> " << std::endl;
            current = current->next.operator->();
            index++;
        }
        std::cout << "Koniec listy" << std::endl;
    }

    T& get(int index) const {
        ListNode<T>* current = head.operator->();
        int currentIndex = 0;

        while (current) {
            if (currentIndex == index) {
                return current->data;
            }
            current = current->next.operator->();
            currentIndex++;
        }

        throw std::out_of_range("Index out of range");
    }

    int getLength() const{
        return length;
    }

    class Iterator {
    private:
        ListNode<T>* current;

    public:
        Iterator(ListNode<T>* startNode) : current(startNode) {}

        bool operator!=(const Iterator& other) const {
            return current != other.current;
        }

        Iterator& operator++() {
            if (current) {
                current = current->next.operator->();
            }
            return *this;
        }

        T& operator*() const {
            return current->data;
        }
    };

    Iterator begin() const {
        return Iterator(head.operator->());
    }

    Iterator end() const {
        return Iterator(nullptr);
    }
};

#endif
