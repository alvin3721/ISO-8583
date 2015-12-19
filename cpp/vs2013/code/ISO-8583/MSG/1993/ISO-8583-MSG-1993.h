// Le bloc ifdef suivant est la fa�on standard de cr�er des macros qui facilitent l'exportation 
// � partir d'une DLL. Tous les fichiers contenus dans cette DLL sont compil�s avec le symbole ISO8583MSG1993_EXPORTS
// d�fini sur la ligne de commande. Ce symbole ne doit pas �tre d�fini pour un projet
// qui utilisent cette DLL. De cette mani�re, les autres projets dont les fichiers sources comprennent ce fichier consid�rent les fonctions 
// ISO8583MSG1993_API comme �tant import�es � partir d'une DLL, tandis que cette DLL consid�re les symboles
// d�finis avec cette macro comme �tant export�s.
#ifdef ISO8583MSG1993_EXPORTS
#define ISO8583MSG1993_API __declspec(dllexport)
#else
#define ISO8583MSG1993_API __declspec(dllimport)
#endif

// Cette classe est export�e de ISO-8583-MSG-1993.dll
class ISO8583MSG1993_API CISO8583MSG1993 {
public:
	CISO8583MSG1993(void);
	// TODO: ajoutez ici vos m�thodes.
};

extern ISO8583MSG1993_API int nISO8583MSG1993;

ISO8583MSG1993_API int fnISO8583MSG1993(void);
