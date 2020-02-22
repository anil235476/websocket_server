#ifndef _WEBSOCKET_SERVER_H__
#define _WEBSOCKET_SERVER_H__
#include "func_thread_handler.h"
namespace grt {
	void 
	start_server_block(unsigned short port, int threads, util::func_thread_handler* caller,
		std::string const receiver_id);
}//namespace grt


#endif//_WEBSOCKET_SERVER_H__