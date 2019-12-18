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


#include "SWGUserEvent.h"

#include "SWGHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace Swagger {

SWGUserEvent::SWGUserEvent(QString json) {
    init();
    this->fromJson(json);
}

SWGUserEvent::SWGUserEvent() {
    init();
}

SWGUserEvent::~SWGUserEvent() {
    this->cleanup();
}

void
SWGUserEvent::init() {
    id = 0.0;
    m_id_isSet = false;
    type = new QString("");
    m_type_isSet = false;
    status = new QString("");
    m_status_isSet = false;
    user_id = 0.0;
    m_user_id_isSet = false;
    created_by_id = 0.0;
    m_created_by_id_isSet = false;
    ip = new QString("");
    m_ip_isSet = false;
    geoip_country = new QString("");
    m_geoip_country_isSet = false;
    geoip_region = new QString("");
    m_geoip_region_isSet = false;
    geoip_sub_region = new QString("");
    m_geoip_sub_region_isSet = false;
    event_meta = NULL;
    m_event_meta_isSet = false;
    created = NULL;
    m_created_isSet = false;
}

void
SWGUserEvent::cleanup() {

    if(type != nullptr) { 
        delete type;
    }
    if(status != nullptr) { 
        delete status;
    }


    if(ip != nullptr) { 
        delete ip;
    }
    if(geoip_country != nullptr) { 
        delete geoip_country;
    }
    if(geoip_region != nullptr) { 
        delete geoip_region;
    }
    if(geoip_sub_region != nullptr) { 
        delete geoip_sub_region;
    }
    if(event_meta != nullptr) { 
        delete event_meta;
    }
    if(created != nullptr) { 
        delete created;
    }
}

SWGUserEvent*
SWGUserEvent::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
SWGUserEvent::fromJsonObject(QJsonObject pJson) {
    ::Swagger::setValue(&id, pJson["id"], "double", "");
    
    ::Swagger::setValue(&type, pJson["type"], "QString", "QString");
    
    ::Swagger::setValue(&status, pJson["status"], "QString", "QString");
    
    ::Swagger::setValue(&user_id, pJson["userId"], "double", "");
    
    ::Swagger::setValue(&created_by_id, pJson["createdById"], "double", "");
    
    ::Swagger::setValue(&ip, pJson["ip"], "QString", "QString");
    
    ::Swagger::setValue(&geoip_country, pJson["geoipCountry"], "QString", "QString");
    
    ::Swagger::setValue(&geoip_region, pJson["geoipRegion"], "QString", "QString");
    
    ::Swagger::setValue(&geoip_sub_region, pJson["geoipSubRegion"], "QString", "QString");
    
    ::Swagger::setValue(&event_meta, pJson["eventMeta"], "SWGObject", "SWGObject");
    
    ::Swagger::setValue(&created, pJson["created"], "QDateTime", "QDateTime");
    
}

QString
SWGUserEvent::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
SWGUserEvent::asJsonObject() {
    QJsonObject obj;
    if(m_id_isSet){
        obj.insert("id", QJsonValue(id));
    }
    if(type != nullptr && *type != QString("")){
        toJsonValue(QString("type"), type, obj, QString("QString"));
    }
    if(status != nullptr && *status != QString("")){
        toJsonValue(QString("status"), status, obj, QString("QString"));
    }
    if(m_user_id_isSet){
        obj.insert("userId", QJsonValue(user_id));
    }
    if(m_created_by_id_isSet){
        obj.insert("createdById", QJsonValue(created_by_id));
    }
    if(ip != nullptr && *ip != QString("")){
        toJsonValue(QString("ip"), ip, obj, QString("QString"));
    }
    if(geoip_country != nullptr && *geoip_country != QString("")){
        toJsonValue(QString("geoipCountry"), geoip_country, obj, QString("QString"));
    }
    if(geoip_region != nullptr && *geoip_region != QString("")){
        toJsonValue(QString("geoipRegion"), geoip_region, obj, QString("QString"));
    }
    if(geoip_sub_region != nullptr && *geoip_sub_region != QString("")){
        toJsonValue(QString("geoipSubRegion"), geoip_sub_region, obj, QString("QString"));
    }
    if((event_meta != nullptr) && (event_meta->isSet())){
        toJsonValue(QString("eventMeta"), event_meta, obj, QString("SWGObject"));
    }
    if(created != nullptr) { 
        toJsonValue(QString("created"), created, obj, QString("QDateTime"));
    }

    return obj;
}

