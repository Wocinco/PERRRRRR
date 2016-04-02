//============================================================================
// Name        : 4.cpp
// Author      : Marco
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int main() {
	int arr[50];
	int ra,q,z,x;
	cout <<"¿cuantos numeros desea ingresar? Maximo 50__";
	cin>>ra;
for(q=0;q<ra;q++)
	{cout<<"N["<<(q+1)<<"]=";
		cin>>arr[q];
}for(q=0;q<ra;q++)
	{for(z=q+1;z<ra;z++)
		{if(arr[q]<arr[z])
			{x=arr[q];
				arr[q]=arr[z];
				arr[z]= x;
			}}}
	cout <<"numeros ordenados ascendentemente"<<endl ;
	for(q=0;q<ra;q++)
	{cout<<arr[q]<<endl;
	}}
