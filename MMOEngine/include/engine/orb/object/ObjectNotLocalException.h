/*
Copyright (C) 2007 <SWGEmu>. All rights reserved.
Distribution of this file for usage outside of Core3 is prohibited.
*/

#ifndef OBJECTNOTLOCALEXCEPTION_H_
#define OBJECTNOTLOCALEXCEPTION_H_

#include "system/lang/Exception.h"

namespace engine {
  namespace ORB {

	class ObjectNotLocalException : public sys::lang::Exception {
	public:
		ObjectNotLocalException(DistributedObjectStub* stub) : Exception() {
			message = "\'" + stub->_getName() + "\' is not implemented locally";
		}
	};

  } // namespace ORB
} // namespace engine

using namespace engine::ORB;

#endif /*OBJECTNOTLOCALEXCEPTION_H_*/
