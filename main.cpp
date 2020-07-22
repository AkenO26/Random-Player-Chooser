#include <iostream>
#include <cstdlib>
#include <ctime>

int getNbJoueurs()
{
  std::cout<<"Entrer le nombre de joueurs : ";
  int nbJoueurs{};
  std::cin>>nbJoueurs;
  return nbJoueurs;
}

int getRandomNumber(int min, int max)
{
  static constexpr double fraction {1.0 / (RAND_MAX + 1.0)};
  return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

std::string pName()
{
  std::cout<<"Entrer le nom du joueur :";
  std::string name{};
  std::cin>>name;
  return name;
}


int main()
{
  std::srand(static_cast<unsigned int>(std::time(nullptr)));
  int nbJoueurs{getNbJoueurs()};
  std::string* array = new std::string[nbJoueurs];
  
  for (int p = 0; p < nbJoueurs; p++) {
      std::string name = pName();
			array[p]= name;
		}
    std::cout<<array[getRandomNumber(1, nbJoueurs)];

  return 0;
}