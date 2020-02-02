#include <iostream>
#include <fstream>
#include <string>
#include "fichier.h"
using namespace std;


//Création des méthodes de la classe

  void File::setF(string name){
    this->file_name = name;
  }
  string File::getF() {
    return file_name;
  }
  void File::setW(string word){
    this->input = word;
  }
  string File::getW(){
    return input;
  }



int main() {
  File entree;
  string f_name;
  string word;
  int occurence=0;

  cout <<"Enter file name (absolute path): ";
  cin >> f_name;
  entree.setF(f_name);
  ifstream flu(entree.getF());

  cout << "Enter the word you looking for : ";
  cin >> word;


  string mot;
  while (flu >> mot) {
    if (mot == word){
      ++occurence;
    }
  }
  cout << "Your word appeir " << occurence << " times";
  return 0;
}
