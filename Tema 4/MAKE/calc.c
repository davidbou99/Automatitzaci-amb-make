// Declaramos las funciones

int suma(int a, int b){
    return a + b;
}

int resta(int a, int b){
    return a - b;
}

int multi(int a, int b){
    return a * b;
}

int divi(int a, int b){
    return a / b;
}

int mayor(int a, int b){
    int mayor;

    if (a > b){
        mayor = a;
    } else {
        mayor = b;
    }

    return mayor;
}