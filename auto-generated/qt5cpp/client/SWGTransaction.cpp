/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


#include "SWGTransaction.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGTransaction::SWGTransaction(QString json) {
    init();
    this->fromJson(json);
}

SWGTransaction::SWGTransaction() {
    init();
}

SWGTransaction::~SWGTransaction() {
    this->cleanup();
}

void
SWGTransaction::init() {
    transact_id = new QString("");
    m_transact_id_isSet = false;
    account = 0.0;
    m_account_isSet = false;
    currency = new QString("");
    m_currency_isSet = false;
    transact_type = new QString("");
    m_transact_type_isSet = false;
    amount = 0.0;
    m_amount_isSet = false;
    fee = 0.0;
    m_fee_isSet = false;
    transact_status = new QString("");
    m_transact_status_isSet = false;
    address = new QString("");
    m_address_isSet = false;
    tx = new QString("");
    m_tx_isSet = false;
    text = new QString("");
    m_text_isSet = false;
    transact_time = NULL;
    m_transact_time_isSet = false;
    timestamp = NULL;
    m_timestamp_isSet = false;
}

void
SWGTransaction::cleanup() {
    if(transact_id != nullptr) { 
        delete transact_id;
    }
    if(account != nullptr) { 
        delete account;
    }
    if(currency != nullptr) { 
        delete currency;
    }
    if(transact_type != nullptr) { 
        delete transact_type;
    }
    if(amount != nullptr) { 
        delete amount;
    }
    if(fee != nullptr) { 
        delete fee;
    }
    if(transact_status != nullptr) { 
        delete transact_status;
    }
    if(address != nullptr) { 
        delete address;
    }
    if(tx != nullptr) { 
        delete tx;
    }
    if(text != nullptr) { 
        delete text;
    }
    if(transact_time != nullptr) { 
        delete transact_time;
    }
    if(timestamp != nullptr) { 
        delete timestamp;
    }
}

