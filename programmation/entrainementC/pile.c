typedef struct pile
{
    int donnee; /* La donnée que notre pile stockera. */
    struct pile *precedent; /* Pointeur vers l'élément précédent de la pile. */
} Pile;
