/*
Copyright (C) 2007 <SWGEmu>. All rights reserved.
Distribution of this file for usage outside of Core3 is prohibited.
*/

#ifndef BASECLIENTPROXY_H_
#define BASECLIENTPROXY_H_

#include "../../../system/lang.h"

#include "BaseClient.h"

namespace engine {
  namespace service {
    namespace proto {

	class BaseClientProxy : public BaseClient {
	public:
		BaseClientProxy(Socket* sock, SocketAddress& addr);
		
		void init(DatagramServiceThread* serv);
		
		void run() {
		}

	};

    } // namespace proto
  } // namespace service
} // namespace engine

using namespace engine::service::proto;

#endif /*BASECLIENTPROXY_H_*/