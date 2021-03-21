#include <iostream>
#include "Guerrier.h"
#include "Assassin.h"
#include "Magicien.h"
#include "Ennemis.h"
#include "Armure.h"
#include "Arme.h"

int main()
{
    int choixRole;
    Guerrier* guerrier = new Guerrier();
    Magicien* magicien = new Magicien();
    Assassin* assassin = new Assassin();
    int joueurAttaque;
    bool choixRoleValide = false;
    //Titre du jeux
    std::cout << "Jeux RPG\n";

    //Le joueur choisi le role
    std::cout << "Veuillez choisir un joueur parmi les choisis suivants:\n1)Guerrier\n2)Magicien\n3) Assassin\n";
    std::cin >> choixRole;
    /*while (choixRoleValide == false)
    {
        if (choixRole == 1)
        {
            guerrier = new Guerrier();
            choixRoleValide = true;
        }
        else if (choixRole == 2)
        {
            magicien = new Magicien();
            choixRoleValide = true;
        }
        else if (choixRole == 3)
        {
            assassin = new Assassin();
            choixRoleValide = true;
        }
    }*/

    //Inventaire: Changer le paramètre item pour Equipement, car le joueur peut avoir juste des équipements.
    //Création d'arme et d'armue pour le joueur


    //Génération des armes pour l'ennemi
    //Plage(min-max) dommage , nom, valeur($$$), top de drop(%)
    Arme arme(2, "AK42",1232,22);
    Arme arme2(2, "mfeoik", 4552, 10);

    //Niveau 1
    Ennemis* tabEnnemis[2];

    //Mettre les ennemis dans un tableau + création d'ennemis
    //Arme, dommage de base
    tabEnnemis[0] = new Ennemis(&arme, 10,"ffff",0,0,100,0);
    tabEnnemis[1] = new Ennemis(&arme2, 20,"ddd",0,0,100,0);

    //Le joueur choisi l'ennemi a attaquer
    std::cout << "Choisir l'ennemis a attaquer : 1 ou 2\n";
    std::cin >> joueurAttaque;

    //Joueur choisi l'attaque à faire à l'ennemis selon son choix du joueur du début
    std::cout << "Veuillez choisir parmi les attaques suivants:";
    if (choixRole == 1)
    {
        int choix;
        //Le joueur choisi le type d'attaque contre l'ennemi
        std::cout << "\n1) Slash\n2) Kick\n3) Protect";
        std::cin >> choix;
        if (choix == 1)
        {
            tabEnnemis[joueurAttaque -1]->RecevoirDegat(guerrier->slash());
        }
        else if (choix == 2)
        {
            tabEnnemis[joueurAttaque - 1]->RecevoirDegat(guerrier->kick());
        }
        else if (choix == 3) 
        {
            tabEnnemis[joueurAttaque - 1]->RecevoirDegat(guerrier->protect());
        }
    }
    else if (choixRole == 2)
    {
        int choix;
        //Le joueur choisi le type d'attaque contre l'ennemi
        std::cout << "\n1)Heal\n2)Thunder\n3) Fireball";
        std::cin >> choix;
        if (choix == 1)
        {
            tabEnnemis[joueurAttaque - 1]->RecevoirDegat(magicien->heal());
        }
        else if (choix == 2) 
        {
            tabEnnemis[joueurAttaque - 1]->RecevoirDegat(magicien->thunder());
        }
        else if (choix == 3) 
        {
            tabEnnemis[joueurAttaque - 1]->RecevoirDegat(magicien->fireball());
        }

    }
    else if (choixRole == 3)
    {
        int choix;
        //Le joueur choisi le type d'attaque contre l'ennemi
        std::cout << "\n1)Execute";
        std::cin >> choix;
        if (choix == 1)
        {
            tabEnnemis[joueurAttaque - 1]->RecevoirDegat(assassin->Execute());
        }
    }


    //delete guerrier;
    //delete magicien;
    //delete assassin;
}

