#include <iostream>
#include <fstream>
using namespace std;
const int NRIGHE = 30;

/***
Completare le informazioni
Nome: Leone Stefano
Progetto: OrarioTreni
***/

struct tratta{
	char dest[30];
	int part;
	int arrivo;
};
int carica(tratta []);
void stampa(tratta [], int);

int main(){
	tratta ora[NRIGHE];
	int ntratte = carica(ora);
	stampa(ora,ntratte);
	return 0;
}

int carica(tratta ora[]){
	int i;
	int n=2;
	for (i=0; i<n; i++){
	cout<<"Inserire destinazione: ";	
	cin>>ora[i].dest;
	cout<<"Inserire partenza: ";
	cin>>ora[i].part;
	cout<<"Inserire arrivo: ";
	cin>>ora[i].arrivo;
	}
	return n;
}

void stampa(tratta ora[], int n){
	for (int i=0; i<n; i++)
	{
     cout<<ora[i].dest;
     cout<<"  "<<ora[i].part;
     cout<<"  "<<ora[i].arrivo<<endl;
    
	}
}


