//
// Created by el_me on 15/01/2018.
//

#ifndef PO_GCEZAR_T01_ARTICULO_H
#define PO_GCEZAR_T01_ARTICULO_H

#include <iostream>

class Articulo {
protected:
    int existencia;
    double precio;
    double costo;

public:
    int sku;
    std::string descripcion;

//Métodos
    void compra (int numeroart, double costo);
    bool venta (int numeroventa);
    int verificarExistencia ();
    void actualizaPrecio(double precio);
//Constructor
    Articulo();
    Articulo(int sku, double precio, std::string descripcion);

};


#endif //PO_GCEZAR_T01_ARTICULO_H
