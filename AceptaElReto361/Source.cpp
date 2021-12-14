#include <iostream>

using namespace std;

void vueltaAtras(int res, int val[], int sol, int k, bool &exito);
bool esSolucion(int res, int sol);

int main(){
    int n;
    bool exito;
    while(cin>> n){
        int val[4];
        int sol;
        cin >> sol;
        for(int j = 0; j < 4; j++){
            cin>> val[j];
        }
        exito = false;
        vueltaAtras(n, val, sol,0, exito);
    } 
     return 0;
}

void vueltaAtras(int res, int val[], int sol, int k, bool &exito){
    // 0 = +
    // 1 = - 
    // 2 = *
    // 3 = /

    bool esValido = true;
    int i = 0;
    int aux0 = sol;
    while(i < 4 && !exito){
        if(i == 0){
            sol = sol + val[k];
        }
        else if(i == 1){
            sol = sol - val[k];
        }
        else if(i == 2){
            sol = sol * val[k];
        }
        else{
           
           if(val[k] != 0){
                if(sol % val[k] == 0 ){
                   sol = sol / val[k];
                }
                else{
                    esValido = false;
                } 
            }
            else{
                esValido = false;
            }
        }
        //cout << "k: " <<k <<endl;
        //cout << "op: " << i <<endl;
        //cout << "sol: " <<sol << " " <<endl;
        if(esValido){
            if(k == 3){ 
                 if(esSolucion(res, sol)){
                     exito = true;
                     cout << "SI" <<endl;
                 }
            }
            else{            
                int kAux = k+ 1;
                vueltaAtras(res, val, sol, kAux,exito );
            }          
        }   
        esValido = true; 
        if(i == 0){
            sol = sol - val[k];
        }
        else if(i == 1){
            sol = sol + val[k];
        }
        else if(i == 2  ){      
            sol = aux0;
        }
        else if(esValido){      
            sol = sol * val[k];
        }
        i++;
    }
    if(!exito && k == 0){
        cout << "NO" <<endl;
    }
}

bool esSolucion(int res,int sol){
    if( res == sol){
        return true;
    }
    return false;
}
