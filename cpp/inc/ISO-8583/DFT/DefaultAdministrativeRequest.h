/*
 * DefaultAdministrativeRequest.h
 *
 *  Created on: 10 ao�t 2015
 *      Author: FrancisANDRE
 */

#ifndef DEFAULTADMINISTRATIVEREQUEST_H_
#define DEFAULTADMINISTRATIVEREQUEST_H_

#include "ISO-8583/DFT/ISO-8583-DFT.h"
#include "ISO-8583/MSG/AdministrativeRequest.h"

namespace ISO_8583 {
	namespace MSG {
		CLASS_DEFINITION_QUESTION(CB2A, Administrative, Request, Response)
	}
}

#endif
