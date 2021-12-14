#include <iostream>

using namespace std;

void vueltaAtras(int choco, int vai,int numChoco, int numVai, int k, int sol[], int total);
bool esSolucion(int total, int k);
void resuelve(int choco, int vai);
bool esValido(int choco, int vai, int numChoco, int numVai);

int main(){
    int n;
    int choco, vai;
    cin >> n;
    while(n > 0){
       
        cin >> choco >> vai;
        resuelve(choco,vai);
        cout << endl;
        n--;
    }
    return 0;
}

bool esSolucion(int total, int k){
    if(total == k +1){

        return true;

    }
    return false;
}

bool esValido(int choco, int vai, int numChoco, int numVai){

    if(numChoco > choco || numVai > vai){

        return false;
    }
    
    return true;
}

void vueltaAtras(int choco, int vai,int numChoco, int numVai, int k, int sol[], int total){
    for(int i = 0; i < 2; i++){
        sol[k] = i;
        if(i == 0){
            numChoco++;
        }
        else{
            numVai++;
        }
        //no nos hemos pasado con el numero de bolas de cada sabor
        if(esValido(choco, vai, numChoco, numVai)){
            //tiene el tamaño indicado
            if(esSolucion(total, k)){
                for(int j = 0; j <= k; j++){
                    if(sol[j] == 0){
                        cout << "C";
                    }
                    else{
                        cout << "V";
                    }
                    
                }
                bool ultimo = false;
                    for(int t = 0; t < vai; t++){
                        if(sol[t] != 1){

                            ultimo = true;
                        }

                    }
                    if(ultimo){
                        cout << " ";
                    }
                         
            }
            else{
                vueltaAtras(choco, vai, numChoco,numVai, k+1, sol, total );
            }
        }
        if(i == 0){
            numChoco--;
        }
        else{
            numVai--;
        }

    } 
           
}


void resuelve(int choco, int vai){
    int total = choco + vai;
    int n= 1;
    //solucion actual
    int sol[total];
    vueltaAtras(choco, vai, 0, 0, 0, sol, total);


}