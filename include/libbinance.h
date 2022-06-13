#ifndef LIBBINANCE_H
#define LIBBINANCE_H

#include <string>
#include <json.h>

namespace libbinance {

typedef unsigned long long timestamp_t;

class WebSocketCallbackObj {
public:
    virtual int CallBack(Json::Value &json_value) = 0;
};

void init(std::string &api_key, std::string &secret_key);
void cleanup();

bool get_exchangeInfo(Json::Value &json_result);
bool get_serverTime(Json::Value &json_result);

bool get_allPrices(Json::Value &json_result);
double get_price(const char *symbol);

bool get_allBookTickers(Json::Value &json_result );
bool get_bookTicker(const char *symbol, Json::Value &json_result) ;

bool get_depth(const char *symbol, int limit, Json::Value &json_result);
bool get_aggTrades(const char *symbol, int fromId, timestamp_t startTime, timestamp_t endTime, int limit, Json::Value &json_result);
bool get_24hr(const char *symbol, Json::Value &json_result);
bool get_klines(const char *symbol, const char *interval, int limit, timestamp_t startTime, timestamp_t endTime, Json::Value &json_result);

// API + Secret keys required
bool get_account(Json::Value &json_result, long recvWindow = 5000);
bool get_myTrades(const char *symbol, int limit, long fromId, Json::Value &json_result, long recvWindow = 5000);
bool get_openOrders(const char *symbol, Json::Value &json_result, long recvWindow = 5000);

bool get_allOrders(const char *symbol, long orderId, int limit, Json::Value &json_result, long recvWindow = 5000);

bool send_limit_order(const char *symbol, const char *side, double price, double qty, Json::Value &json_result, int recvWindow = 5000);
bool send_market_order(const char *symbol, const char *side, double qty, Json::Value &json_result, int recvWindow = 5000);

bool send_order(const char *symbol,
    const char *side,
    const char *type,
    const char *timeInForce,
    double quantity,
    double price,
    const char *newClientOrderId,
    double stopPrice,
    double icebergQty,
    timestamp_t timestamp,
    Json::Value &json_result,
    long recvWindow = 5000);


bool get_order(const char *symbol, long orderId, const char *origClientOrderId,
    Json::Value &json_result,
    long recvWindow = 5000);


bool cancel_order(const char *symbol, long orderId, const char *origClientOrderId,
    const char *newClientOrderId,
    Json::Value &json_result,
    long recvWindow = 5000);

// API key required
void start_userDataStream(Json::Value &json_result);
void keep_userDataStream(const char *listenKey);
void close_userDataStream(const char *listenKey);

// WAPI
void withdraw(
    const char *asset,
    const char *address,
    const char *addressTag,
    double amount,
    const char *name,
    Json::Value &json_result,
    long recvWindow = 5000);

void get_depositHistory(
    const char *asset,
    int  status,
    long startTime,
    long endTime,
    Json::Value &json_result,
    long recvWindow = 5000);

void get_withdrawHistory(
    const char *asset,
    int  status,
    long startTime,
    long endTime,
    Json::Value &json_result,
    long recvWindow = 5000);

void get_depositAddress(
    const char *asset,
    Json::Value &json_result,
    long recvWindow = 5000);

void initWebSocket();
void connect_endpoint(WebSocketCallbackObj* usr_cb, const char *path);
bool remove_endpoint(WebSocketCallbackObj* usr_cb);
void enter_event_loop_webSocket();

}

#endif
