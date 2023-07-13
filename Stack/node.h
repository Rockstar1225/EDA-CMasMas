//
// Created by Adri C on 03/07/2023.
//

#ifndef EDA_CMASMAS_NODE_H
#define EDA_CMASMAS_NODE_H
#include <iostream>
#include <memory>

template<class T>
class node {
private:
    T elemento;
    node<T> *siguiente = nullptr;
public:
    node() = default;
    explicit node(T elem ) {elemento = elem;};
    node(T elem,node<T> &sig) {elemento = elem;siguiente = sig;};

    void free_node(node<T> &node){
        if (node.siguiente != nullptr){
            free((void *)node);
        } else {
            free_node(*siguiente);
        }
    }
    T get_elem(){return elemento;};
    void set_elem(T elem){elemento = elem;};
    void set_sig(node<T> &nodo) {siguiente = &nodo;};
    void print_elem(){std::cout << "El elemento es: " << elemento << std::endl;};
    void free_node(){if (siguiente != nullptr) {delete siguiente;}; delete this;};
};

#endif //EDA_CMASMAS_NODE_H
