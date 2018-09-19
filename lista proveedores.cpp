#include <iostream>
using namespace std;

struct proveedor{
    char nombre[30];
    int cant_vendida;
    float precio_unitario;
    float importe;
    
};

void llenarProveedores (proveedor[], int);
proveedor buscarMasCaro (proveedor[], int);
proveedor buscarMasBarato (proveedor[], int);
void mostrarProveedor(proveedor);

int main(){
    proveedor proveedores[30],masBarato,masCaro;
    int n = 5;
    llenarProveedores(proveedores,n);
	masBarato = buscarMasBarato(proveedores,n);
	masCaro = buscarMasCaro(proveedores,n);
	cout<<"Proveedor más caro: "<<endl;
	mostrarProveedor(masCaro);
    cout << "Proveedor más barato: "<<endl;
	mostrarProveedor(masBarato);
   
   return 0;
}


void llenarProveedores (proveedor A[], int n){
	for (int i;i<n;i++){
		cout<<"Proveedor: "<<i+1<<endl;
		cout<<"Nombre ";
		cin.getline(A[i].nombre,30);
		cout<<"Cantidad vendida: ";
		cin>>A[i].cant_vendida;
		cin.ignore();
		cout<<"Precio unitario: ";
		cin>>A[i].precio_unitario;
		cin.ignore();
		A[i].importe = A[i].precio_unitario * A[i].cant_vendida;
	}
}
proveedor buscarMasCaro (proveedor A[], int n){
	proveedor masCaro = A[0];
	for(int i;i<n;i++){
		if (A[i].precio_unitario>masCaro.precio_unitario){
			masCaro = A[i];
		}
		
	}
	return masCaro;
}
proveedor buscarMasBarato (proveedor A[], int n){
	proveedor masBarato = A[0];
	for(int i;i<n;i++){
		if (A[i].precio_unitario<masBarato.precio_unitario){
			masBarato = A[i];
		}
		
	}
	return masBarato;
}
void mostrarProveedor(proveedor p){
	cout<<"          Nombre: "<<p.nombre<<endl;
	cout<<" Precio unitario: "<<p.precio_unitario<<endl;
	cout<<"Cantidad vendida: "<<p.cant_vendida<<endl;
	cout<<"         Importe: "<<p.importe<<endl;
}
