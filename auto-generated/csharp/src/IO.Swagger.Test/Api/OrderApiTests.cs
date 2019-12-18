/* 
 * BitMEX API
 *
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */

using System;
using System.IO;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Linq;
using System.Reflection;
using RestSharp;
using NUnit.Framework;

using IO.Swagger.Client;
using IO.Swagger.Api;
using IO.Swagger.Model;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing OrderApi
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the API endpoint.
    /// </remarks>
    [TestFixture]
    public class OrderApiTests
    {
        private OrderApi instance;

        /// <summary>
        /// Setup before each unit test
        /// </summary>
        [SetUp]
        public void Init()
        {
            instance = new OrderApi();
        }

        /// <summary>
        /// Clean up after each unit test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of OrderApi
        /// </summary>
        [Test]
        public void InstanceTest()
        {
            // TODO uncomment below to test 'IsInstanceOfType' OrderApi
            //Assert.IsInstanceOfType(typeof(OrderApi), instance, "instance is a OrderApi");
        }

        
        /// <summary>
        /// Test OrderAmend
        /// </summary>
        [Test]
        public void OrderAmendTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string orderID = null;
            //string origClOrdID = null;
            //string clOrdID = null;
            //double? simpleOrderQty = null;
            //decimal? orderQty = null;
            //double? simpleLeavesQty = null;
            //decimal? leavesQty = null;
            //double? price = null;
            //double? stopPx = null;
            //double? pegOffsetValue = null;
            //string text = null;
            //var response = instance.OrderAmend(orderID, origClOrdID, clOrdID, simpleOrderQty, orderQty, simpleLeavesQty, leavesQty, price, stopPx, pegOffsetValue, text);
            //Assert.IsInstanceOf<Order> (response, "response is Order");
        }
        
        /// <summary>
        /// Test OrderAmendBulk
        /// </summary>
        [Test]
        public void OrderAmendBulkTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string orders = null;
            //var response = instance.OrderAmendBulk(orders);
            //Assert.IsInstanceOf<List<Order>> (response, "response is List<Order>");
        }
        
        /// <summary>
        /// Test OrderCancel
        /// </summary>
        [Test]
        public void OrderCancelTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string orderID = null;
            //string clOrdID = null;
            //string text = null;
            //var response = instance.OrderCancel(orderID, clOrdID, text);
            //Assert.IsInstanceOf<List<Order>> (response, "response is List<Order>");
        }
        
        /// <summary>
        /// Test OrderCancelAll
        /// </summary>
        [Test]
        public void OrderCancelAllTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string symbol = null;
            //string filter = null;
            //string text = null;
            //var response = instance.OrderCancelAll(symbol, filter, text);
            //Assert.IsInstanceOf<List<Order>> (response, "response is List<Order>");
        }
        
        /// <summary>
        /// Test OrderCancelAllAfter
        /// </summary>
        [Test]
        public void OrderCancelAllAfterTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //double? timeout = null;
            //var response = instance.OrderCancelAllAfter(timeout);
            //Assert.IsInstanceOf<Object> (response, "response is Object");
        }
        
        /// <summary>
        /// Test OrderClosePosition
        /// </summary>
        [Test]
        public void OrderClosePositionTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string symbol = null;
            //double? price = null;
            //var response = instance.OrderClosePosition(symbol, price);
            //Assert.IsInstanceOf<Order> (response, "response is Order");
        }
        
        /// <summary>
        /// Test OrderGetOrders
        /// </summary>
        [Test]
        public void OrderGetOrdersTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string symbol = null;
            //string filter = null;
            //string columns = null;
            //decimal? count = null;
            //decimal? start = null;
            //bool? reverse = null;
            //DateTime? startTime = null;
            //DateTime? endTime = null;
            //var response = instance.OrderGetOrders(symbol, filter, columns, count, start, reverse, startTime, endTime);
            //Assert.IsInstanceOf<List<Order>> (response, "response is List<Order>");
        }
        
        /// <summary>
        /// Test OrderNew
        /// </summary>
        [Test]
        public void OrderNewTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string symbol = null;
            //string side = null;
            //double? simpleOrderQty = null;
            //decimal? orderQty = null;
            //double? price = null;
            //decimal? displayQty = null;
            //double? stopPx = null;
            //string clOrdID = null;
            //string clOrdLinkID = null;
            //double? pegOffsetValue = null;
            //string pegPriceType = null;
            //string ordType = null;
            //string timeInForce = null;
            //string execInst = null;
            //string contingencyType = null;
            //string text = null;
            //var response = instance.OrderNew(symbol, side, simpleOrderQty, orderQty, price, displayQty, stopPx, clOrdID, clOrdLinkID, pegOffsetValue, pegPriceType, ordType, timeInForce, execInst, contingencyType, text);
            //Assert.IsInstanceOf<Order> (response, "response is Order");
        }
        
        /// <summary>
        /// Test OrderNewBulk
        /// </summary>
        [Test]
        public void OrderNewBulkTest()
        {
            // TODO uncomment below to test the method and replace null with proper value
            //string orders = null;
            //var response = instance.OrderNewBulk(orders);
            //Assert.IsInstanceOf<List<Order>> (response, "response is List<Order>");
        }
        
    }

}