double
SWGUserEvent::getId() {
    return id;
}
void
SWGUserEvent::setId(double id) {
    this->id = id;
    this->m_id_isSet = true;
}

QString*
SWGUserEvent::getType() {
    return type;
}
void
SWGUserEvent::setType(QString* type) {
    this->type = type;
    this->m_type_isSet = true;
}

QString*
SWGUserEvent::getStatus() {
    return status;
}
void
SWGUserEvent::setStatus(QString* status) {
    this->status = status;
    this->m_status_isSet = true;
}

double
SWGUserEvent::getUserId() {
    return user_id;
}
void
SWGUserEvent::setUserId(double user_id) {
    this->user_id = user_id;
    this->m_user_id_isSet = true;
}

double
SWGUserEvent::getCreatedById() {
    return created_by_id;
}
void
SWGUserEvent::setCreatedById(double created_by_id) {
    this->created_by_id = created_by_id;
    this->m_created_by_id_isSet = true;
}

QString*
SWGUserEvent::getIp() {
    return ip;
}
void
SWGUserEvent::setIp(QString* ip) {
    this->ip = ip;
    this->m_ip_isSet = true;
}

QString*
SWGUserEvent::getGeoipCountry() {
    return geoip_country;
}
void
SWGUserEvent::setGeoipCountry(QString* geoip_country) {
    this->geoip_country = geoip_country;
    this->m_geoip_country_isSet = true;
}

QString*
SWGUserEvent::getGeoipRegion() {
    return geoip_region;
}
void
SWGUserEvent::setGeoipRegion(QString* geoip_region) {
    this->geoip_region = geoip_region;
    this->m_geoip_region_isSet = true;
}

QString*
SWGUserEvent::getGeoipSubRegion() {
    return geoip_sub_region;
}
void
SWGUserEvent::setGeoipSubRegion(QString* geoip_sub_region) {
    this->geoip_sub_region = geoip_sub_region;
    this->m_geoip_sub_region_isSet = true;
}

SWGObject*
SWGUserEvent::getEventMeta() {
    return event_meta;
}
void
SWGUserEvent::setEventMeta(SWGObject* event_meta) {
    this->event_meta = event_meta;
    this->m_event_meta_isSet = true;
}

QDateTime*
SWGUserEvent::getCreated() {
    return created;
}
void
SWGUserEvent::setCreated(QDateTime* created) {
    this->created = created;
    this->m_created_isSet = true;
}


bool
SWGUserEvent::isSet(){
    bool isObjectUpdated = false;
    do{
        if(m_id_isSet){ isObjectUpdated = true; break;}
        if(type != nullptr && *type != QString("")){ isObjectUpdated = true; break;}
        if(status != nullptr && *status != QString("")){ isObjectUpdated = true; break;}
        if(m_user_id_isSet){ isObjectUpdated = true; break;}
        if(m_created_by_id_isSet){ isObjectUpdated = true; break;}
        if(ip != nullptr && *ip != QString("")){ isObjectUpdated = true; break;}
        if(geoip_country != nullptr && *geoip_country != QString("")){ isObjectUpdated = true; break;}
        if(geoip_region != nullptr && *geoip_region != QString("")){ isObjectUpdated = true; break;}
        if(geoip_sub_region != nullptr && *geoip_sub_region != QString("")){ isObjectUpdated = true; break;}
        if(event_meta != nullptr && event_meta->isSet()){ isObjectUpdated = true; break;}
        
    }while(false);
    return isObjectUpdated;
}
}

