#ifndef FICHIER_H_INCLUDE
#define FICHIER_H_INCLUDE

#include <string>

class File { //Création de la classe File
private:
  std::string file_name;
  std::string input;

public: //Prototype des variables
  void setF(std::string name);
  std::string getF();

  void setW(std::string word);
  std::string getW();

  //int nbr_retour(str::string mot);
};
#endif
