# explication :
1. initialisation des attributs :
    Piece(): count_face(0), count_pile(0), total_Laner(0){}

    la liste d'initialisation est plus efficace que l'affectatoin dans le corps du constructeurpour certaine type de donnes

2. srand(static_cast<unsigned>(time(0)));
    srand() : initialise le generateur de nombre aleatoire
    
    time(0) : retourne l'heur actuelle sous forme d'un entier (en s depuis 1970), >>> psedo aleatoire
    time(0) >>> entier de type time_t

    static_cast<unsigned>(time(0)), donc on utilise :
        static_cast pour convertir en unsigned int, qui est le type attendu par srand
    
3. why use srand()
    pour avoir le nombre pseud aleatoire, simuler les lancee des pieces,

    car ce la rend chaque serie de resultat  different