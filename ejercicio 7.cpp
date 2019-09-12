#include <iostream>
//ejercicio 7 labo 2

using namespace std;

int conteo (int b){
    
    int a=0;
    
    if (b==1){ 
        return 0;
        }
        else{
        a= 1+conteo  (b-1);
        cout<<a<<endl;
        return a;
        }
    
}

int desplejar(int b){
    int a=0;
    if (b==1){
        return b;
    }
    else{
        a=desplejar (b+1);
      cout<<a<<endl;
    return a;  
            }
    
}

int main(void) {
    int n, b;
    
    cout<<"Ingrese el numero"<<endl;
    cin>>n;
    
    conteo(n);
    cout<<n<<endl;
    desplejar(n);
    return 0;
}

