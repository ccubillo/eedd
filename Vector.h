/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Vector.h
 * Author: carolina y María
 *
 * Created on 23 de septiembre de 2016, 10:28
 */

#ifndef VECTOR_H
#define VECTOR_H

using namespace std;

template <class T>

class Vector {
private:
    T *elem;
    int tam;
public:
    Vector(unsigned tam);
    Vector(const Vector<T> &orig);
    Vector(const Vector<T> &origen, unsigned inicio, unsigned num);
    Vector &operator=(Vector &v){
        delete[] elem;
        tam = v.tam;
        elem = new T[elem];
        
        for(int i = 0; i < tam; ++i){
            elem[i] = v.elem[i];
        }
        
        return *this;
    }
    T &operator[](unsigned pos){ return elem[pos];};
    unsigned getTama();
    T& leer(unsigned pos);
    void escribir(unsigned pos, const T& dato);
};

template <class T>
Vector<T>::Vector(unsigned tam){
    if(tam == 0){
        //Excepcion
    }
    elem = new T[tam = tam];
}

template <class T>
Vector<T>::Vector(const Vector<T>& orig){
    tam = orig.tam;
    if(tam > 0){
        elem = new T[tam];
        for(int i = 0; i < tam; ++i){
            elem[i] = orig[i];
        }
    }
}

template <class T>
Vector<T>::Vector(const Vector<T>& origen, unsigned inicio, unsigned num){
    if(inicio + num >= origen.tam){
        //Excepcion
    }
    tam = num;
    elem = new T[num];
    for(unsigned i = 0; i < num; ++i){
        elem[i] = origen[inicio + i];
    }
}

template <class T>
unsigned Vector<T>::getTama(){
    return tam;
}

template <class T>
T& Vector<T>::leer(unsigned pos){
    if(pos > tam){
        //Excepcion
    }
    return this->elem[pos];
}

template <class T>
void Vector<T>::escribir(unsigned pos, const T& dato){
    if(pos > tam){
        //Excepcion
    }
    this->elem[pos] = dato;
}
#endif /* VECTOR_H */

