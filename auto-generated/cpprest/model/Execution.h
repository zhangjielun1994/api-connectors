/**
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.4.11-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Execution.h
 *
 * Raw Order and Balance Data
 */

#ifndef IO_SWAGGER_CLIENT_MODEL_Execution_H_
#define IO_SWAGGER_CLIENT_MODEL_Execution_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// Raw Order and Balance Data
/// </summary>
class  Execution
    : public ModelBase
{
public:
    Execution();
    virtual ~Execution();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Execution members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getExecID() const;
        void setExecID(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrderID() const;
    bool orderIDIsSet() const;
    void unsetOrderID();
    void setOrderID(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClOrdID() const;
    bool clOrdIDIsSet() const;
    void unsetClOrdID();
    void setClOrdID(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getClOrdLinkID() const;
    bool clOrdLinkIDIsSet() const;
    void unsetClOrdLinkID();
    void setClOrdLinkID(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getAccount() const;
    bool accountIsSet() const;
    void unsetAccount();
    void setAccount(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSymbol() const;
    bool symbolIsSet() const;
    void unsetSymbol();
    void setSymbol(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSide() const;
    bool sideIsSet() const;
    void unsetSide();
    void setSide(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getLastQty() const;
    bool lastQtyIsSet() const;
    void unsetLastQty();
    void setLastQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getLastPx() const;
    bool lastPxIsSet() const;
    void unsetLastPx();
    void setLastPx(double value);
    /// <summary>
    /// 
    /// </summary>
    double getUnderlyingLastPx() const;
    bool underlyingLastPxIsSet() const;
    void unsetUnderlyingLastPx();
    void setUnderlyingLastPx(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastMkt() const;
    bool lastMktIsSet() const;
    void unsetLastMkt();
    void setLastMkt(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getLastLiquidityInd() const;
    bool lastLiquidityIndIsSet() const;
    void unsetLastLiquidityInd();
    void setLastLiquidityInd(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getSimpleOrderQty() const;
    bool simpleOrderQtyIsSet() const;
    void unsetSimpleOrderQty();
    void setSimpleOrderQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOrderQty() const;
    bool orderQtyIsSet() const;
    void unsetOrderQty();
    void setOrderQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();
    void setPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getDisplayQty() const;
    bool displayQtyIsSet() const;
    void unsetDisplayQty();
    void setDisplayQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getStopPx() const;
    bool stopPxIsSet() const;
    void unsetStopPx();
    void setStopPx(double value);
    /// <summary>
    /// 
    /// </summary>
    double getPegOffsetValue() const;
    bool pegOffsetValueIsSet() const;
    void unsetPegOffsetValue();
    void setPegOffsetValue(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getPegPriceType() const;
    bool pegPriceTypeIsSet() const;
    void unsetPegPriceType();
    void setPegPriceType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrency() const;
    bool currencyIsSet() const;
    void unsetCurrency();
    void setCurrency(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSettlCurrency() const;
    bool settlCurrencyIsSet() const;
    void unsetSettlCurrency();
    void setSettlCurrency(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getExecType() const;
    bool execTypeIsSet() const;
    void unsetExecType();
    void setExecType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrdType() const;
    bool ordTypeIsSet() const;
    void unsetOrdType();
    void setOrdType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTimeInForce() const;
    bool timeInForceIsSet() const;
    void unsetTimeInForce();
    void setTimeInForce(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getExecInst() const;
    bool execInstIsSet() const;
    void unsetExecInst();
    void setExecInst(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getContingencyType() const;
    bool contingencyTypeIsSet() const;
    void unsetContingencyType();
    void setContingencyType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getExDestination() const;
    bool exDestinationIsSet() const;
    void unsetExDestination();
    void setExDestination(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrdStatus() const;
    bool ordStatusIsSet() const;
    void unsetOrdStatus();
    void setOrdStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTriggered() const;
    bool triggeredIsSet() const;
    void unsetTriggered();
    void setTriggered(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    bool isWorkingIndicator() const;
    bool workingIndicatorIsSet() const;
    void unsetWorkingIndicator();
    void setWorkingIndicator(bool value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getOrdRejReason() const;
    bool ordRejReasonIsSet() const;
    void unsetOrdRejReason();
    void setOrdRejReason(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getSimpleLeavesQty() const;
    bool simpleLeavesQtyIsSet() const;
    void unsetSimpleLeavesQty();
    void setSimpleLeavesQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getLeavesQty() const;
    bool leavesQtyIsSet() const;
    void unsetLeavesQty();
    void setLeavesQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getSimpleCumQty() const;
    bool simpleCumQtyIsSet() const;
    void unsetSimpleCumQty();
    void setSimpleCumQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getCumQty() const;
    bool cumQtyIsSet() const;
    void unsetCumQty();
    void setCumQty(double value);
    /// <summary>
    /// 
    /// </summary>
    double getAvgPx() const;
    bool avgPxIsSet() const;
    void unsetAvgPx();
    void setAvgPx(double value);
    /// <summary>
    /// 
    /// </summary>
    double getCommission() const;
    bool commissionIsSet() const;
    void unsetCommission();
    void setCommission(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTradePublishIndicator() const;
    bool tradePublishIndicatorIsSet() const;
    void unsetTradePublishIndicator();
    void setTradePublishIndicator(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getMultiLegReportingType() const;
    bool multiLegReportingTypeIsSet() const;
    void unsetMultiLegReportingType();
    void setMultiLegReportingType(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getText() const;
    bool textIsSet() const;
    void unsetText();
    void setText(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTrdMatchID() const;
    bool trdMatchIDIsSet() const;
    void unsetTrdMatchID();
    void setTrdMatchID(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getExecCost() const;
    bool execCostIsSet() const;
    void unsetExecCost();
    void setExecCost(double value);
    /// <summary>
    /// 
    /// </summary>
    double getExecComm() const;
    bool execCommIsSet() const;
    void unsetExecComm();
    void setExecComm(double value);
    /// <summary>
    /// 
    /// </summary>
    double getHomeNotional() const;
    bool homeNotionalIsSet() const;
    void unsetHomeNotional();
    void setHomeNotional(double value);
    /// <summary>
    /// 
    /// </summary>
    double getForeignNotional() const;
    bool foreignNotionalIsSet() const;
    void unsetForeignNotional();
    void setForeignNotional(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTransactTime() const;
    bool transactTimeIsSet() const;
    void unsetTransactTime();
    void setTransactTime(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getTimestamp() const;
    bool timestampIsSet() const;
    void unsetTimestamp();
    void setTimestamp(utility::datetime value);

protected:
    utility::string_t m_ExecID;
        utility::string_t m_OrderID;
    bool m_OrderIDIsSet;
    utility::string_t m_ClOrdID;
    bool m_ClOrdIDIsSet;
    utility::string_t m_ClOrdLinkID;
    bool m_ClOrdLinkIDIsSet;
    double m_Account;
    bool m_AccountIsSet;
    utility::string_t m_Symbol;
    bool m_SymbolIsSet;
    utility::string_t m_Side;
    bool m_SideIsSet;
    double m_LastQty;
    bool m_LastQtyIsSet;
    double m_LastPx;
    bool m_LastPxIsSet;
    double m_UnderlyingLastPx;
    bool m_UnderlyingLastPxIsSet;
    utility::string_t m_LastMkt;
    bool m_LastMktIsSet;
    utility::string_t m_LastLiquidityInd;
    bool m_LastLiquidityIndIsSet;
    double m_SimpleOrderQty;
    bool m_SimpleOrderQtyIsSet;
    double m_OrderQty;
    bool m_OrderQtyIsSet;
    double m_Price;
    bool m_PriceIsSet;
    double m_DisplayQty;
    bool m_DisplayQtyIsSet;
    double m_StopPx;
    bool m_StopPxIsSet;
    double m_PegOffsetValue;
    bool m_PegOffsetValueIsSet;
    utility::string_t m_PegPriceType;
    bool m_PegPriceTypeIsSet;
    utility::string_t m_Currency;
    bool m_CurrencyIsSet;
    utility::string_t m_SettlCurrency;
    bool m_SettlCurrencyIsSet;
    utility::string_t m_ExecType;
    bool m_ExecTypeIsSet;
    utility::string_t m_OrdType;
    bool m_OrdTypeIsSet;
    utility::string_t m_TimeInForce;
    bool m_TimeInForceIsSet;
    utility::string_t m_ExecInst;
    bool m_ExecInstIsSet;
    utility::string_t m_ContingencyType;
    bool m_ContingencyTypeIsSet;
    utility::string_t m_ExDestination;
    bool m_ExDestinationIsSet;
    utility::string_t m_OrdStatus;
    bool m_OrdStatusIsSet;
    utility::string_t m_Triggered;
    bool m_TriggeredIsSet;
    bool m_WorkingIndicator;
    bool m_WorkingIndicatorIsSet;
    utility::string_t m_OrdRejReason;
    bool m_OrdRejReasonIsSet;
    double m_SimpleLeavesQty;
    bool m_SimpleLeavesQtyIsSet;
    double m_LeavesQty;
    bool m_LeavesQtyIsSet;
    double m_SimpleCumQty;
    bool m_SimpleCumQtyIsSet;
    double m_CumQty;
    bool m_CumQtyIsSet;
    double m_AvgPx;
    bool m_AvgPxIsSet;
    double m_Commission;
    bool m_CommissionIsSet;
    utility::string_t m_TradePublishIndicator;
    bool m_TradePublishIndicatorIsSet;
    utility::string_t m_MultiLegReportingType;
    bool m_MultiLegReportingTypeIsSet;
    utility::string_t m_Text;
    bool m_TextIsSet;
    utility::string_t m_TrdMatchID;
    bool m_TrdMatchIDIsSet;
    double m_ExecCost;
    bool m_ExecCostIsSet;
    double m_ExecComm;
    bool m_ExecCommIsSet;
    double m_HomeNotional;
    bool m_HomeNotionalIsSet;
    double m_ForeignNotional;
    bool m_ForeignNotionalIsSet;
    utility::datetime m_TransactTime;
    bool m_TransactTimeIsSet;
    utility::datetime m_Timestamp;
    bool m_TimestampIsSet;
};

}
}
}
}

#endif /* IO_SWAGGER_CLIENT_MODEL_Execution_H_ */
