/*
 * DefaultFinancialRequest.h
 *
 *  Created on: 10 ao�t 2015
 *      Author: FrancisANDRE
 */

#ifndef DEFAULTFINANCIALREQUEST_H_
#define DEFAULTFINANCIALREQUEST_H_

#include "ISO-8583/DFT/ISO-8583-DFT.h"
#include "ISO-8583/MSG/FinancialRequest.h"

namespace ISO_8583 {
	namespace MSG {
		CLASS_DEFINITION_QUESTION(CB2A, Financial, Request, Response)
	}
}

#endif
