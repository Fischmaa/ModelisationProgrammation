#include "Dvector.h"
#include <iostream>
#include <fstream>
#include <cassert>
#include <sstream>
using namespace std;

int main()
{
  cout<<"Debut du test de l'opérateur d'accession en lecture:"<<endl;
  Dvector P(2,1.0);
  assert(P.size()==2);
  std::stringstream str;
  P.display(str);
  assert(str.str() == "1\n1\n");
  assert(P(1)==1);
  cout<<"OK"<<endl;

  cout<<"Debut du test de l'opérateur d'accession en écriture:"<<endl;
  Dvector Q(2,1.0);
  assert(Q.size()==2);
  str.str(std::string()); // réinitialisation de str
  Q.display(str);
  assert(str.str() == "1\n1\n");
  Q(1)=3;
  assert(Q(1)==3);
  str.str(std::string());
  Q.display(str);
  assert(str.str() == "1\n3\n");
  cout<<"OK"<<endl;

  cout<<"Debut du test de l'addition de deux vecteurs':"<<endl;
  Dvector R = P + Q ;
  str.str(std::string());
  R.display(str);
  assert(str.str() == "2\n4\n");
  cout<<"OK"<<endl;

  cout<<"Debut du test de l'opérateur += avec un vecteur:"<<endl;
  R += P ;
  str.str(std::string());
  R.display(str);
  assert(str.str() == "3\n5\n");
  cout<<"OK"<<endl;

   cout<<"Debut du test de la soustraction de deux vecteurs':"<<endl;
  Dvector S = P - Q ;
  str.str(std::string());
  S.display(str);
  assert(str.str() == "0\n-2\n");
  cout<<"OK"<<endl;

  cout<<"Debut du test de l'opérateur -= avec un vecteur:"<<endl;
  S -= P ;
  str.str(std::string());
  S.display(std::cout);
  S.display(str);
  assert(str.str() == "-1\n-3\n");
  cout<<"OK"<<endl;

  cout<<"Debut du test de l'opérateur unaire -:"<<endl;
  Dvector T = -S;
  str.str(std::string());
  T.display(str);
  assert(str.str() == "1\n3\n");
  cout<<"OK"<<endl;



  return 0;
  
}