/*
 * DefaultAuthorizationInstruction.cpp
 *
 *  Created on: 10 ao�t 2015
 *      Author: FrancisANDRE
 */

#include "ISO-8583/DFT/DefaultAuthorizationInstruction.h"

namespace ISO_8583 {
	namespace MSG {
		InstructionAcknowledge* DefaultAuthorizationInstruction::indication(BinaryInputStream& is, BinaryOutputStream& os) {
			return NULL;
		}
	}
}
