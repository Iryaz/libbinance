#include "libbinance.h"
#include "binacpp.h"
#include "binacpp_websocket.h"

void libbinance::init(std::string &api_key, std::string &secret_key)
{
    BinaCPP::init(api_key, secret_key);
}

void libbinance::cleanup()
{
    BinaCPP::cleanup();
}

void libbinance::get_exchangeInfo(Json::Value &json_result)
{
    BinaCPP::get_exchangeInfo(json_result);
}

void libbinance::get_serverTime(Json::Value &json_result)
{
    BinaCPP::get_serverTime(json_result);
}

void get_serverTime(Json::Value &json_result)
{
    BinaCPP::get_serverTime(json_result);
}

void libbinance::get_allPrices(Json::Value &json_result)
{
    BinaCPP::get_allPrices(json_result);
}

double libbinance::get_price(const char *symbol)
{
    return BinaCPP::get_price(symbol);
}

void libbinance::get_allBookTickers(Json::Value &json_result )
{
    BinaCPP::get_allBookTickers(json_result);
}

void libbinance::get_bookTicker(const char *symbol, Json::Value &json_result)
{
    BinaCPP::get_bookTicker(symbol, json_result);
}

void libbinance::get_depth(const char *symbol, int limit, Json::Value &json_result)
{
    BinaCPP::get_depth(symbol, limit, json_result);
}

void libbinance::get_aggTrades(const char *symbol, int fromId, timestamp_t startTime, timestamp_t endTime, int limit, Json::Value &json_result)
{
    BinaCPP::get_aggTrades(symbol, fromId, startTime, endTime, limit, json_result);
}

void libbinance::get_24hr(const char *symbol, Json::Value &json_result)
{
    BinaCPP::get_24hr(symbol, json_result);
}

void libbinance::get_klines(const char *symbol, const char *interval, int limit, timestamp_t startTime, timestamp_t endTime, Json::Value &json_result)
{
    BinaCPP::get_klines(symbol, interval, limit, startTime, endTime, json_result);
}

// API + Secret keys required
void libbinance::get_account(long recvWindow, Json::Value &json_result)
{
    BinaCPP::get_account(recvWindow, json_result);
}

void libbinance::get_myTrades(
    const char *symbol,
    int limit,
    long fromId,
    long recvWindow,
    Json::Value &json_result
)
{
    BinaCPP::get_myTrades(symbol, limit, fromId, recvWindow, json_result);
}

void libbinance::get_openOrders(
    const char *symbol,
    long recvWindow,
    Json::Value &json_result
)
{
    BinaCPP::get_openOrders(symbol, recvWindow, json_result);
}


void libbinance::get_allOrders(
    const char *symbol,
    long orderId,
    int limit,
    long recvWindow,
    Json::Value &json_result
)
{
    BinaCPP::get_allOrders(symbol, orderId, limit, recvWindow, json_result);
}


void libbinance::send_order(
    const char *symbol,
    const char *side,
    const char *type,
    const char *timeInForce,
    double quantity,
    double price,
    const char *newClientOrderId,
    double stopPrice,
    double icebergQty,
    long recvWindow,
    Json::Value &json_result)
{
    BinaCPP::send_order(symbol, side, type, timeInForce, quantity, price, newClientOrderId, stopPrice, icebergQty, recvWindow, json_result);
}


void libbinance::get_order(
    const char *symbol,
    long orderId,
    const char *origClientOrderId,
    long recvWindow,
    Json::Value &json_result)
{
    BinaCPP::get_order(symbol, orderId, origClientOrderId, recvWindow, json_result);
}


void libbinance::cancel_order(
    const char *symbol,
    long orderId,
    const char *origClientOrderId,
    const char *newClientOrderId,
    long recvWindow,
    Json::Value &json_result
)
{
    BinaCPP::cancel_order(symbol, orderId, origClientOrderId, newClientOrderId, recvWindow, json_result);
}

// API key required
void libbinance::start_userDataStream(Json::Value &json_result)
{
    BinaCPP::start_userDataStream(json_result);
}

void libbinance::keep_userDataStream(const char *listenKey)
{
    BinaCPP::keep_userDataStream(listenKey);
}

void libbinance::close_userDataStream(const char *listenKey)
{
    BinaCPP::close_userDataStream(listenKey);
}

// WAPI
void libbinance::withdraw(
    const char *asset,
    const char *address,
    const char *addressTag,
    double amount,
    const char *name,
    long recvWindow,
    Json::Value &json_result)
{
    BinaCPP::withdraw(asset, address, addressTag, amount, name, recvWindow, json_result);
}

void libbinance::get_depositHistory(
    const char *asset,
    int  status,
    long startTime,
    long endTime,
    long recvWindow,
    Json::Value &json_result)
{
    BinaCPP::get_depositHistory(asset, status, startTime, endTime, recvWindow, json_result);
}

void libbinance::get_withdrawHistory(
    const char *asset,
    int  status,
    long startTime,
    long endTime,
    long recvWindow,
    Json::Value &json_result)
{
    BinaCPP::get_withdrawHistory(asset, status, startTime, endTime, recvWindow, json_result);
}

void libbinance::get_depositAddress(
    const char *asset,
    long recvWindow,
    Json::Value &json_result)
{
    BinaCPP::get_depositAddress(asset, recvWindow, json_result);
}

void libbinance::initWebSocket()
{
    BinaCPP_websocket::init();
}

void libbinance::connect_endpoint(WebSocketCallbackObj *usr_cb, const char *path)
{
    BinaCPP_websocket::connect_endpoint(usr_cb, path);
}

bool libbinance::remove_endpoint(WebSocketCallbackObj* usr_cb)
{
    return BinaCPP_websocket::remove_endpoint(usr_cb);
}

void libbinance::enter_event_loop_webSocket()
{
    BinaCPP_websocket::enter_event_loop();
}
