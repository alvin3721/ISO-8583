/*
 * DefaultReconciliationAdvice.h
 *
 *  Created on: 10 ao�t 2015
 *      Author: FrancisANDRE
 */

#ifndef DEFAULTRECONCILIATIONADVICE_H_
#define DEFAULTRECONCILIATIONADVICE_H_

#include "ISO-8583/DFT/ISO-8583-DFT.h"
#include "ISO-8583/MSG/ReconciliationAdvice.h"

namespace ISO_8583 {
	namespace MSG {
		CLASS_DEFINITION_QUESTION(CB2A, Reconciliation, Advice, Response)
	}
}

#endif
