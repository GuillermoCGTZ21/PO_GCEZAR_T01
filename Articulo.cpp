//
// Created by el_me on 15/01/2018.
//

#include "Articulo.h"
#include <iostream>

Articulo::Articulo(){

}
Articulo::Articulo(int sku, double precio, std::string descripcion){
    this->sku =sku;
    this->precio = precio;
    this->descripcion = descripcion;
    this->existencia = 0;
    this->costo = 0.00;
}
    void Articulo::compra(int numeroart, double costo){
    this->existencia = existencia + numeroart;
    this->costo = costo * numeroart;
    std::cout<<"El costo total sería de: ";
    std::cout<< this->costo;
}
bool Articulo::venta(int numeroventa){
    if (this->existencia < numeroventa ) {
        std::cout<<"\nInventario agotado";
        return false;
    }else if(this->existencia >= numeroventa)
    {
        existencia = existencia - numeroventa;
        precio = precio*numeroventa;
        std::cout<<"\nTu existencia de artículos es: ";
        std::cout<<existencia;
        std::cout<<"\nEl precio total es de: ";
        std::cout<<precio;
        return true;
    }
}
int Articulo::verificarExistencia()
    {
    return existencia;
}

void Articulo::actualizaPrecio(double precio){
    this->precio = precio;


}

