#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<string> v = {"jose","maria"}; // iniciamos nuestro vector con 2 valores iniciales
    v.push_back("julio"); // agregamos a juan al vector
    v.push_back("jeremy"); //agregamos a jeremy al vector;
    //hasta ahora el vector tendria los valores: [jose, maria, julio, jeremy]
    v.erase(v.begin()+2); //eliminamos a  julio que se encuentra en el casillero 3:vector[2]
    // para el ciclo for especificaremos el tipo de dato y el tipo de contenedor que usara nuestro iterador
    cout << v.size() << endl // con el metodo .size() podemos obtener la cantidad de elementos que tenemos en nuestro vector
    for(vector<string>::iterator ite=v.begin();ite!=v.end();ite++){
        cout << *ite << endl; //imprimimos el valor de las casillas
    }/*
        output:
            jose
            maria
            jeremy
    */
    v.resize(2); // usamos el metodo resize para mantener nuestros elementos hasta el vector[2]
    for(vector<string>::iterator ite=v.begin();ite!=v.end();ite++){
        cout << *ite << endl; //imprimimos el valor de las casillas
    }/*
        output:
            jose
            maria
    */
    return 0;
}
