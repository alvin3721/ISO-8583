/*
 * DefaultAuthorizationNotification.h
 *
 *  Created on: 10 ao�t 2015
 *      Author: FrancisANDRE
 */

#ifndef DEFAULTAUTHORIZATIONNOTIFICATION_H_
#define DEFAULTAUTHORIZATIONNOTIFICATION_H_

#include "ISO-8583/DFT/ISO-8583-DFT.h"
#include "ISO-8583/MSG/AuthorizationNotification.h"

namespace ISO_8583 {
	namespace MSG {
		CLASS_DEFINITION_QUESTION(CB2A, Authorization, Notification, Acknowledge)
	}
}

#endif
