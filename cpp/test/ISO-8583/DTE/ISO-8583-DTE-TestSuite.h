#ifndef TestSuite_INCLUDED
#define TestSuite_INCLUDED

#include "CppUnit/TestSuite.h"

namespace ISO_8583 {
	namespace DTE {
		class TestSuite	{
		public:
			static CppUnit::Test* suite();
		};
	}
}
#endif
