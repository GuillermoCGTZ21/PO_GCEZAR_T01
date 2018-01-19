#include <iostream>
#include "Articulo.h"
int main() {
    double precio;
    double costo;
    int sku;
    std::string descripcion;
    int numeroart;
    int numeroventa;

    std::cout<<"Escribe el sku del producto: \n";
    std::cin>>sku;
    std::cout<<"Escribe la descripicion de tu producto: \n";
    std::cin>>descripcion;
    std::cout<<"¿Cuántos artículos vas a llevar? \n";
    std::cin>>numeroart;
    std::cout<<"¿Cuánto te cuesta cada artículo? \n";
    std::cin>>costo;
    std::cout<<"¿Cuántos artículos vas a vender? \n";
    std::cin>>numeroventa;
    std::cout<<"¿A cuánto piensas vender cada artículo? \n";
    std::cin>>precio;




    Articulo nuevoArticulo = *new Articulo(sku, precio, descripcion);
    nuevoArticulo.compra (numeroart, costo);
    nuevoArticulo.venta (numeroventa);
    nuevoArticulo.verificarExistencia();
    nuevoArticulo.actualizaPrecio(precio);

    return 0;
}