#include <iostream>
/*
 * ESto es un código de prueba
 *Esto es otro comentario
 *
 */
//Cambio hecho por x
void redArr(int*& arr, int& capacidad){

    int nuevaCap = capacidad * 2;
    int* nuevoArr = new int[nuevaCap];
    std::copy(arr,arr+capacidad,nuevoArr);

    delete[] arr;
    arr = nuevoArr;

    capacidad = nuevaCap;
}


int main()
{
    int capacidad = 2;
    int* arr = new int[capacidad];
    int cantElementos=0;
    int nroIngresado=0;
    char continuar;




    do{

        if(cantElementos == capacidad){
            redArr(arr,capacidad);
            /*int nuevaCap = capacidad * 2;
            int* nuevoArr = new int[nuevaCap];
            std::copy(arr,arr+capacidad,nuevoArr);

            delete[] arr;
            arr = nuevoArr;

            capacidad = nuevaCap;*/
        }


        std::cout << "Ingresa un numero: ";
        std::cin >> nroIngresado;
        arr[cantElementos] = nroIngresado;
        cantElementos++;

        std::cout << "Si desea continuar digite s, si desea parar digite n :";
        std::cin >> continuar;

    }while(continuar == 's' || continuar == 'S');

    for(int i = 0; i < cantElementos; i++){
        std::cout << arr[i] << std::endl;
    }

    delete[] arr;
    return 0;

}
