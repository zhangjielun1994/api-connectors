/* 
 * BitMEX API
 *
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 */


using NUnit.Framework;

using System;
using System.Linq;
using System.IO;
using System.Collections.Generic;
using IO.Swagger.Api;
using IO.Swagger.Model;
using IO.Swagger.Client;
using System.Reflection;
using Newtonsoft.Json;

namespace IO.Swagger.Test
{
    /// <summary>
    ///  Class for testing UserEvent
    /// </summary>
    /// <remarks>
    /// This file is automatically generated by Swagger Codegen.
    /// Please update the test case below to test the model.
    /// </remarks>
    [TestFixture]
    public class UserEventTests
    {
        // TODO uncomment below to declare an instance variable for UserEvent
        //private UserEvent instance;

        /// <summary>
        /// Setup before each test
        /// </summary>
        [SetUp]
        public void Init()
        {
            // TODO uncomment below to create an instance of UserEvent
            //instance = new UserEvent();
        }

        /// <summary>
        /// Clean up after each test
        /// </summary>
        [TearDown]
        public void Cleanup()
        {

        }

        /// <summary>
        /// Test an instance of UserEvent
        /// </summary>
        [Test]
        public void UserEventInstanceTest()
        {
            // TODO uncomment below to test "IsInstanceOfType" UserEvent
            //Assert.IsInstanceOfType<UserEvent> (instance, "variable 'instance' is a UserEvent");
        }


        /// <summary>
        /// Test the property 'Id'
        /// </summary>
        [Test]
        public void IdTest()
        {
            // TODO unit test for the property 'Id'
        }
        /// <summary>
        /// Test the property 'Type'
        /// </summary>
        [Test]
        public void TypeTest()
        {
            // TODO unit test for the property 'Type'
        }
        /// <summary>
        /// Test the property 'Status'
        /// </summary>
        [Test]
        public void StatusTest()
        {
            // TODO unit test for the property 'Status'
        }
        /// <summary>
        /// Test the property 'UserId'
        /// </summary>
        [Test]
        public void UserIdTest()
        {
            // TODO unit test for the property 'UserId'
        }
        /// <summary>
        /// Test the property 'CreatedById'
        /// </summary>
        [Test]
        public void CreatedByIdTest()
        {
            // TODO unit test for the property 'CreatedById'
        }
        /// <summary>
        /// Test the property 'Ip'
        /// </summary>
        [Test]
        public void IpTest()
        {
            // TODO unit test for the property 'Ip'
        }
        /// <summary>
        /// Test the property 'GeoipCountry'
        /// </summary>
        [Test]
        public void GeoipCountryTest()
        {
            // TODO unit test for the property 'GeoipCountry'
        }
        /// <summary>
        /// Test the property 'GeoipRegion'
        /// </summary>
        [Test]
        public void GeoipRegionTest()
        {
            // TODO unit test for the property 'GeoipRegion'
        }
        /// <summary>
        /// Test the property 'GeoipSubRegion'
        /// </summary>
        [Test]
        public void GeoipSubRegionTest()
        {
            // TODO unit test for the property 'GeoipSubRegion'
        }
        /// <summary>
        /// Test the property 'EventMeta'
        /// </summary>
        [Test]
        public void EventMetaTest()
        {
            // TODO unit test for the property 'EventMeta'
        }
        /// <summary>
        /// Test the property 'Created'
        /// </summary>
        [Test]
        public void CreatedTest()
        {
            // TODO unit test for the property 'Created'
        }

    }

}
