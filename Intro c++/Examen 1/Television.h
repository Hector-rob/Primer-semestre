#include <iostream>
#include<string>
class Television {
public:
    Television();
    Television(std::string mar, int pul);
    void setMarca(std::string mar);
    std::string getMarca();
    void setPulgadas(int pul);
    int getPulgadas();
private:
    std::string marca;
    int pulgadas;
};

Television::Television() {
    marca = "-";
    pulgadas = 0;
}

Television::Television(std::string mar, int pul) {
    marca = mar;
    pulgadas = pul;
}
 
void Television::setMarca(std::string mar) {
    marca = mar;
}

std::string Television::getMarca() {
    return marca;
}

void Television::setPulgadas(int pul) {
    pulgadas = pul;
}

int Television::getPulgadas() {
    return pulgadas;
}
