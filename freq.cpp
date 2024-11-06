#include <iostream> // print in console
#include <cstdlib>  // for rand() and srand()
#include <ctime>    // for time() to generate a random number
#include <thread>   // for this_thread::sleep_for
#include <chrono> // for chrono::microseconds
using namespace std;

class Piece{
    private:
        int count_face;
        int count_pile;
        int total_Laner;
    
    public:
        // constructor to initialize random number generator, and compute
        Piece(): count_face(0), count_pile(0), total_Laner(0){
            // initialize the random number generator with time now
            srand(static_cast<unsigned>(time(0)));
        }

        // method for launching the part with an animation
        void lancer(){
            cout<< "Lancement de la piece ..."<< endl;

            // Animation d'alternance rapide entre "P" ou "F"
            for(int i=0; i<10; i++){
                // Affichage alternee "P" ou "F"
                cout << (i%2 == 0 ? "PILE" : "FACE") << "\r";
                cout.flush();   // forcer l'affichage imediate
                this_thread::sleep_for(chrono::milliseconds(200));  // pause de 200 ms pour creer l'effet d'animation
            }
        }
};

int main(){
    // create a piece object
    Piece piece;
    char choix;

    do{
        // appel de la methode pour simuler le lancer de la piece
        piece.lancer();

        // Demander a l'utilisateur s'il souhaite relancer la piece
        cout<< "Voulez-vous relancer la piece ? (o/n) : ";
        cin >> choix;   // lire input user 
    } while(choix == 'o' || choix == 'O');
    
    // pour terminer la simulation
    cout<< "Simulation terminée ..." << endl;
    return 0;   // INdiquer que le programme s'est terminée avec succes
}