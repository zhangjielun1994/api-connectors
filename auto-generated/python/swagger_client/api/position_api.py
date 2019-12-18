# coding: utf-8

"""
    BitMEX API

    ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section.   # noqa: E501

    OpenAPI spec version: 1.2.0
    Contact: support@bitmex.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


from __future__ import absolute_import

import re  # noqa: F401

# python 2 and python 3 compatibility library
import six

from swagger_client.api_client import ApiClient


class PositionApi(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    Ref: https://github.com/swagger-api/swagger-codegen
    """

    def __init__(self, api_client=None):
        if api_client is None:
            api_client = ApiClient()
        self.api_client = api_client

    def position_get(self, **kwargs):  # noqa: E501
        """Get your positions.  # noqa: E501

        This endpoint is used for retrieving position information. The fields largely follow the [FIX spec](http://www.onixs.biz/fix-dictionary/5.0.SP2/msgType_AP_6580.html) definitions. Some selected fields are explained in more detail below.  The fields _account_, _symbol_, _currency_ are unique to each position and form its key.  - **account**: Your unique account ID. - **symbol**: The contract for this position. - **currency**: The margin currency for this position. - **underlying**: Meta data of the _symbol_. - **quoteCurrency**: Meta data of the _symbol_, All prices are in the _quoteCurrency_ - **commission**: The maximum of the maker, taker, and settlement fee. - **initMarginReq**: The initial margin requirement. This will be at least the symbol's default initial maintenance margin, but can be higher if you choose lower leverage. - **maintMarginReq**: The maintenance margin requirement. This will be at least the symbol's default maintenance maintenance margin, but can be higher if you choose a higher risk limit. - **riskLimit**: This is a function of your _maintMarginReq_. - **leverage**: 1 / initMarginReq. - **crossMargin**: True/false depending on whether you set cross margin on this position. - **deleveragePercentile**: Indicates where your position is in the ADL queue. - **rebalancedPnl**: The value of realised PNL that has transferred to your wallet for this position. - **prevRealisedPnl**: The value of realised PNL that has transferred to your wallet for this position since the position was closed. - **currentQty**: The current position amount in contracts. - **currentCost**: The current cost of the position in the settlement currency of the symbol (_currency_). - **currentComm**: The current commission of the position in the settlement currency of the symbol (_currency_). - **realisedCost**: The realised cost of this position calculated with regard to average cost accounting. - **unrealisedCost**: _currentCost_ - _realisedCost_. - **grossOpenCost**: The absolute value of your open orders for this symbol. - **grossOpenPremium**: The amount your bidding above the mark price in the settlement currency of the symbol (_currency_). - **markPrice**: The mark price of the symbol in _quoteCurrency_. - **markValue**: The _currentQty_ at the mark price in the settlement currency of the symbol (_currency_). - **homeNotional**: Value of position in units of _underlying_. - **foreignNotional**: Value of position in units of _quoteCurrency_. - **realisedPnl**: The negative of _realisedCost_. - **unrealisedGrossPnl**: _markValue_ - _unrealisedCost_. - **unrealisedPnl**: _unrealisedGrossPnl_. - **liquidationPrice**: Once markPrice reaches this price, this position will be liquidated. - **bankruptPrice**: Once markPrice reaches this price, this position will have no equity.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.position_get(async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str filter: Table filter. For example, send {\"symbol\": \"XBTUSD\"}.
        :param str columns: Which columns to fetch. For example, send [\"columnName\"].
        :param float count: Number of rows to fetch.
        :return: list[Position]
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('async_req'):
            return self.position_get_with_http_info(**kwargs)  # noqa: E501
        else:
            (data) = self.position_get_with_http_info(**kwargs)  # noqa: E501
            return data

    def position_get_with_http_info(self, **kwargs):  # noqa: E501
        """Get your positions.  # noqa: E501

        This endpoint is used for retrieving position information. The fields largely follow the [FIX spec](http://www.onixs.biz/fix-dictionary/5.0.SP2/msgType_AP_6580.html) definitions. Some selected fields are explained in more detail below.  The fields _account_, _symbol_, _currency_ are unique to each position and form its key.  - **account**: Your unique account ID. - **symbol**: The contract for this position. - **currency**: The margin currency for this position. - **underlying**: Meta data of the _symbol_. - **quoteCurrency**: Meta data of the _symbol_, All prices are in the _quoteCurrency_ - **commission**: The maximum of the maker, taker, and settlement fee. - **initMarginReq**: The initial margin requirement. This will be at least the symbol's default initial maintenance margin, but can be higher if you choose lower leverage. - **maintMarginReq**: The maintenance margin requirement. This will be at least the symbol's default maintenance maintenance margin, but can be higher if you choose a higher risk limit. - **riskLimit**: This is a function of your _maintMarginReq_. - **leverage**: 1 / initMarginReq. - **crossMargin**: True/false depending on whether you set cross margin on this position. - **deleveragePercentile**: Indicates where your position is in the ADL queue. - **rebalancedPnl**: The value of realised PNL that has transferred to your wallet for this position. - **prevRealisedPnl**: The value of realised PNL that has transferred to your wallet for this position since the position was closed. - **currentQty**: The current position amount in contracts. - **currentCost**: The current cost of the position in the settlement currency of the symbol (_currency_). - **currentComm**: The current commission of the position in the settlement currency of the symbol (_currency_). - **realisedCost**: The realised cost of this position calculated with regard to average cost accounting. - **unrealisedCost**: _currentCost_ - _realisedCost_. - **grossOpenCost**: The absolute value of your open orders for this symbol. - **grossOpenPremium**: The amount your bidding above the mark price in the settlement currency of the symbol (_currency_). - **markPrice**: The mark price of the symbol in _quoteCurrency_. - **markValue**: The _currentQty_ at the mark price in the settlement currency of the symbol (_currency_). - **homeNotional**: Value of position in units of _underlying_. - **foreignNotional**: Value of position in units of _quoteCurrency_. - **realisedPnl**: The negative of _realisedCost_. - **unrealisedGrossPnl**: _markValue_ - _unrealisedCost_. - **unrealisedPnl**: _unrealisedGrossPnl_. - **liquidationPrice**: Once markPrice reaches this price, this position will be liquidated. - **bankruptPrice**: Once markPrice reaches this price, this position will have no equity.   # noqa: E501
        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.position_get_with_http_info(async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str filter: Table filter. For example, send {\"symbol\": \"XBTUSD\"}.
        :param str columns: Which columns to fetch. For example, send [\"columnName\"].
        :param float count: Number of rows to fetch.
        :return: list[Position]
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['filter', 'columns', 'count']  # noqa: E501
        all_params.append('async_req')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in six.iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method position_get" % key
                )
            params[key] = val
        del params['kwargs']

        collection_formats = {}

        path_params = {}

        query_params = []
        if 'filter' in params:
            query_params.append(('filter', params['filter']))  # noqa: E501
        if 'columns' in params:
            query_params.append(('columns', params['columns']))  # noqa: E501
        if 'count' in params:
            query_params.append(('count', params['count']))  # noqa: E501

        header_params = {}

        form_params = []
        local_var_files = {}

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.select_header_accept(
            ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'])  # noqa: E501

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.select_header_content_type(  # noqa: E501
            ['application/json', 'application/x-www-form-urlencoded'])  # noqa: E501

        # Authentication setting
        auth_settings = ['apiExpires', 'apiKey', 'apiSignature']  # noqa: E501

        return self.api_client.call_api(
            '/position', 'GET',
            path_params,
            query_params,
            header_params,
            body=body_params,
            post_params=form_params,
            files=local_var_files,
            response_type='list[Position]',  # noqa: E501
            auth_settings=auth_settings,
            async_req=params.get('async_req'),
            _return_http_data_only=params.get('_return_http_data_only'),
            _preload_content=params.get('_preload_content', True),
            _request_timeout=params.get('_request_timeout'),
            collection_formats=collection_formats)

    def position_isolate_margin(self, symbol, **kwargs):  # noqa: E501
        """Enable isolated margin or cross margin per-position.  # noqa: E501

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.position_isolate_margin(symbol, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str symbol: Position symbol to isolate. (required)
        :param bool enabled: True for isolated margin, false for cross margin.
        :return: Position
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('async_req'):
            return self.position_isolate_margin_with_http_info(symbol, **kwargs)  # noqa: E501
        else:
            (data) = self.position_isolate_margin_with_http_info(symbol, **kwargs)  # noqa: E501
            return data

    def position_isolate_margin_with_http_info(self, symbol, **kwargs):  # noqa: E501
        """Enable isolated margin or cross margin per-position.  # noqa: E501

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.position_isolate_margin_with_http_info(symbol, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str symbol: Position symbol to isolate. (required)
        :param bool enabled: True for isolated margin, false for cross margin.
        :return: Position
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['symbol', 'enabled']  # noqa: E501
        all_params.append('async_req')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in six.iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method position_isolate_margin" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'symbol' is set
        if ('symbol' not in params or
                params['symbol'] is None):
            raise ValueError("Missing the required parameter `symbol` when calling `position_isolate_margin`")  # noqa: E501

        collection_formats = {}

        path_params = {}

        query_params = []

        header_params = {}

        form_params = []
        local_var_files = {}
        if 'symbol' in params:
            form_params.append(('symbol', params['symbol']))  # noqa: E501
        if 'enabled' in params:
            form_params.append(('enabled', params['enabled']))  # noqa: E501

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.select_header_accept(
            ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'])  # noqa: E501

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.select_header_content_type(  # noqa: E501
            ['application/json', 'application/x-www-form-urlencoded'])  # noqa: E501

        # Authentication setting
        auth_settings = ['apiExpires', 'apiKey', 'apiSignature']  # noqa: E501

        return self.api_client.call_api(
            '/position/isolate', 'POST',
            path_params,
            query_params,
            header_params,
            body=body_params,
            post_params=form_params,
            files=local_var_files,
            response_type='Position',  # noqa: E501
            auth_settings=auth_settings,
            async_req=params.get('async_req'),
            _return_http_data_only=params.get('_return_http_data_only'),
            _preload_content=params.get('_preload_content', True),
            _request_timeout=params.get('_request_timeout'),
            collection_formats=collection_formats)

    def position_transfer_isolated_margin(self, symbol, amount, **kwargs):  # noqa: E501
        """Transfer equity in or out of a position.  # noqa: E501

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.position_transfer_isolated_margin(symbol, amount, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str symbol: Symbol of position to isolate. (required)
        :param float amount: Amount to transfer, in Satoshis. May be negative. (required)
        :return: Position
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('async_req'):
            return self.position_transfer_isolated_margin_with_http_info(symbol, amount, **kwargs)  # noqa: E501
        else:
            (data) = self.position_transfer_isolated_margin_with_http_info(symbol, amount, **kwargs)  # noqa: E501
            return data

    def position_transfer_isolated_margin_with_http_info(self, symbol, amount, **kwargs):  # noqa: E501
        """Transfer equity in or out of a position.  # noqa: E501

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.position_transfer_isolated_margin_with_http_info(symbol, amount, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str symbol: Symbol of position to isolate. (required)
        :param float amount: Amount to transfer, in Satoshis. May be negative. (required)
        :return: Position
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['symbol', 'amount']  # noqa: E501
        all_params.append('async_req')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in six.iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method position_transfer_isolated_margin" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'symbol' is set
        if ('symbol' not in params or
                params['symbol'] is None):
            raise ValueError("Missing the required parameter `symbol` when calling `position_transfer_isolated_margin`")  # noqa: E501
        # verify the required parameter 'amount' is set
        if ('amount' not in params or
                params['amount'] is None):
            raise ValueError("Missing the required parameter `amount` when calling `position_transfer_isolated_margin`")  # noqa: E501

        collection_formats = {}

        path_params = {}

        query_params = []

        header_params = {}

        form_params = []
        local_var_files = {}
        if 'symbol' in params:
            form_params.append(('symbol', params['symbol']))  # noqa: E501
        if 'amount' in params:
            form_params.append(('amount', params['amount']))  # noqa: E501

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.select_header_accept(
            ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'])  # noqa: E501

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.select_header_content_type(  # noqa: E501
            ['application/json', 'application/x-www-form-urlencoded'])  # noqa: E501

        # Authentication setting
        auth_settings = ['apiExpires', 'apiKey', 'apiSignature']  # noqa: E501

        return self.api_client.call_api(
            '/position/transferMargin', 'POST',
            path_params,
            query_params,
            header_params,
            body=body_params,
            post_params=form_params,
            files=local_var_files,
            response_type='Position',  # noqa: E501
            auth_settings=auth_settings,
            async_req=params.get('async_req'),
            _return_http_data_only=params.get('_return_http_data_only'),
            _preload_content=params.get('_preload_content', True),
            _request_timeout=params.get('_request_timeout'),
            collection_formats=collection_formats)

    def position_update_leverage(self, symbol, leverage, **kwargs):  # noqa: E501
        """Choose leverage for a position.  # noqa: E501

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.position_update_leverage(symbol, leverage, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str symbol: Symbol of position to adjust. (required)
        :param float leverage: Leverage value. Send a number between 0.01 and 100 to enable isolated margin with a fixed leverage. Send 0 to enable cross margin. (required)
        :return: Position
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('async_req'):
            return self.position_update_leverage_with_http_info(symbol, leverage, **kwargs)  # noqa: E501
        else:
            (data) = self.position_update_leverage_with_http_info(symbol, leverage, **kwargs)  # noqa: E501
            return data

    def position_update_leverage_with_http_info(self, symbol, leverage, **kwargs):  # noqa: E501
        """Choose leverage for a position.  # noqa: E501

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.position_update_leverage_with_http_info(symbol, leverage, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str symbol: Symbol of position to adjust. (required)
        :param float leverage: Leverage value. Send a number between 0.01 and 100 to enable isolated margin with a fixed leverage. Send 0 to enable cross margin. (required)
        :return: Position
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['symbol', 'leverage']  # noqa: E501
        all_params.append('async_req')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in six.iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method position_update_leverage" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'symbol' is set
        if ('symbol' not in params or
                params['symbol'] is None):
            raise ValueError("Missing the required parameter `symbol` when calling `position_update_leverage`")  # noqa: E501
        # verify the required parameter 'leverage' is set
        if ('leverage' not in params or
                params['leverage'] is None):
            raise ValueError("Missing the required parameter `leverage` when calling `position_update_leverage`")  # noqa: E501

        collection_formats = {}

        path_params = {}

        query_params = []

        header_params = {}

        form_params = []
        local_var_files = {}
        if 'symbol' in params:
            form_params.append(('symbol', params['symbol']))  # noqa: E501
        if 'leverage' in params:
            form_params.append(('leverage', params['leverage']))  # noqa: E501

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.select_header_accept(
            ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'])  # noqa: E501

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.select_header_content_type(  # noqa: E501
            ['application/json', 'application/x-www-form-urlencoded'])  # noqa: E501

        # Authentication setting
        auth_settings = ['apiExpires', 'apiKey', 'apiSignature']  # noqa: E501

        return self.api_client.call_api(
            '/position/leverage', 'POST',
            path_params,
            query_params,
            header_params,
            body=body_params,
            post_params=form_params,
            files=local_var_files,
            response_type='Position',  # noqa: E501
            auth_settings=auth_settings,
            async_req=params.get('async_req'),
            _return_http_data_only=params.get('_return_http_data_only'),
            _preload_content=params.get('_preload_content', True),
            _request_timeout=params.get('_request_timeout'),
            collection_formats=collection_formats)

    def position_update_risk_limit(self, symbol, risk_limit, **kwargs):  # noqa: E501
        """Update your risk limit.  # noqa: E501

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.position_update_risk_limit(symbol, risk_limit, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str symbol: Symbol of position to update risk limit on. (required)
        :param float risk_limit: New Risk Limit, in Satoshis. (required)
        :return: Position
                 If the method is called asynchronously,
                 returns the request thread.
        """
        kwargs['_return_http_data_only'] = True
        if kwargs.get('async_req'):
            return self.position_update_risk_limit_with_http_info(symbol, risk_limit, **kwargs)  # noqa: E501
        else:
            (data) = self.position_update_risk_limit_with_http_info(symbol, risk_limit, **kwargs)  # noqa: E501
            return data

    def position_update_risk_limit_with_http_info(self, symbol, risk_limit, **kwargs):  # noqa: E501
        """Update your risk limit.  # noqa: E501

        This method makes a synchronous HTTP request by default. To make an
        asynchronous HTTP request, please pass async_req=True
        >>> thread = api.position_update_risk_limit_with_http_info(symbol, risk_limit, async_req=True)
        >>> result = thread.get()

        :param async_req bool
        :param str symbol: Symbol of position to update risk limit on. (required)
        :param float risk_limit: New Risk Limit, in Satoshis. (required)
        :return: Position
                 If the method is called asynchronously,
                 returns the request thread.
        """

        all_params = ['symbol', 'risk_limit']  # noqa: E501
        all_params.append('async_req')
        all_params.append('_return_http_data_only')
        all_params.append('_preload_content')
        all_params.append('_request_timeout')

        params = locals()
        for key, val in six.iteritems(params['kwargs']):
            if key not in all_params:
                raise TypeError(
                    "Got an unexpected keyword argument '%s'"
                    " to method position_update_risk_limit" % key
                )
            params[key] = val
        del params['kwargs']
        # verify the required parameter 'symbol' is set
        if ('symbol' not in params or
                params['symbol'] is None):
            raise ValueError("Missing the required parameter `symbol` when calling `position_update_risk_limit`")  # noqa: E501
        # verify the required parameter 'risk_limit' is set
        if ('risk_limit' not in params or
                params['risk_limit'] is None):
            raise ValueError("Missing the required parameter `risk_limit` when calling `position_update_risk_limit`")  # noqa: E501

        collection_formats = {}

        path_params = {}

        query_params = []

        header_params = {}

        form_params = []
        local_var_files = {}
        if 'symbol' in params:
            form_params.append(('symbol', params['symbol']))  # noqa: E501
        if 'risk_limit' in params:
            form_params.append(('riskLimit', params['risk_limit']))  # noqa: E501

        body_params = None
        # HTTP header `Accept`
        header_params['Accept'] = self.api_client.select_header_accept(
            ['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'])  # noqa: E501

        # HTTP header `Content-Type`
        header_params['Content-Type'] = self.api_client.select_header_content_type(  # noqa: E501
            ['application/json', 'application/x-www-form-urlencoded'])  # noqa: E501

        # Authentication setting
        auth_settings = ['apiExpires', 'apiKey', 'apiSignature']  # noqa: E501

        return self.api_client.call_api(
            '/position/riskLimit', 'POST',
            path_params,
            query_params,
            header_params,
            body=body_params,
            post_params=form_params,
            files=local_var_files,
            response_type='Position',  # noqa: E501
            auth_settings=auth_settings,
            async_req=params.get('async_req'),
            _return_http_data_only=params.get('_return_http_data_only'),
            _preload_content=params.get('_preload_content', True),
            _request_timeout=params.get('_request_timeout'),
            collection_formats=collection_formats)
