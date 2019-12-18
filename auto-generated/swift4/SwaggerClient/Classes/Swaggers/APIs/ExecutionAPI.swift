//
// ExecutionAPI.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation
import Alamofire



open class ExecutionAPI {
    /**
     Get all raw executions for your account.
     
     - parameter symbol: (query) Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;. (optional)
     - parameter filter: (query) Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details. (optional)
     - parameter columns: (query) Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect. (optional)
     - parameter count: (query) Number of results to fetch. (optional, default to 100)
     - parameter start: (query) Starting point for results. (optional, default to 0)
     - parameter reverse: (query) If true, will sort results newest first. (optional, default to false)
     - parameter startTime: (query) Starting date filter for results. (optional)
     - parameter endTime: (query) Ending date filter for results. (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func executionGet(symbol: String? = nil, filter: String? = nil, columns: String? = nil, count: Double? = nil, start: Double? = nil, reverse: Bool? = nil, startTime: Date? = nil, endTime: Date? = nil, completion: @escaping ((_ data: [Execution]?,_ error: Error?) -> Void)) {
        executionGetWithRequestBuilder(symbol: symbol, filter: filter, columns: columns, count: count, start: start, reverse: reverse, startTime: startTime, endTime: endTime).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     Get all raw executions for your account.
     - GET /execution
     - This returns all raw transactions, which includes order opening and cancelation, and order status changes. It can be quite noisy. More focused information is available at `/execution/tradeHistory`.  You may also use the `filter` param to target your query. Specify an array as a filter value, such as `{\"execType\": [\"Settlement\", \"Trade\"]}` to filter on multiple values.  See [the FIX Spec](http://www.onixs.biz/fix-dictionary/5.0.SP2/msgType_8_8.html) for explanations of these fields. 
     - API Key:
       - type: apiKey api-expires 
       - name: apiExpires
     - API Key:
       - type: apiKey api-key 
       - name: apiKey
     - API Key:
       - type: apiKey api-signature 
       - name: apiSignature
     - examples: [{contentType=application/json, example=[ {
  "symbol" : "symbol",
  "triggered" : "triggered",
  "clOrdLinkID" : "clOrdLinkID",
  "execInst" : "execInst",
  "homeNotional" : 4.965218492984954,
  "pegOffsetValue" : 2.027123023002322,
  "pegPriceType" : "pegPriceType",
  "execID" : "execID",
  "contingencyType" : "contingencyType",
  "foreignNotional" : 5.025004791520295,
  "lastMkt" : "lastMkt",
  "simpleCumQty" : 1.2315135367772556,
  "execCost" : 7.4577447736837658709418974467553198337554931640625,
  "execComm" : 1.173074250955943309548956676735542714595794677734375,
  "settlCurrency" : "settlCurrency",
  "ordRejReason" : "ordRejReason",
  "price" : 7.061401241503109,
  "trdMatchID" : "trdMatchID",
  "orderQty" : 2.3021358869347654518833223846741020679473876953125,
  "currency" : "currency",
  "commission" : 6.84685269835264,
  "text" : "text",
  "execType" : "execType",
  "timeInForce" : "timeInForce",
  "timestamp" : "2000-01-23T04:56:07.000+00:00",
  "ordStatus" : "ordStatus",
  "side" : "side",
  "simpleOrderQty" : 5.637376656633329,
  "orderID" : "orderID",
  "lastPx" : 1.4658129805029452,
  "leavesQty" : 7.3862819483858839220147274318151175975799560546875,
  "cumQty" : 1.024645700144157789424070870154537260532379150390625,
  "tradePublishIndicator" : "tradePublishIndicator",
  "displayQty" : 9.301444243932575517419536481611430644989013671875,
  "simpleLeavesQty" : 4.145608029883936,
  "clOrdID" : "clOrdID",
  "lastQty" : 6.02745618307040320615897144307382404804229736328125,
  "avgPx" : 1.4894159098541704,
  "multiLegReportingType" : "multiLegReportingType",
  "workingIndicator" : true,
  "lastLiquidityInd" : "lastLiquidityInd",
  "transactTime" : "2000-01-23T04:56:07.000+00:00",
  "exDestination" : "exDestination",
  "account" : 0.80082819046101150206595775671303272247314453125,
  "underlyingLastPx" : 5.962133916683182,
  "stopPx" : 3.616076749251911,
  "ordType" : "ordType"
}, {
  "symbol" : "symbol",
  "triggered" : "triggered",
  "clOrdLinkID" : "clOrdLinkID",
  "execInst" : "execInst",
  "homeNotional" : 4.965218492984954,
  "pegOffsetValue" : 2.027123023002322,
  "pegPriceType" : "pegPriceType",
  "execID" : "execID",
  "contingencyType" : "contingencyType",
  "foreignNotional" : 5.025004791520295,
  "lastMkt" : "lastMkt",
  "simpleCumQty" : 1.2315135367772556,
  "execCost" : 7.4577447736837658709418974467553198337554931640625,
  "execComm" : 1.173074250955943309548956676735542714595794677734375,
  "settlCurrency" : "settlCurrency",
  "ordRejReason" : "ordRejReason",
  "price" : 7.061401241503109,
  "trdMatchID" : "trdMatchID",
  "orderQty" : 2.3021358869347654518833223846741020679473876953125,
  "currency" : "currency",
  "commission" : 6.84685269835264,
  "text" : "text",
  "execType" : "execType",
  "timeInForce" : "timeInForce",
  "timestamp" : "2000-01-23T04:56:07.000+00:00",
  "ordStatus" : "ordStatus",
  "side" : "side",
  "simpleOrderQty" : 5.637376656633329,
  "orderID" : "orderID",
  "lastPx" : 1.4658129805029452,
  "leavesQty" : 7.3862819483858839220147274318151175975799560546875,
  "cumQty" : 1.024645700144157789424070870154537260532379150390625,
  "tradePublishIndicator" : "tradePublishIndicator",
  "displayQty" : 9.301444243932575517419536481611430644989013671875,
  "simpleLeavesQty" : 4.145608029883936,
  "clOrdID" : "clOrdID",
  "lastQty" : 6.02745618307040320615897144307382404804229736328125,
  "avgPx" : 1.4894159098541704,
  "multiLegReportingType" : "multiLegReportingType",
  "workingIndicator" : true,
  "lastLiquidityInd" : "lastLiquidityInd",
  "transactTime" : "2000-01-23T04:56:07.000+00:00",
  "exDestination" : "exDestination",
  "account" : 0.80082819046101150206595775671303272247314453125,
  "underlyingLastPx" : 5.962133916683182,
  "stopPx" : 3.616076749251911,
  "ordType" : "ordType"
} ]}]
     
     - parameter symbol: (query) Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;. (optional)
     - parameter filter: (query) Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details. (optional)
     - parameter columns: (query) Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect. (optional)
     - parameter count: (query) Number of results to fetch. (optional, default to 100)
     - parameter start: (query) Starting point for results. (optional, default to 0)
     - parameter reverse: (query) If true, will sort results newest first. (optional, default to false)
     - parameter startTime: (query) Starting date filter for results. (optional)
     - parameter endTime: (query) Ending date filter for results. (optional)

     - returns: RequestBuilder<[Execution]> 
     */
    open class func executionGetWithRequestBuilder(symbol: String? = nil, filter: String? = nil, columns: String? = nil, count: Double? = nil, start: Double? = nil, reverse: Bool? = nil, startTime: Date? = nil, endTime: Date? = nil) -> RequestBuilder<[Execution]> {
        let path = "/execution"
        let URLString = SwaggerClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        var url = URLComponents(string: URLString)
        url?.queryItems = APIHelper.mapValuesToQueryItems([
            "symbol": symbol, 
            "filter": filter, 
            "columns": columns, 
            "count": count, 
            "start": start, 
            "reverse": reverse, 
            "startTime": startTime?.encodeToJSON(), 
            "endTime": endTime?.encodeToJSON()
        ])

