/*
 * ActionCode.h
 *
 *  Created on: 17 mai 2015
 *      Author: FrancisANDRE
 */

#ifndef ACTIONCODE_H_
#define ACTIONCODE_H_

#if VRM_CB2A == 150
#include "ISO-8583/DTT/AlphaNumeric.h"
#elif VRM_ISO_8583 == 1987 || VRM_ISO_8583 == 2003
#include "ISO-8583/DTT/Numeric.h"
#endif
#include "ISO-8583/DTE/DataElement.h"

/*
CB2A		39 Code r�ponse an 2
ISO8583		39 Action code n 4
*/
namespace ISO_8583 {
	namespace DTE {
		enum Action {
			TRANSACTION_VALIDE = 0,	//transaction approuv�e ou trait�e avec succ�s
			CONTACTER_EMETEUR = 2,	//contacter l'�metteur de carte
			COMMERCANT_INVALIDE = 3,	//commer�ant invalide
			CONSERVER_CARTE = 4,	//conserver la carte
			NE_PAS_HONORER = 5,	//ne pas honorer
			CC = 7,	//conserver la carte, conditions sp�ciales
			AP = 8,	//approuver apr�s identification du porteur
			APPROUVE_PARTIELLEMENT = 10,	// approuv�e partiellement
			TRANSACTION_INVALIDE = 12,	//transaction invalide
			MONTANT_INVALIDE = 13,	//montant invalide
			NUMERO_PORTEUR_INVALIDE = 14,	//num�ro de porteur invalide
			ANNULATION_CLIENT = 17,	//annulation client
			REPONSE_ERRONEE = 20,	//r�ponse erron�e (erreur dans le domaine serveur)
			TRANSACTION_NON_EXECUTEE = 21,	//transaction non �x�cut�e
			PAS_TROUVE = 25,	//impossible de localiser l�enregistrement dans le fichier
			ERREUR_FORMAT = 30,	//erreur de format
			RC31 = 31,	//identifiant de l'organisme acqu�reur	inconnu
			RC33 = 33,	//date de validit� de la carte d�pass�e
			RC34 = 34,	//suspicion de fraude
			RC41 = 41,	//carte perdue
			RC43 = 43,	//carte vol�e
			RC51 = 51,	//provision insuffisante ou cr�dit d�pass�
			RC54 = 54,	//date de validit� de la carte d�pass�e
			RC56 = 56,	//carte absente du fichier
			RC57 = 57,	//transaction non permise � ce porteur
			RC58 = 58,	//transaction interdite au terminal
			RC59 = 59,	//suspicion de fraude
			RC60 = 60,	//l'accepteur de carte doit contacter l'acqu�reur
			RC63 = 63,	//r�gles de s�curit� non respect�es
			RC68 = 68,	//r�ponse non parvenue ou re�ue trop tard
			RC91 = 91,	//�metteur de cartes ou r�seau inaccessible
			RC94 = 94,	//demande dupliqu�e
			RC96 = 96,	//mauvais fonctionnement du syst�me
			RC97 = 97,	//�ch�ance de la temporisation de surveillance globale
			RC98 = 98,	//serveur indisponible routage r�seau demand� � nouveau (positionn� par le	serveur)
			RC99 = 99	//incident domaine initiateur
		};

		class DTE_API_SCOPE ActionCode :
#if VRM_CB2A == 150
			public AlphaNumeric<2>,
#elif VRM_ISO_8583 == 1987 || VRM_ISO_8583 == 2003
			public Numeric<4>,
#endif
			public DataElement {
		public:
			static const int  bitno = 39;

		public:
			ActionCode() {
			}
			virtual ~ActionCode() {
			}
			virtual void serialize(ostream& os);
			virtual void serialize(istream& is);
			virtual string toString() const;
		};
	}
}

#endif
