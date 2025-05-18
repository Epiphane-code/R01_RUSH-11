#include <stdio.h>
#include <math.h>

// fonction pour trier et afficher les nombres
void trier() 
{
    int n;
    printf ("Nombre des valeurs a trier ");
    scanf("%d", &n);

    int tableau[n]; // tableau dynamique selon n

    // Remplissage du tableau
    for (int i = 0; i < n; i++) {
        printf("Entrez le nombre %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Tri à bulles (Bubble Sort)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tableau[j] > tableau[j + 1]) {
                // échange des valeurs
                int temp = tableau[j];
                tableau[j] = tableau[j + 1];
                tableau[j + 1] = temp;
            }
        }
    }
    // Affichage du tableau trié
    printf("Tableau trié : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", tableau[i]);
    }
}



unsigned long long  factorielle(int n) 
{

    unsigned long long resultat=1;
    // Vérification de l’entrée
    if (n < 0) {
        printf("Erreur : la factorielle n’est pas définie pour les négatifs.\n");
        return 0;
    }

    // Calcul de la factorielle avec une boucle
    for (int i = 1; i <= n; ++i) {
        resultat *= i; // résultat = résultat * i
    }

    return resultat;
}



void si_pair(int nombre) 
{
// Type : void car la fonction affiche le résultat, elle ne retourne pas une valeur.
    if (nombre % 2 == 0) {
        printf("Le nombre %d est pair.\n", nombre);
    } else {
        printf("Le nombre %d est impair.\n", nombre);
    }
}


// retourne 1 si vrai
int si_premier(int nombre) 
{
    
    int estPremier = 1;

    if (nombre < 2) 
    {
       estPremier=0;
    
    }
    else
    {

    
    //Déclaration du booléen de contrôle :On suppose au départ que le nombre est premier (true).
    //Si on trouve un diviseur, on changera cette variable à false.

    for (int i = 2; i * i <= nombre; i++) {
        if (nombre % i == 0) {
            estPremier = 0;
            break;
        }
    }
    }
    return estPremier;

}


void calculatrice() {
     // Déclaration des variables
    double num1, num2, resultat; // num1 et num2 stockent les nombres saisis, resultat stocke le résultat de l'opération
    char operateur;     // operateur stocke l'opérateur saisi (+, -, *, /);
    // Saisie du premier nombre
    printf("Entrez le premier nombre : ");
    scanf("%lf", &num1);
    // Saisie de l'opérateur
    printf("Entrez un opérateur (+, -, *, /) : ");
    scanf(" %c", &operateur);  // L'espace avant %c permet d'ignorer les caractères blancs (comme les retours à la ligne) dans le buffer
     // Saisie du deuxième nombre
    printf("Entrez le deuxième nombre : ");
    scanf("%lf", &num2);
    // L'espace avant %c permet d'ignorer les caractères blancs (comme les retours à la ligne) dans le buffer
    switch (operateur) {
        case '+':
            resultat = num1 + num2;  // Addition
            break;
        case '-':
            resultat = num1 - num2; // Soustraction
            break;
        case '*':
            resultat = num1 * num2; // Multiplication
            break;
        case '/':
            if (num2 != 0)
                resultat = num1 / num2;   // Division si le dénominateur n'est pas zéro
            else {
                printf("Erreur : division par zéro.\n");    // Gestion de l'erreur de division par zéro
                return;  // Quitte la fonction en cas d'erreur
            }
            break;
     default:
    printf("Opérateur invalide.\n");      // Message si l'opérateur saisi n'est pas valide 
    return;// Quitte la fonction en cas d'opérateur invalide



    // Affichage du résultat avec 2 décimales

    printf("Résultat : %.2lf %c %.2lf = %.2lf\n", num1, operateur, num2, resultat);

    }
}


void table_multiplication() 
{
    int nombre; // Variable pour stocker le nombre saisi par l'utilisateur
    // Demande à l'utilisateur d'entrer un nombre
    printf("Entrez un nombre : ");
    scanf("%d", &nombre); // Lecture du nombre entier saisi
    // Affichage de l'en-tête de la table de multiplication
    printf("Table de multiplication de %d :\n", nombre);
    // Boucle for pour générer et afficher la table de multiplication
   for (int i = 1; i <= 10; i++) {

    // Affichage de chaque ligne de la table : nombre x i = résultat

    printf("%d x %d = %d\n", nombre, i, nombre * i);

    }
}



void moyenne ()
{
    int n, i;
    float note, somme = 0.0;
    printf("\nEntrez le nombre des notes\n");

    scanf("%d", &n); // nombre de notes

    printf("Saisissez les notes\n");

    for (i = 0; i < n; i++) {
        scanf("%f", &note);
        somme += note;
    }

    printf("Moyenne : %.2f\n", somme / n);
}


void inverse () 
{
    int nombre, inverse = 0;
    printf("\nEntrez le nombre\n");

    scanf("%d", &nombre);

    while (nombre != 0) {
        inverse = inverse * 10 + nombre % 10;
        nombre /= 10;
    }

    printf("Nombre inversé est : %d\n", inverse);
}


int pgdc(int a, int b)
{
    //ce code pour calculer le pgdc de A et B
    // declaration des variables
    int tp,i;
    int pgdc=0;

// permiter les valeures si a<b
if (a<b){
    tp=a; a=b; b=tp;
}
//si a est divisible par b, pgdc est b
if(a%b==0){
    pgdc=b;
}
// si b ne divise pas a, on cherche la derniere valeure i qui divise a et b à partin de 2 jusqu'à b-1. pgcd=i
else{
    for (i=2; i<b ; i++){
        if(a%i==0 && b%i==0){
            pgdc=i;
        }
    }

}
// si à la sortie de else, pgdc=0, alors pgdc=1
if (pgdc==0) pgdc=1;
return pgdc;

}