        let requestBuilder: RequestBuilder<[Execution]>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

    /**
     Get all balance-affecting executions. This includes each trade, insurance charge, and settlement.
     
     - parameter symbol: (query) Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;. (optional)
     - parameter filter: (query) Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details. (optional)
     - parameter columns: (query) Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect. (optional)
     - parameter count: (query) Number of results to fetch. (optional, default to 100)
     - parameter start: (query) Starting point for results. (optional, default to 0)
     - parameter reverse: (query) If true, will sort results newest first. (optional, default to false)
     - parameter startTime: (query) Starting date filter for results. (optional)
     - parameter endTime: (query) Ending date filter for results. (optional)
     - parameter completion: completion handler to receive the data and the error objects
     */
    open class func executionGetTradeHistory(symbol: String? = nil, filter: String? = nil, columns: String? = nil, count: Double? = nil, start: Double? = nil, reverse: Bool? = nil, startTime: Date? = nil, endTime: Date? = nil, completion: @escaping ((_ data: [Execution]?,_ error: Error?) -> Void)) {
        executionGetTradeHistoryWithRequestBuilder(symbol: symbol, filter: filter, columns: columns, count: count, start: start, reverse: reverse, startTime: startTime, endTime: endTime).execute { (response, error) -> Void in
            completion(response?.body, error)
        }
    }


