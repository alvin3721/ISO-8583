/*
 * ExtendedPaymentData.cpp
 *
 *  Created on: 28 mai 2015
 *      Author: FrancisANDRE
 */

#include "ISO-8583/DTE/ExtendedPaymentData.h"

namespace ISO_8583 {
	namespace DTE {
		SERIALIZE(ExtendedPaymentData)
			string ExtendedPaymentData::toString() const {
			string s(str());
			return s;
		}
	}
}
