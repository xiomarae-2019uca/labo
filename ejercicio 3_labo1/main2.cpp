

#include <iostream>


using namespace std;

int suma(int n){
    
if(n == 1)
    return 1;
else 
    return n+ suma(n-1);
}
   

int main(int argc, char** argv) {
    int num;
    cout<<"ingrese la cantidad"<<endl;
    cin>>num;
    cout<<"la suma es"<<suma(num);

    return 0;
}

