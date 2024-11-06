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
        }
};

int main(){
    // create a piece object
    Piece piece;
    piece.lancer();
    return 0;
}