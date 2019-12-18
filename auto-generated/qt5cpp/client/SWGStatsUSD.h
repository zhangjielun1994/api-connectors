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

/*
 * SWGStatsUSD.h
 *
 * 
 */

#ifndef SWGStatsUSD_H_
#define SWGStatsUSD_H_

#include <QJsonObject>


#include "SWGNumber.h"
#include <QString>

#include "SWGObject.h"

namespace Swagger {

class SWGStatsUSD: public SWGObject {
public:
    SWGStatsUSD();
    SWGStatsUSD(QString json);
    ~SWGStatsUSD();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGStatsUSD* fromJson(QString jsonString) override;

    QString* getRootSymbol();
    void setRootSymbol(QString* root_symbol);

    QString* getCurrency();
    void setCurrency(QString* currency);

    SWGNumber* getTurnover24h();
    void setTurnover24h(SWGNumber* turnover24h);

    SWGNumber* getTurnover30d();
    void setTurnover30d(SWGNumber* turnover30d);

    SWGNumber* getTurnover365d();
    void setTurnover365d(SWGNumber* turnover365d);

    SWGNumber* getTurnover();
    void setTurnover(SWGNumber* turnover);


    virtual bool isSet() override;

private:
    QString* root_symbol;
    bool m_root_symbol_isSet;

    QString* currency;
    bool m_currency_isSet;

    SWGNumber* turnover24h;
    bool m_turnover24h_isSet;

    SWGNumber* turnover30d;
    bool m_turnover30d_isSet;

    SWGNumber* turnover365d;
    bool m_turnover365d_isSet;

    SWGNumber* turnover;
    bool m_turnover_isSet;

};

}

#endif /* SWGStatsUSD_H_ */
