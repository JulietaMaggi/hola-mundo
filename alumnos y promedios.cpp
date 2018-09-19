#include<iostream>
using namespace std;

struct alumno{
	char nombre[30];
	float nota1;
	float nota2;
	float nota3;
	float promedio;
}

void llenarAlumnos(alumno[], int);
void mostrarAlumnos (alumno[], int);
void ordenarPromedio (alumno[],int);

int main(){
	alumno alumnos[30];
	int n = 4;
	llenarAlumnos(alumnos,n);
	mostrarAlumnos(alumnos,n);
	cout<<"Orden de mérito"<<endl;
	ordenarPromedio(alumnos,n);
	
	
}


void llenarAlumnos(alumno A[], int n){
	for (int i; i<n; i++){
	cout<<"Alumno "<<i+1<<": "<<endl;
	cout<<"Nombre: ";
	cin.getline(A[i].nombre,30);
	cout<<"Primer nota:";
	cin>>A[i].nota1);
	cin.ignore();
	cout<<"Segunda nota:";
	cin>>A[i].nota2);
	cin.ignore();
	cout<<"Tercer nota:";
	cin>>A[i].nota3);
	cin.ignore();
	cout<<endl;
	A[i].promedio = (A[i].nota1+A[i].nota2+A[i].nota3)/3
	
	}
	
}
void mostrarAlumnos (alumno A[], int n){
	cout<<"Nombre: "<<A[i].nombre<<endl;
	cout<<"Promedio: "<<A[i].promedio<<endl;
	cout<<endl;
}


void ordenarPromedio(alumno A[],int n){
    for(int i=1;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(A[j].promedio<A[j+1].promedio){
                alumno aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
            }
        }
    }	
	cout<<endl;
}
