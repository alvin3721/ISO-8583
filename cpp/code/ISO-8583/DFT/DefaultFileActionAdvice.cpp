/*
 * DefaultFileActionAdvice.cpp
 *
 *  Created on: 10 ao�t 2015
 *      Author: FrancisANDRE
 */

#include "ISO-8583/DFT/DefaultFileActionAdvice.h"

namespace ISO_8583 {
	namespace MSG {
		AdviceResponse* DefaultFileActionAdvice::indication(BinaryInputStream& is, BinaryOutputStream& os) {
			return NULL;
		}
	}
}
