//ejercicio de recursion de sumatoria
#include <iostream>
using namespace std;

int a[] ={1,2};
int buscar(int A, int low, int high)
{	if(low>high)
	return (-1);
	
int mid=(low+high)/2;
if(A==a[mid])
return(mid);
if(A<a[mid])
return buscar(A, low, mid-1);
else
return buscar (A,mid+1,high);
}
void mostrar(int a){
	if(a==0)
	cout<< a <<endl;
	else{
	cout<< a <<endl;
	mostrar (a-1); 
}
}
int main (void)
{
	 int A  = 0 ;
	cout<<"ingrese un arreglo:"<<endl;
	cin>>A;
	if(A>=0)
	mostrar(A);   
	
    int i;
        int n;
        cout<<"ingrese el valor a contar"<<endl;
        cin>>n;
        int arr[n];
        for (int i=0;i<n; i++);
        
        
}
