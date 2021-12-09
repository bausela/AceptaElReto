#include <iostream>
using namespace std;

int resuelve(int n);
int vueltaAtras(int k,int suma, int desconocidos,int sol[][2],char letra);
bool esSolucion(int suma,int sol[][2], int desconocidos,char letra);

int main(){
    int n;

    cin >> n;

    while(n > 0 ){

        cout << resuelve(n) << endl;
        n--;
    }

    return 0;
}

int resuelve(int n){
    
    int suma = 0;
    int desconocidos = 0;
    char aux;
    int div = 10000000;

    //array con la solucion actual que tendra el tamañao maximo de interrogaciones y la posicion de valor
    int sol[4][2];

    for(int i = 0; i < 8; i++  ){
        cin >> aux;
        if(aux == '?'){
            sol[desconocidos][2] = div;
            desconocidos++;
            
        }
        else{
            suma = suma +((aux-'0')*div);
        }
        div = div/10;
    }
    //letra del dni
    char letra;
    cin >> letra;


    return vueltaAtras(0,suma, desconocidos,sol, letra);
}
int vueltaAtras(int k,int suma, int desconocidos,int sol[][2], char letra){

    //variable donde guardaremos el numero de soluciones encontradas
    int numSol = 0;
    //todas las posibilidades que tendremos (numeros del 0 al 9)
    for(int i = 0; i <= 9; i++){
        //introducimos el numero en la psoible solicion (recordemos que sol es la solucion actual)
        sol[k][1] = i;
        //comprobamos que la solucion tenga los 4 numeros
        if(k == desconocidos - 1){
            //comprobamos que esta solucion sea valida
            if(esSolucion(suma,sol, desconocidos, letra)){
                //es valida y por tanto sumamos una al numero de soluciones
                numSol++;
                
            }
        }
        //si no tiene los 4 valores pasamos a la siguiente fase;
        else{

            
            //sumamos las soluciones encontradas
            numSol = numSol + vueltaAtras(k+1,suma, desconocidos,sol, letra);
        }
    }


    //se devuelve el numero de soluciones que hemos encontrado
    return numSol;
}

//comprobamos que la solucion sea valida
bool esSolucion(int suma,int sol[][2], int desconocidos,char letra){

    for(int i = 0; i < desconocidos; i++){
        suma = suma + sol[i][1]*sol[i][2];
    }
    if(suma%23 == 0 && letra == 'T'){
        return true;

    }
    else if(suma%23 == 1 && letra == 'R'){
        return true;

    }
        else if(suma%23 == 2 && letra == 'W'){
        return true;

    }
        else if(suma%23 == 3 && letra == 'A'){
        return true;

    }
        else if(suma%23 == 4 && letra == 'G'){
        return true;

    }
        else if(suma%23 == 5 && letra == 'M'){
        return true;

    }
        else if(suma%23 == 6 && letra == 'Y'){
        return true;

    }
        else if(suma%23 == 7 && letra == 'F'){
        return true;

    }
        else if(suma%23 == 8 && letra == 'P'){
        return true;

    }
        else if(suma%23 == 9 && letra == 'D'){
        return true;

    }
        else if(suma%23 == 10 && letra == 'X'){
        return true;

    }
        else if(suma%23 ==11 && letra == 'B'){
        return true;

    }
        else if(suma%23 == 12 && letra == 'N'){
        return true;

    }
        else if(suma%23 == 13&& letra == 'J'){
        return true;

    }

        else if(suma%23 == 14 && letra == 'Z'){
        return true;

    }    else if(suma%23 == 15 && letra == 'S'){
        return true;

    }
        else if(suma%23 == 16 && letra == 'Q'){
        return true;

    }
        else if(suma%23 == 17 && letra == 'V'){
        return true;

    }
        else if(suma%23 == 18 && letra == 'H'){
        return true;

    }
        else if(suma%23 == 19 && letra == 'L'){
        return true;

    }
        else if(suma%23 == 20 && letra == 'C'){
        return true;

    }
        else if(suma%23 == 21 && letra == 'K'){
        return true;

    }
        else if(suma%23 == 22 && letra == 'E'){
        return true;

    }
    return false;
}
