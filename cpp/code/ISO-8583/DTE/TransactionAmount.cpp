/*
 * TransactionAmount.cpp
 *
 *  Created on: 17 mai 2015
 *      Author: FrancisANDRE
 */

#include "ISO-8583/DTE/TransactionAmount.h"

namespace ISO_8583 {
	namespace DTE {
		SERIALIZE(TransactionAmount)
			string TransactionAmount::toString() const {
			return str();
		}
	}
}