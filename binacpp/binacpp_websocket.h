


#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <exception>

#include <json.h>
#include "libbinance.h"
#include <libwebsockets.h>


#define BINANCE_WS_HOST "stream.binance.com"
#define BINANCE_WS_PORT 9443


using namespace std;

class BinaCPP_websocket {


	static struct lws_context *context;
	static struct lws_protocols protocols[]; 

    static map <struct lws *, libbinance::WebSocketCallbackObj*> handles ;
	
	public:
		static int  event_cb( struct lws *wsi, enum lws_callback_reasons reason, void *user, void *in, size_t len );
		static void connect_endpoint(
            libbinance::WebSocketCallbackObj* user_cb,
			const char* path
		);
		static void init();
		static void enter_event_loop();


};
