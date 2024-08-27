
#include <stdlib.h>
#include <stdio.h>

/**
 * Calcule la longueur d'une chaîne de caractères.
 *
 * @param str La chaîne dont on veut connaître la longueur.
 * @return La longueur de la chaîne, excluant le caractère nul '\0'.
 */
int str_len(char *str)
{
    int len;  // Variable pour compter les caractères

    len = 0;  // Initialisation du compteur de longueur
    // Tant que le caractère actuel n'est pas '\0'
    while (str[len])
        len++;  // Incrémente la longueur
    return (len);  // Retourne la longueur totale
}

/**
 * Calcule la longueur totale nécessaire pour la chaîne résultante,
 * incluant les séparateurs.
 *
 * @param size Le nombre de chaînes à concaténer.
 * @param strs Le tableau de chaînes de caractères à concaténer.
 * @param sep Le séparateur à insérer entre les chaînes.
 * @return La longueur totale nécessaire pour la chaîne résultante.
 */
int len_total(int size, char **strs, char *sep)
{
    int i;      // Compteur pour parcourir les chaînes
    int lenb;   // Longueur totale calculée

    i = 0;      // Initialisation du compteur de chaînes
    lenb = 0;   // Initialisation de la longueur totale
    // Parcourt chaque chaîne dans le tableau
    while (i < size)
    {
        lenb += str_len(strs[i]);  // Ajoute la longueur de chaque chaîne
        i++;  // Passe à la chaîne suivante
    }
    // Si plus d'une chaîne, ajoute la longueur des séparateurs nécessaires
    if (size > 1)
        lenb += str_len(sep) * (size - 1);
    return (lenb);  // Retourne la longueur totale nécessaire
}

/**
 * Concatène les chaînes de caractères avec un séparateur entre elles.
 *
 * @param size Le nombre de chaînes à concaténer.
 * @param strs Le tableau de chaînes de caractères à concaténer.
 * @param sep Le séparateur à insérer entre les chaînes.
 * @return La chaîne concaténée, ou NULL en cas d'échec d'allocation.
 */
char *ft_strjoin(int size, char **strs, char *sep)
{
    char *s;  // Pointeur pour la chaîne résultante
    int i;    // Compteur pour les chaînes
    int j;    // Compteur pour les caractères de chaque chaîne et du séparateur
    int k;    // Compteur pour les positions dans la chaîne résultante

    // Alloue la mémoire pour la chaîne résultante
    s = malloc(sizeof(char) * (len_total(size, strs, sep) + 1));
    if (!s)  // Vérifie si l'allocation a échoué
        return (NULL);

    i = 0;    // Initialisation du compteur de chaînes
    k = 0;    // Initialisation du compteur pour la position dans la chaîne résultante

    // Concatène chaque chaîne et les séparateurs
    while (i < size)
    {
        j = 0;  // Réinitialise le compteur pour la chaîne actuelle
        // Copie les caractères de la chaîne actuelle dans la chaîne résultante
        while (strs[i][j] != '\0')
        {
            s[k] = strs[i][j];  // Copie le caractère
            k++;  // Passe à la position suivante
            j++;  // Passe au caractère suivant
        }
        j = 0;  // Réinitialise le compteur pour le séparateur
        // Ajoute le séparateur après chaque chaîne sauf après la dernière
        while (sep[j] != '\0' && i < size - 1)
        {
            s[k] = sep[j];  // Copie le caractère du séparateur
            k++;  // Passe à la position suivante
            j++;  // Passe au caractère suivant
        }
        i++;  // Passe à la chaîne suivante
    }
    s[k] = '\0';  // Ajoute le caractère nul de fin
    return (s);  // Retourne la chaîne concaténée
}