    /**
     Get all balance-affecting executions. This includes each trade, insurance charge, and settlement.
     - GET /execution/tradeHistory
     - API Key:
       - type: apiKey api-expires 
       - name: apiExpires
     - API Key:
       - type: apiKey api-key 
       - name: apiKey
     - API Key:
       - type: apiKey api-signature 
       - name: apiSignature
     - examples: [{contentType=application/json, example=[ {
  "symbol" : "symbol",
  "triggered" : "triggered",
  "clOrdLinkID" : "clOrdLinkID",
  "execInst" : "execInst",
  "homeNotional" : 4.965218492984954,
  "pegOffsetValue" : 2.027123023002322,
  "pegPriceType" : "pegPriceType",
  "execID" : "execID",
  "contingencyType" : "contingencyType",
  "foreignNotional" : 5.025004791520295,
  "lastMkt" : "lastMkt",
  "simpleCumQty" : 1.2315135367772556,
  "execCost" : 7.4577447736837658709418974467553198337554931640625,
  "execComm" : 1.173074250955943309548956676735542714595794677734375,
  "settlCurrency" : "settlCurrency",
  "ordRejReason" : "ordRejReason",
  "price" : 7.061401241503109,
  "trdMatchID" : "trdMatchID",
  "orderQty" : 2.3021358869347654518833223846741020679473876953125,
  "currency" : "currency",
  "commission" : 6.84685269835264,
  "text" : "text",
  "execType" : "execType",
  "timeInForce" : "timeInForce",
  "timestamp" : "2000-01-23T04:56:07.000+00:00",
  "ordStatus" : "ordStatus",
  "side" : "side",
  "simpleOrderQty" : 5.637376656633329,
  "orderID" : "orderID",
  "lastPx" : 1.4658129805029452,
  "leavesQty" : 7.3862819483858839220147274318151175975799560546875,
  "cumQty" : 1.024645700144157789424070870154537260532379150390625,
  "tradePublishIndicator" : "tradePublishIndicator",
  "displayQty" : 9.301444243932575517419536481611430644989013671875,
  "simpleLeavesQty" : 4.145608029883936,
  "clOrdID" : "clOrdID",
  "lastQty" : 6.02745618307040320615897144307382404804229736328125,
  "avgPx" : 1.4894159098541704,
  "multiLegReportingType" : "multiLegReportingType",
  "workingIndicator" : true,
  "lastLiquidityInd" : "lastLiquidityInd",
  "transactTime" : "2000-01-23T04:56:07.000+00:00",
  "exDestination" : "exDestination",
  "account" : 0.80082819046101150206595775671303272247314453125,
  "underlyingLastPx" : 5.962133916683182,
  "stopPx" : 3.616076749251911,
  "ordType" : "ordType"
}, {
  "symbol" : "symbol",
  "triggered" : "triggered",
  "clOrdLinkID" : "clOrdLinkID",
  "execInst" : "execInst",
  "homeNotional" : 4.965218492984954,
  "pegOffsetValue" : 2.027123023002322,
  "pegPriceType" : "pegPriceType",
  "execID" : "execID",
  "contingencyType" : "contingencyType",
  "foreignNotional" : 5.025004791520295,
  "lastMkt" : "lastMkt",
  "simpleCumQty" : 1.2315135367772556,
  "execCost" : 7.4577447736837658709418974467553198337554931640625,
  "execComm" : 1.173074250955943309548956676735542714595794677734375,
  "settlCurrency" : "settlCurrency",
  "ordRejReason" : "ordRejReason",
  "price" : 7.061401241503109,
  "trdMatchID" : "trdMatchID",
  "orderQty" : 2.3021358869347654518833223846741020679473876953125,
  "currency" : "currency",
  "commission" : 6.84685269835264,
  "text" : "text",
  "execType" : "execType",
  "timeInForce" : "timeInForce",
  "timestamp" : "2000-01-23T04:56:07.000+00:00",
  "ordStatus" : "ordStatus",
  "side" : "side",
  "simpleOrderQty" : 5.637376656633329,
  "orderID" : "orderID",
  "lastPx" : 1.4658129805029452,
  "leavesQty" : 7.3862819483858839220147274318151175975799560546875,
  "cumQty" : 1.024645700144157789424070870154537260532379150390625,
  "tradePublishIndicator" : "tradePublishIndicator",
  "displayQty" : 9.301444243932575517419536481611430644989013671875,
  "simpleLeavesQty" : 4.145608029883936,
  "clOrdID" : "clOrdID",
  "lastQty" : 6.02745618307040320615897144307382404804229736328125,
  "avgPx" : 1.4894159098541704,
  "multiLegReportingType" : "multiLegReportingType",
  "workingIndicator" : true,
  "lastLiquidityInd" : "lastLiquidityInd",
  "transactTime" : "2000-01-23T04:56:07.000+00:00",
  "exDestination" : "exDestination",
  "account" : 0.80082819046101150206595775671303272247314453125,
  "underlyingLastPx" : 5.962133916683182,
  "stopPx" : 3.616076749251911,
  "ordType" : "ordType"
} ]}]
     
     - parameter symbol: (query) Instrument symbol. Send a bare series (e.g. XBT) to get data for the nearest expiring contract in that series.  You can also send a timeframe, e.g. &#x60;XBT:quarterly&#x60;. Timeframes are &#x60;nearest&#x60;, &#x60;daily&#x60;, &#x60;weekly&#x60;, &#x60;monthly&#x60;, &#x60;quarterly&#x60;, &#x60;biquarterly&#x60;, and &#x60;perpetual&#x60;. (optional)
     - parameter filter: (query) Generic table filter. Send JSON key/value pairs, such as &#x60;{\&quot;key\&quot;: \&quot;value\&quot;}&#x60;. You can key on individual fields, and do more advanced querying on timestamps. See the [Timestamp Docs](https://www.bitmex.com/app/restAPI#Timestamp-Filters) for more details. (optional)
     - parameter columns: (query) Array of column names to fetch. If omitted, will return all columns.  Note that this method will always return item keys, even when not specified, so you may receive more columns that you expect. (optional)
     - parameter count: (query) Number of results to fetch. (optional, default to 100)
     - parameter start: (query) Starting point for results. (optional, default to 0)
     - parameter reverse: (query) If true, will sort results newest first. (optional, default to false)
     - parameter startTime: (query) Starting date filter for results. (optional)
     - parameter endTime: (query) Ending date filter for results. (optional)

     - returns: RequestBuilder<[Execution]> 
     */
    open class func executionGetTradeHistoryWithRequestBuilder(symbol: String? = nil, filter: String? = nil, columns: String? = nil, count: Double? = nil, start: Double? = nil, reverse: Bool? = nil, startTime: Date? = nil, endTime: Date? = nil) -> RequestBuilder<[Execution]> {
        let path = "/execution/tradeHistory"
        let URLString = SwaggerClientAPI.basePath + path
        let parameters: [String:Any]? = nil
        
        var url = URLComponents(string: URLString)
        url?.queryItems = APIHelper.mapValuesToQueryItems([
            "symbol": symbol, 
            "filter": filter, 
            "columns": columns, 
            "count": count, 
            "start": start, 
            "reverse": reverse, 
            "startTime": startTime?.encodeToJSON(), 
            "endTime": endTime?.encodeToJSON()
        ])

        let requestBuilder: RequestBuilder<[Execution]>.Type = SwaggerClientAPI.requestBuilderFactory.getBuilder()

        return requestBuilder.init(method: "GET", URLString: (url?.string ?? URLString), parameters: parameters, isBody: false)
    }

}
