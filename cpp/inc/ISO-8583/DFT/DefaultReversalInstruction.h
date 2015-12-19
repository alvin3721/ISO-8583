/*
 * DefaultReversalInstruction.h
 *
 *  Created on: 10 ao�t 2015
 *      Author: FrancisANDRE
 */

#ifndef DEFAULTREVERSALINSTRUCTION_H_
#define DEFAULTREVERSALINSTRUCTION_H_

#include "ISO-8583/DFT/ISO-8583-DFT.h"
#include "ISO-8583/MSG/ReversalInstruction.h"

namespace ISO_8583 {
	namespace MSG {
		CLASS_DEFINITION_QUESTION(CB2A, Reversal, Instruction, Acknowledge)
	}
}

#endif
