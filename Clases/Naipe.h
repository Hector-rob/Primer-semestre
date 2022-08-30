// Completa la clase Naipe
// La clase Naipe representa un Naipe de una baraja inglesa que tiene valor y palo por ejemplo As de corazones.
#ifndef NAIPE_H
#define NAIPE_H
#include <iostream>
#include <string>

class Naipe{
    public:
        // Constructor por default
        Naipe();
        // Constructor con parámetros, recibe dos strings
        Naipe(std::string, std::string);
        // Getter del atributo valor
        std::string getValor() const;
        // Setter del atributo valor
        void setValor(std::string);
        // Getter del atributo figura
        std::string getFigura() const;
        // Setter del atributo figura
        void setFigura(std::string);
        // Método de tipo void llamado muestra que despliega el valor y figura de la carta
        void muestra() const;

    private:
        std::string valor; //"as", "2", "3" etc;
        std::string figura; //" de diamantes", " de corazones", etc
};

// Escribe el constructor por default, genera los naipes a valor AS y a figura " DE CORAZONES"
Naipe::Naipe(){
    valor = "AS";
    figura = "DE CORAZONES";
}
// Escribe el constructor con parámetros, recibe los valores que se deben asignar a valor y figura.
Naipe::Naipe(std::string _valor, std::string _figura) {
    valor = _valor;
    figura = _figura;
}
// Realiza los getters y setters de los atributos de la clase
std::string Naipe::getValor() const{
    return valor;
}

std::string Naipe::getFigura() const{
    return figura;
}

void Naipe::setValor(std::string _valor){
    valor = _valor;
}

void Naipe::setFigura(std::string _figura){
    figura = _figura;
}

// Método muestra que despliega a pantalla el valor y la figura, no lo modifiques.
void Naipe::muestra() const{
    std::cout << valor << figura << std::endl;
}

#endif //NAIPE_H