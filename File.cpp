#include "File.h"
#include <iostream>
#include<QString>
using namespace std;
#include<QtDebug>
File::File(QString nom){
    this->nom= nom;
    this->tipo ="A";
}

File::~File(){


}
void File::Imprimir(){
    qDebug()<<"Id File:"<<endl<< this->nom;
}

