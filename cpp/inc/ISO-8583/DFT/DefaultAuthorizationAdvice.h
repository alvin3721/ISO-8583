/*
 * DefaultAuthorizationAdvice.h
 *
 *  Created on: 10 ao�t 2015
 *      Author: FrancisANDRE
 */

#ifndef DEFAULTAUTHORIZATIONADVICE_H_
#define DEFAULTAUTHORIZATIONADVICE_H_


#include "ISO-8583/DFT/ISO-8583-DFT.h"
#include "ISO-8583/MSG/AuthorizationAdvice.h"

namespace ISO_8583 {
	namespace MSG {
		CLASS_DEFINITION_QUESTION(CB2A, Authorization, Advice, Response)
	}
}

#endif