int ppcm(int a, int b)
{
    //ce code pour calculer le ppcm de A et B
    // declaration des variables
    int tp; // on va utiliser tp pour chaque permutation

    int cnstA=a; //Pour garder la première valeure de A
    int cnstB=b; //Pour garder la première valeure de B
    if (a>b){
       tp=a; a=b; b=tp;      // permitation pour commencer avec a<b
       tp=cnstA; cnstA=cnstB; cnstB=tp;   // permitation aussi parceque les valeures a et b sont permités
    }
    while (a<b)
    {
    tp=a; a=b; b=tp;                 //permitation des valeur
    tp=cnstA; cnstA=cnstB; cnstB=tp; //permitation des premieres valeurs
       if (a%b!=0)
       {
          while (b<a)
          {
            b=b+cnstB;              // Pour que b soit > ou = à a
          }
          if (b%cnstA==0){
            tp=a; a=b; b=tp;         // permitation parceque b>a
            tp=cnstA; cnstA=cnstB; cnstB=tp;    // permitation des premieres valeures
          }
                                                                                                                                          
       }
    }
    return a;
    
}


int suites(int nature, int u0, int r, int nb)
{
    //ce code pour generer une suite arithmetique ou geometrique
    //declaration des variable
    int i;

    //Afficher les messages à l'ecran et lire les valeure entrées par l'utilisateur
    printf("Generation des Suites \n");
    printf("La suite :\t");

    if (nature==1) // si arithmetique
    {  // pacourir les indices et afficher les termes
    for (i=0; i<nb; i++){
        int un=u0+r*i;
        printf("U%d=%d\t", i, un);
        }
    } // si geometrique
    else{  // parcourir les indices et affiicher les termes
        for (i=0; i<nb; i++){
        int un=u0*pow(r,i);
        printf("U%d=%d\t", i, un);
        }  
    }
    return 0;
}


int main()
{
    int quitter=0;
    while (quitter==0)
    {
       printf("____________________________________________________________________________________________________________\n"); 
       printf("____________________________________________________________________________________________________________\n"); 
       printf("||||||||||||||||||||||||||||||||Application conçu par RUSH-11|||||||||||||||||||||||||||||||||||||||||||||||\n"); 
       printf("____________________________________________________________________________________________________________\n"); 
       printf("____________________________________________________________________________________________________________\n"); 
       printf("\nChoisissez une option\n"); 
       printf("1. PGDC/PPCM:Calculer le PPCM ou PGDC de deux nombres\n"); 
       printf("2. SUITES:Calculer et afficher les termes d'une suite Arithmetique ou Geometrique\n"); 
       printf("3. MOYENNE:Calculer et afficher la moyenne de n nombres\n"); 
       printf("4. INVERSE:Determiner l'inverse d'un nombre\n"); 
       printf("5. Calculatrice:Calculs simples \n"); 
       printf("6. TABLE DE MULTIPLICATION:Afficher la table de multiplication d'un nombre entier\n"); 
       printf("7. PARITE:Verifier si le nombre est pair\n"); 
       printf("8. NombrePremier:Verifier si le nombre est premier\n");
       printf("9. FACTORIELLE:Calcul factorielle\n");
       printf("10. TRIE:trier les nombres\n");
       printf("0. Quitter\n");

       int choix;
       scanf("%d",&choix);


       switch (choix)
       {
       case 0:
              quitter=1;
        break;

       case 1:
             {
                int a,b, resultat;
                printf("Entrez les valeurs A et B\n");
                printf("A:");
                scanf("%d",&a);
                printf("\nB:");
                scanf("%d",&b);
                resultat=pgdc(a,b);
                printf("\nLe PGDC de %d et %d est %d \n", a, b, resultat );
                break;

             }
        case 2: 
        {
                int a,b, resultat;
                printf("Entrez les valeurs A et B\n");
                printf("A:");
                scanf("%d",&a);
                printf("\nB:");
                scanf("%d",&b);
                resultat=ppcm(a,b);
                printf("\nLe PPCM de %d et %d est %d \n", a, b, resultat );
                break;
        }   
        case 3: {
            int nature, u0, r, nb;
            printf("\nEntrez la nature de votre suite\n1. Arithmetique \n2. Geometrique");
            scanf("%d",&nature);
            printf("\nPremier terme:");
            scanf("%d",&u0);
            printf("\nRaison:");
            scanf("%d",&r);
            printf("\nNombre des termes");
            scanf("%d",&nb);
            printf("\nVotre suite est:");
            suites(nature,u0,r,nb);
            break;
        }
        case 4: {
            moyenne;
            break;
        }
        case 5: {
            inverse;
            break;
        }
        case 6: {
            calculatrice;
            break;

        }
        case 7: {
            table_multiplication;

        }
        case 8:
        {
            int n;
            printf("Entrez une valeur");
            scanf("%d",&n);
            si_pair(n);
            break;

        }
            
            
        
        case 9: {
            int n;
            printf("\nEntrez le nombre :\n");
            scanf("%d",&n);
            si_premier(n);
            break;

        }

        case 10: {
            int n;
            printf("\nEntrez le nombre :");
            scanf("%d",&n);
            factorielle(n);
            break;
        }

        case 11: {
            trier;
        }       
       default: printf("Enter une valeur entre 0 et 11 \n");
        break;
       }
     

    }
    
}