SWGTransaction*
SWGTransaction::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGTransaction::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&transact_id, pJson["transactID"], "QString", "QString");
    
    ::Swagger::setValue(&account, pJson["account"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&currency, pJson["currency"], "QString", "QString");
    
    ::Swagger::setValue(&transact_type, pJson["transactType"], "QString", "QString");
    
    ::Swagger::setValue(&amount, pJson["amount"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&fee, pJson["fee"], "SWGNumber", "SWGNumber");
    
    ::Swagger::setValue(&transact_status, pJson["transactStatus"], "QString", "QString");
    
    ::Swagger::setValue(&address, pJson["address"], "QString", "QString");
    
    ::Swagger::setValue(&tx, pJson["tx"], "QString", "QString");
    
    ::Swagger::setValue(&text, pJson["text"], "QString", "QString");
    
    ::Swagger::setValue(&transact_time, pJson["transactTime"], "QDateTime", "QDateTime");
    
    ::Swagger::setValue(&timestamp, pJson["timestamp"], "QDateTime", "QDateTime");
    
}

QString
SWGTransaction::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGTransaction::asJsonObject() {
    QJsonObject obj;
    if(transact_id != nullptr && *transact_id != QString("")){
        toJsonValue(QString("transactID"), transact_id, obj, QString("QString"));
    }
    if((account != nullptr) && (account->isSet())){
        toJsonValue(QString("account"), account, obj, QString("SWGNumber"));
    }
    if(currency != nullptr && *currency != QString("")){
        toJsonValue(QString("currency"), currency, obj, QString("QString"));
    }
    if(transact_type != nullptr && *transact_type != QString("")){
        toJsonValue(QString("transactType"), transact_type, obj, QString("QString"));
    }
    if((amount != nullptr) && (amount->isSet())){
        toJsonValue(QString("amount"), amount, obj, QString("SWGNumber"));
    }
    if((fee != nullptr) && (fee->isSet())){
        toJsonValue(QString("fee"), fee, obj, QString("SWGNumber"));
    }
    if(transact_status != nullptr && *transact_status != QString("")){
        toJsonValue(QString("transactStatus"), transact_status, obj, QString("QString"));
    }
    if(address != nullptr && *address != QString("")){
        toJsonValue(QString("address"), address, obj, QString("QString"));
    }
    if(tx != nullptr && *tx != QString("")){
        toJsonValue(QString("tx"), tx, obj, QString("QString"));
    }
    if(text != nullptr && *text != QString("")){
        toJsonValue(QString("text"), text, obj, QString("QString"));
    }
    if(transact_time != nullptr) { 
        toJsonValue(QString("transactTime"), transact_time, obj, QString("QDateTime"));
    }
    if(timestamp != nullptr) { 
        toJsonValue(QString("timestamp"), timestamp, obj, QString("QDateTime"));
    }

    return obj;
}

QString*
SWGTransaction::getTransactId() {
    return transact_id;
}
void
SWGTransaction::setTransactId(QString* transact_id) {
    this->transact_id = transact_id;
    this->m_transact_id_isSet = true;
}

SWGNumber*
SWGTransaction::getAccount() {
    return account;
}
void
SWGTransaction::setAccount(SWGNumber* account) {
    this->account = account;
    this->m_account_isSet = true;
}

QString*
SWGTransaction::getCurrency() {
    return currency;
}
void
SWGTransaction::setCurrency(QString* currency) {
    this->currency = currency;
    this->m_currency_isSet = true;
}

QString*
SWGTransaction::getTransactType() {
    return transact_type;
}
void
SWGTransaction::setTransactType(QString* transact_type) {
    this->transact_type = transact_type;
    this->m_transact_type_isSet = true;
}

SWGNumber*
SWGTransaction::getAmount() {
    return amount;
}
void
SWGTransaction::setAmount(SWGNumber* amount) {
    this->amount = amount;
    this->m_amount_isSet = true;
}

SWGNumber*
SWGTransaction::getFee() {
    return fee;
}
void
SWGTransaction::setFee(SWGNumber* fee) {
    this->fee = fee;
    this->m_fee_isSet = true;
}

QString*
SWGTransaction::getTransactStatus() {
    return transact_status;
}
void
SWGTransaction::setTransactStatus(QString* transact_status) {
    this->transact_status = transact_status;
    this->m_transact_status_isSet = true;
}

QString*
SWGTransaction::getAddress() {
    return address;
}
void
SWGTransaction::setAddress(QString* address) {
    this->address = address;
    this->m_address_isSet = true;
}

QString*
SWGTransaction::getTx() {
    return tx;
}
void
SWGTransaction::setTx(QString* tx) {
    this->tx = tx;
    this->m_tx_isSet = true;
}

QString*
SWGTransaction::getText() {
    return text;
}
void
SWGTransaction::setText(QString* text) {
    this->text = text;
    this->m_text_isSet = true;
}

QDateTime*
SWGTransaction::getTransactTime() {
    return transact_time;
}
void
SWGTransaction::setTransactTime(QDateTime* transact_time) {
    this->transact_time = transact_time;
    this->m_transact_time_isSet = true;
}

QDateTime*
SWGTransaction::getTimestamp() {
    return timestamp;
}
void
SWGTransaction::setTimestamp(QDateTime* timestamp) {
    this->timestamp = timestamp;
    this->m_timestamp_isSet = true;
}


bool
SWGTransaction::isSet(){
    bool isObjectUpdated = false;
    do{
        if(transact_id != nullptr && *transact_id != QString("")){ isObjectUpdated = true; break;}
        if(account != nullptr && account->isSet()){ isObjectUpdated = true; break;}
        if(currency != nullptr && *currency != QString("")){ isObjectUpdated = true; break;}
        if(transact_type != nullptr && *transact_type != QString("")){ isObjectUpdated = true; break;}
        if(amount != nullptr && amount->isSet()){ isObjectUpdated = true; break;}
        if(fee != nullptr && fee->isSet()){ isObjectUpdated = true; break;}
        if(transact_status != nullptr && *transact_status != QString("")){ isObjectUpdated = true; break;}
        if(address != nullptr && *address != QString("")){ isObjectUpdated = true; break;}
        if(tx != nullptr && *tx != QString("")){ isObjectUpdated = true; break;}
        if(text != nullptr && *text != QString("")){ isObjectUpdated = true; break;}
        
        
    }while(false);
    return isObjectUpdated;
}
}

