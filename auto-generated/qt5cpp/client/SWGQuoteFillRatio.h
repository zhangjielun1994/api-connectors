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
 * SWGQuoteFillRatio.h
 *
 * Daily Quote Fill Ratio Statistic
 */

#ifndef SWGQuoteFillRatio_H_
#define SWGQuoteFillRatio_H_

#include <QJsonObject>


#include <QDateTime>

#include "SWGObject.h"

namespace Swagger {

class SWGQuoteFillRatio: public SWGObject {
public:
    SWGQuoteFillRatio();
    SWGQuoteFillRatio(QString json);
    ~SWGQuoteFillRatio();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    SWGQuoteFillRatio* fromJson(QString jsonString) override;

    QDateTime* getDate();
    void setDate(QDateTime* date);

    double getAccount();
    void setAccount(double account);

    double getQuoteCount();
    void setQuoteCount(double quote_count);

    double getDealtCount();
    void setDealtCount(double dealt_count);

    double getQuotesMavg7();
    void setQuotesMavg7(double quotes_mavg7);

    double getDealtMavg7();
    void setDealtMavg7(double dealt_mavg7);

    double getQuoteFillRatioMavg7();
    void setQuoteFillRatioMavg7(double quote_fill_ratio_mavg7);


    virtual bool isSet() override;

private:
    QDateTime* date;
    bool m_date_isSet;

    double account;
    bool m_account_isSet;

    double quote_count;
    bool m_quote_count_isSet;

    double dealt_count;
    bool m_dealt_count_isSet;

    double quotes_mavg7;
    bool m_quotes_mavg7_isSet;

    double dealt_mavg7;
    bool m_dealt_mavg7_isSet;

    double quote_fill_ratio_mavg7;
    bool m_quote_fill_ratio_mavg7_isSet;

};

}

#endif /* SWGQuoteFillRatio_H_ */
