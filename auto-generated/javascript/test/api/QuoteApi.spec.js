/*
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 *
 * Swagger Codegen version: 2.4.11-SNAPSHOT
 *
 * Do not edit the class manually.
 *
 */

(function(root, factory) {
  if (typeof define === 'function' && define.amd) {
    // AMD.
    define(['expect.js', '../../src/index'], factory);
  } else if (typeof module === 'object' && module.exports) {
    // CommonJS-like environments that support module.exports, like Node.
    factory(require('expect.js'), require('../../src/index'));
  } else {
    // Browser globals (root is window)
    factory(root.expect, root.BitMexApi);
  }
}(this, function(expect, BitMexApi) {
  'use strict';

  var instance;

  beforeEach(function() {
    instance = new BitMexApi.QuoteApi();
  });

  describe('(package)', function() {
    describe('QuoteApi', function() {
      describe('quoteGet', function() {
        it('should call quoteGet successfully', function(done) {
          // TODO: uncomment, update parameter values for quoteGet call and complete the assertions
          /*
          var opts = {};
          opts.symbol = "symbol_example";
          opts.filter = "filter_example";
          opts.columns = "columns_example";
          opts.count = 100;
          opts.start = 0;
          opts.reverse = false;
          opts.startTime = new Date("2013-10-20T19:20:30+01:00");
          opts.endTime = new Date("2013-10-20T19:20:30+01:00");

          instance.quoteGet(opts, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            let dataCtr = data;
            expect(dataCtr).to.be.an(Array);
            expect(dataCtr).to.not.be.empty();
            for (let p in dataCtr) {
              let data = dataCtr[p];
              expect(data).to.be.a(BitMexApi.Quote);
              expect(data.timestamp).to.be.a(Date);
              expect(data.timestamp).to.be(new Date());
              expect(data.symbol).to.be.a('string');
              expect(data.symbol).to.be("");
              expect(data.bidSize).to.be.a('number');
              expect(data.bidSize).to.be();
              expect(data.bidPrice).to.be.a('number');
              expect(data.bidPrice).to.be(0.0);
              expect(data.askPrice).to.be.a('number');
              expect(data.askPrice).to.be(0.0);
              expect(data.askSize).to.be.a('number');
              expect(data.askSize).to.be();
            }

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
      describe('quoteGetBucketed', function() {
        it('should call quoteGetBucketed successfully', function(done) {
          // TODO: uncomment, update parameter values for quoteGetBucketed call and complete the assertions
          /*
          var opts = {};
          opts.binSize = "1m";
          opts.partial = false;
          opts.symbol = "symbol_example";
          opts.filter = "filter_example";
          opts.columns = "columns_example";
          opts.count = 100;
          opts.start = 0;
          opts.reverse = false;
          opts.startTime = new Date("2013-10-20T19:20:30+01:00");
          opts.endTime = new Date("2013-10-20T19:20:30+01:00");

          instance.quoteGetBucketed(opts, function(error, data, response) {
            if (error) {
              done(error);
              return;
            }
            // TODO: update response assertions
            let dataCtr = data;
            expect(dataCtr).to.be.an(Array);
            expect(dataCtr).to.not.be.empty();
            for (let p in dataCtr) {
              let data = dataCtr[p];
              expect(data).to.be.a(BitMexApi.Quote);
              expect(data.timestamp).to.be.a(Date);
              expect(data.timestamp).to.be(new Date());
              expect(data.symbol).to.be.a('string');
              expect(data.symbol).to.be("");
              expect(data.bidSize).to.be.a('number');
              expect(data.bidSize).to.be();
              expect(data.bidPrice).to.be.a('number');
              expect(data.bidPrice).to.be(0.0);
              expect(data.askPrice).to.be.a('number');
              expect(data.askPrice).to.be(0.0);
              expect(data.askSize).to.be.a('number');
              expect(data.askSize).to.be();
            }

            done();
          });
          */
          // TODO: uncomment and complete method invocation above, then delete this line and the next:
          done();
        });
      });
    });
  });

}));
