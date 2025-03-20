#ifndef SINGLETON_H
#define SINGLETON_H

template <typename T>
class Singleton {
private:
    static T* instance;
    Singleton() {}

public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;

    static T* getInstance() {
        if (!instance) {
            instance = new T();
        }
        return instance;
    }
};

template <typename T>
T* Singleton<T>::instance = nullptr;

#endif
