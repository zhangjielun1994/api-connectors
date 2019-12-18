# coding: utf-8

"""
    BitMEX API

    ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section.   # noqa: E501

    OpenAPI spec version: 1.2.0
    Contact: support@bitmex.com
    Generated by: https://github.com/swagger-api/swagger-codegen.git
"""


import pprint
import re  # noqa: F401

import six


class TradeBin(object):
    """NOTE: This class is auto generated by the swagger code generator program.

    Do not edit the class manually.
    """

    """
    Attributes:
      swagger_types (dict): The key is attribute name
                            and the value is attribute type.
      attribute_map (dict): The key is attribute name
                            and the value is json key in definition.
    """
    swagger_types = {
        'timestamp': 'datetime',
        'symbol': 'str',
        'open': 'float',
        'high': 'float',
        'low': 'float',
        'close': 'float',
        'trades': 'float',
        'volume': 'float',
        'vwap': 'float',
        'last_size': 'float',
        'turnover': 'float',
        'home_notional': 'float',
        'foreign_notional': 'float'
    }

    attribute_map = {
        'timestamp': 'timestamp',
        'symbol': 'symbol',
        'open': 'open',
        'high': 'high',
        'low': 'low',
        'close': 'close',
        'trades': 'trades',
        'volume': 'volume',
        'vwap': 'vwap',
        'last_size': 'lastSize',
        'turnover': 'turnover',
        'home_notional': 'homeNotional',
        'foreign_notional': 'foreignNotional'
    }

    def __init__(self, timestamp=None, symbol=None, open=None, high=None, low=None, close=None, trades=None, volume=None, vwap=None, last_size=None, turnover=None, home_notional=None, foreign_notional=None):  # noqa: E501
        """TradeBin - a model defined in Swagger"""  # noqa: E501

        self._timestamp = None
        self._symbol = None
        self._open = None
        self._high = None
        self._low = None
        self._close = None
        self._trades = None
        self._volume = None
        self._vwap = None
        self._last_size = None
        self._turnover = None
        self._home_notional = None
        self._foreign_notional = None
        self.discriminator = None

        self.timestamp = timestamp
        self.symbol = symbol
        if open is not None:
            self.open = open
        if high is not None:
            self.high = high
        if low is not None:
            self.low = low
        if close is not None:
            self.close = close
        if trades is not None:
            self.trades = trades
        if volume is not None:
            self.volume = volume
        if vwap is not None:
            self.vwap = vwap
        if last_size is not None:
            self.last_size = last_size
        if turnover is not None:
            self.turnover = turnover
        if home_notional is not None:
            self.home_notional = home_notional
        if foreign_notional is not None:
            self.foreign_notional = foreign_notional

    @property
    def timestamp(self):
        """Gets the timestamp of this TradeBin.  # noqa: E501


        :return: The timestamp of this TradeBin.  # noqa: E501
        :rtype: datetime
        """
        return self._timestamp

    @timestamp.setter
    def timestamp(self, timestamp):
        """Sets the timestamp of this TradeBin.


        :param timestamp: The timestamp of this TradeBin.  # noqa: E501
        :type: datetime
        """
        if timestamp is None:
            raise ValueError("Invalid value for `timestamp`, must not be `None`")  # noqa: E501

        self._timestamp = timestamp

    @property
    def symbol(self):
        """Gets the symbol of this TradeBin.  # noqa: E501


        :return: The symbol of this TradeBin.  # noqa: E501
        :rtype: str
        """
        return self._symbol

    @symbol.setter
    def symbol(self, symbol):
        """Sets the symbol of this TradeBin.


        :param symbol: The symbol of this TradeBin.  # noqa: E501
        :type: str
        """
        if symbol is None:
            raise ValueError("Invalid value for `symbol`, must not be `None`")  # noqa: E501

        self._symbol = symbol

    @property
    def open(self):
        """Gets the open of this TradeBin.  # noqa: E501


        :return: The open of this TradeBin.  # noqa: E501
        :rtype: float
        """
        return self._open

    @open.setter
    def open(self, open):
        """Sets the open of this TradeBin.


        :param open: The open of this TradeBin.  # noqa: E501
        :type: float
        """

        self._open = open

    @property
    def high(self):
        """Gets the high of this TradeBin.  # noqa: E501


        :return: The high of this TradeBin.  # noqa: E501
        :rtype: float
        """
        return self._high

    @high.setter
    def high(self, high):
        """Sets the high of this TradeBin.


        :param high: The high of this TradeBin.  # noqa: E501
        :type: float
        """

        self._high = high

    @property
    def low(self):
        """Gets the low of this TradeBin.  # noqa: E501


        :return: The low of this TradeBin.  # noqa: E501
        :rtype: float
        """
        return self._low

    @low.setter
    def low(self, low):
        """Sets the low of this TradeBin.


        :param low: The low of this TradeBin.  # noqa: E501
        :type: float
        """

        self._low = low

    @property
    def close(self):
        """Gets the close of this TradeBin.  # noqa: E501


        :return: The close of this TradeBin.  # noqa: E501
        :rtype: float
        """
        return self._close

    @close.setter
    def close(self, close):
        """Sets the close of this TradeBin.


        :param close: The close of this TradeBin.  # noqa: E501
        :type: float
        """

        self._close = close

    @property
    def trades(self):
        """Gets the trades of this TradeBin.  # noqa: E501


        :return: The trades of this TradeBin.  # noqa: E501
        :rtype: float
        """
        return self._trades

    @trades.setter
    def trades(self, trades):
        """Sets the trades of this TradeBin.


        :param trades: The trades of this TradeBin.  # noqa: E501
        :type: float
        """

        self._trades = trades

    @property
    def volume(self):
        """Gets the volume of this TradeBin.  # noqa: E501


        :return: The volume of this TradeBin.  # noqa: E501
        :rtype: float
        """
        return self._volume

    @volume.setter
    def volume(self, volume):
        """Sets the volume of this TradeBin.


        :param volume: The volume of this TradeBin.  # noqa: E501
        :type: float
        """

        self._volume = volume

    @property
    def vwap(self):
        """Gets the vwap of this TradeBin.  # noqa: E501


        :return: The vwap of this TradeBin.  # noqa: E501
        :rtype: float
        """
        return self._vwap

    @vwap.setter
    def vwap(self, vwap):
        """Sets the vwap of this TradeBin.


        :param vwap: The vwap of this TradeBin.  # noqa: E501
        :type: float
        """

        self._vwap = vwap

    @property
    def last_size(self):
        """Gets the last_size of this TradeBin.  # noqa: E501


        :return: The last_size of this TradeBin.  # noqa: E501
        :rtype: float
        """
        return self._last_size

    @last_size.setter
    def last_size(self, last_size):
        """Sets the last_size of this TradeBin.


        :param last_size: The last_size of this TradeBin.  # noqa: E501
        :type: float
        """

        self._last_size = last_size

    @property
    def turnover(self):
        """Gets the turnover of this TradeBin.  # noqa: E501


        :return: The turnover of this TradeBin.  # noqa: E501
        :rtype: float
        """
        return self._turnover

    @turnover.setter
    def turnover(self, turnover):
        """Sets the turnover of this TradeBin.


        :param turnover: The turnover of this TradeBin.  # noqa: E501
        :type: float
        """

        self._turnover = turnover

    @property
    def home_notional(self):
        """Gets the home_notional of this TradeBin.  # noqa: E501


        :return: The home_notional of this TradeBin.  # noqa: E501
        :rtype: float
        """
        return self._home_notional

    @home_notional.setter
    def home_notional(self, home_notional):
        """Sets the home_notional of this TradeBin.


        :param home_notional: The home_notional of this TradeBin.  # noqa: E501
        :type: float
        """

        self._home_notional = home_notional

    @property
    def foreign_notional(self):
        """Gets the foreign_notional of this TradeBin.  # noqa: E501


        :return: The foreign_notional of this TradeBin.  # noqa: E501
        :rtype: float
        """
        return self._foreign_notional

    @foreign_notional.setter
    def foreign_notional(self, foreign_notional):
        """Sets the foreign_notional of this TradeBin.


        :param foreign_notional: The foreign_notional of this TradeBin.  # noqa: E501
        :type: float
        """

        self._foreign_notional = foreign_notional

    def to_dict(self):
        """Returns the model properties as a dict"""
        result = {}

        for attr, _ in six.iteritems(self.swagger_types):
            value = getattr(self, attr)
            if isinstance(value, list):
                result[attr] = list(map(
                    lambda x: x.to_dict() if hasattr(x, "to_dict") else x,
                    value
                ))
            elif hasattr(value, "to_dict"):
                result[attr] = value.to_dict()
            elif isinstance(value, dict):
                result[attr] = dict(map(
                    lambda item: (item[0], item[1].to_dict())
                    if hasattr(item[1], "to_dict") else item,
                    value.items()
                ))
            else:
                result[attr] = value
        if issubclass(TradeBin, dict):
            for key, value in self.items():
                result[key] = value

        return result

    def to_str(self):
        """Returns the string representation of the model"""
        return pprint.pformat(self.to_dict())

    def __repr__(self):
        """For `print` and `pprint`"""
        return self.to_str()

    def __eq__(self, other):
        """Returns true if both objects are equal"""
        if not isinstance(other, TradeBin):
            return False

        return self.__dict__ == other.__dict__

    def __ne__(self, other):
        """Returns true if both objects are not equal"""
        return not self == other
