#include <iostream>

int main () {
    int edad;
    
    // Solicitar el ingreso de un valor (edad)
    
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;
    
    // Determinar si es mayor de edad o menor de edad 
    
    if (edad>=18) {
        
        // Mostrar el resultado en pantalla
        
        std::cout<< "Es mayor de edad." << std::endl;
        
    }else {
            
        // Mostrar el resultado en pantalla 
        
        std::cout<< "Es menor de edad." << std::endl;
    }
    
    return 0;
}