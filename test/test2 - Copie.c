/**
 * Calcule la longueur d'une chaîne de caractères.
 *
 * @param str La chaîne de caractères dont on veut connaître la longueur.
 * @return La longueur de la chaîne, excluant le caractère nul '\0'.
 */
int str_len(char *str)
{
    int len;  // Variable pour stocker la longueur de la chaîne

    len = 0;  // Initialisation de la longueur à 0
    // Parcourt chaque caractère de la chaîne jusqu'à '\0'
    while (str[len])  // Continue tant que le caractère actuel n'est pas le caractère nul '\0'
        len++;  // Incrémente le compteur pour passer au caractère suivant
    return (len);  // Retourne la longueur totale de la chaîne
}

/**
 * Calcule la longueur totale nécessaire pour la chaîne résultante,
 * incluant les séparateurs.
 *
 * @param size Le nombre de chaînes à concaténer.
 * @param strs Le tableau de chaînes de caractères à concaténer.
 * @param sep Le séparateur à insérer entre les chaînes.
 * @return La longueur totale nécessaire pour la chaîne résultante, y compris les séparateurs.
 */
int len_total(int size, char **strs, char *sep)
{
    int i;      // Compteur pour parcourir les chaînes
    int lenb;   // Longueur totale nécessaire pour la chaîne résultante

    i = 0;      // Initialisation du compteur de chaînes à 0
    lenb = 0;   // Initialisation de la longueur totale à 0
    // Parcourt toutes les chaînes dans le tableau
    while (i < size)  // Continue jusqu'à ce que toutes les chaînes soient traitées
    {
        lenb += str_len(strs[i]);  // Ajoute la longueur de la chaîne actuelle à la longueur totale
        i++;  // Passe à la chaîne suivante
    }
    // Si plus d'une chaîne est fournie, ajoute la longueur totale des séparateurs
    if (size > 1)
        lenb += str_len(sep) * (size - 1);  // (size - 1) est le nombre de séparateurs nécessaires
    return (lenb);  // Retourne la longueur totale calculée
}

/**
 * Concatène les chaînes de caractères avec un séparateur entre elles.
 *
 * @param size Le nombre de chaînes à concaténer.
 * @param strs Le tableau de chaînes de caractères à concaténer.
 * @param sep Le séparateur à insérer entre les chaînes.
 * @return La chaîne concaténée résultante, ou NULL en cas d'échec d'allocation.
 */
char *ft_strjoin(int size, char **strs, char *sep)
{
    char *s;  // Pointeur pour la chaîne résultante
    int i;    // Compteur pour les chaînes de caractères
    int j;    // Compteur pour les caractères de chaque chaîne et du séparateur
    int k;    // Compteur pour la position dans la chaîne résultante

    // Alloue de la mémoire pour la chaîne résultante
    s = malloc(sizeof(char) * (len_total(size, strs, sep) + 1));
    if (!s)  // Vérifie si l'allocation de mémoire a échoué
        return (NULL);  // Retourne NULL en cas d'échec d'allocation

    i = 0;    // Initialisation du compteur de chaînes
    k = 0;    // Initialisation du compteur pour la position dans la chaîne résultante

    // Concatène les chaînes et les séparateurs
    while (i < size)  // Parcourt chaque chaîne dans le tableau
    {
        j = 0;  // Réinitialise le compteur pour la chaîne actuelle
        // Copie les caractères de la chaîne actuelle dans la chaîne résultante
        while (strs[i][j] != '\0')  // Continue tant que le caractère actuel n'est pas '\0'
        {
            s[k] = strs[i][j];  // Copie le caractère actuel
            k++;  // Passe à la position suivante dans la chaîne résultante
            j++;  // Passe au caractère suivant dans la chaîne actuelle
        }
        j = 0;  // Réinitialise le compteur pour le séparateur
        // Ajoute le séparateur après chaque chaîne sauf après la dernière
        while (sep[j] != '\0' && i < size - 1)  // Continue tant que le séparateur n'est pas terminé et qu'on n'est pas à la dernière chaîne
        {
            s[k] = sep[j];  // Copie le caractère du séparateur
            k++;  // Passe à la position suivante dans la chaîne résultante
            j++;  // Passe au caractère suivant dans le séparateur
        }
        i++;  // Passe à la chaîne suivante
    }
    s[k] = '\0';  // Termine la chaîne résultante avec le caractère nul '\0'
    return (s);  // Retourne la chaîne concaténée
}s