//
/*


1 Parenth´esage
Programmez une fonction qui re¸coit une chaˆıne de caract`eres et qui retourne
vrai si elle est correctement parenth´es´ee et faux sinon.
Une expression est bien parenth´es´ee si elle contient autant de parenth`eses
fermantes qu’ouvrantes et que chaque parenth`ese fermante vient apr`es une
parenth`ese ouvrante correspondante.

La signature de la fonction est la suivante :

int estBienParenthesee(char expression[]);

Voici des exemples d’expressions bien parenth´es´ees :

"(((((alpha))))bravo)"
"charlie () delta"
"echo foxtrot"
"((golf) (hotel, juliette)) kilo ( lima, mike)"

Voici des exemples d’expressions mal parenth´es´ees :

")!("
"((((november"
"oscar :)"



*/ 


//



#include<stdio.h>
#include<stdlib.h>


int main(int argc, char const *argv[])
{
	int c, ouinon, i;
	char n;
	char parentheses[n];
	
	printf("- - - - Parenthesage - - - -\n");
	printf("Program élaboré pour faire la concatenation des parentheses.\n");

	for(i = 0; i < n; i++){
		printf("tapez ()[]: \n");
		scanf(" %s", &parentheses[n]);
		n++;
		if(ouinon == 0){
			printf("Continue 0 arrete 1: \n");
		}
	}
}