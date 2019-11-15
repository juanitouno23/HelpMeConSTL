#include <iostream>
#include <list>
using namespace std;
int main(){
    list<string> compras = {"cafe","cereal"};
    compras.push_back("pan"); // agregamos elementos al final de la lista
    compras.push_back("chocolate"); // agregamos elementos al final de la lista
    compras.push_front("yogurt"); // agregamos nuestro elemento como primer elemento de la lista

    //imprimimos el primer y el ultimo elemento de nuestra lista
    cout << compras.front()<<endl;
    cout << compras.back()<<endl;
    cout<<endl;

    //imprimimos nuestra lista  de compras
    for (string p_actual:compras){
        cout <<p_actual<<endl;
    }/*
    output:
        yogurt
        cafe
        cereal
        pan
        chocolate
    */
    compras.sort(); /* ordena nuestra lista de forma alfabetica
    compras:    
        cafe
        cereal
        chocolate
        pan
        yogurt  */
    
    //tambien podemos insertar  y reemplazar elementos dentro de nuestra lista
    auto it = compras.begin(); //creamos un iterador it que apunta a la casilla compras[0]
    advance (it,2); // el iterador ti apunta a la casilla compras[2]

    cout << "\n\n";
    //ahora reemplazamos el elemento "chocolate" por "manzanas"
    compras.insert(it,"manzanas");
    for (string p_actual:compras){
        cout <<p_actual<<endl;
    }/* output:
            cafe
            cereal
            manzanas
            chocolate
            pan
            yogurt  */


    //tambien podemos eliminar elementos de nuestra lista
    compras.erase(it); //borramos la casilla compras[2]:'manzanas' de nuestra lista
    return 0;
}
