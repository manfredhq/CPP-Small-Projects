// FizzBuzz.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>

bool isNumber(const std::string& s) {
    for (char const& c : s) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}

int main()
{
    std::cout << "Hello welcome to Manfredhq's fizz buzz program in C++\n";

    std::string leaveProgram;

    do
    {

    int loopSize = 100;
    std::string userEntry;
    std::cout << "Enter the amount of number you want to do the fizz buzz with.\n";
    std::cin >> userEntry;

    if (isNumber(userEntry)) loopSize = std::stoi(userEntry);

    for (size_t i = 0; i < loopSize; i++)
    {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << "FizzBuzz";
        }
        else if (i % 3) {
            std::cout << "Fizz";
        }
        else if (i % 5) {
            std::cout << "Buzz";
        }
        else {
            std::cout << i;
        }
        std::cout << "(" << i << ")\n";
    }

    std::cout << "If you want to redo a fizzbuzz write something and press ENTER\n";
    std::cout << "Else write \"exit\" and press ENTER\n";
    std::cin >> leaveProgram;

    //I know that's bad to use !
    system("CLS");

    } while (leaveProgram != "exit");
}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
