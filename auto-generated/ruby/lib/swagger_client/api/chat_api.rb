=begin
#BitMEX API

### REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 

OpenAPI spec version: 1.2.0
Contact: support@bitmex.com
Generated by: https://github.com/swagger-api/swagger-codegen.git
Swagger Codegen version: 2.4.11-SNAPSHOT

=end

require 'uri'

module SwaggerClient
  class ChatApi
    attr_accessor :api_client

    def initialize(api_client = ApiClient.default)
      @api_client = api_client
    end
    # Get chat messages.
    # @param [Hash] opts the optional parameters
    # @option opts [Float] :count Number of results to fetch. (default to 100)
    # @option opts [Float] :start Starting ID for results. (default to 0)
    # @option opts [BOOLEAN] :reverse If true, will sort results newest first. (default to true)
    # @option opts [Float] :channel_id Channel id. GET /chat/channels for ids. Leave blank for all.
    # @return [Array<Chat>]
    def chat_get(opts = {})
      data, _status_code, _headers = chat_get_with_http_info(opts)
      data
    end

    # Get chat messages.
    # @param [Hash] opts the optional parameters
    # @option opts [Float] :count Number of results to fetch.
    # @option opts [Float] :start Starting ID for results.
    # @option opts [BOOLEAN] :reverse If true, will sort results newest first.
    # @option opts [Float] :channel_id Channel id. GET /chat/channels for ids. Leave blank for all.
    # @return [Array<(Array<Chat>, Fixnum, Hash)>] Array<Chat> data, response status code and response headers
    def chat_get_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: ChatApi.chat_get ...'
      end
      # resource path
      local_var_path = '/chat'

      # query parameters
      query_params = {}
      query_params[:'count'] = opts[:'count'] if !opts[:'count'].nil?
      query_params[:'start'] = opts[:'start'] if !opts[:'start'].nil?
      query_params[:'reverse'] = opts[:'reverse'] if !opts[:'reverse'].nil?
      query_params[:'channelID'] = opts[:'channel_id'] if !opts[:'channel_id'].nil?

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json', 'application/x-www-form-urlencoded'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'Array<Chat>')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ChatApi#chat_get\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
    # Get available channels.
    # @param [Hash] opts the optional parameters
    # @return [Array<ChatChannel>]
    def chat_get_channels(opts = {})
      data, _status_code, _headers = chat_get_channels_with_http_info(opts)
      data
    end

    # Get available channels.
    # @param [Hash] opts the optional parameters
    # @return [Array<(Array<ChatChannel>, Fixnum, Hash)>] Array<ChatChannel> data, response status code and response headers
    def chat_get_channels_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: ChatApi.chat_get_channels ...'
      end
      # resource path
      local_var_path = '/chat/channels'

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json', 'application/x-www-form-urlencoded'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'Array<ChatChannel>')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ChatApi#chat_get_channels\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
    # Get connected users.
    # Returns an array with browser users in the first position and API users (bots) in the second position.
    # @param [Hash] opts the optional parameters
    # @return [ConnectedUsers]
    def chat_get_connected(opts = {})
      data, _status_code, _headers = chat_get_connected_with_http_info(opts)
      data
    end

    # Get connected users.
    # Returns an array with browser users in the first position and API users (bots) in the second position.
    # @param [Hash] opts the optional parameters
    # @return [Array<(ConnectedUsers, Fixnum, Hash)>] ConnectedUsers data, response status code and response headers
    def chat_get_connected_with_http_info(opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: ChatApi.chat_get_connected ...'
      end
      # resource path
      local_var_path = '/chat/connected'

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json', 'application/x-www-form-urlencoded'])

      # form parameters
      form_params = {}

      # http body (model)
      post_body = nil
      auth_names = []
      data, status_code, headers = @api_client.call_api(:GET, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'ConnectedUsers')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ChatApi#chat_get_connected\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
    # Send a chat message.
    # @param message 
    # @param [Hash] opts the optional parameters
    # @option opts [Float] :channel_id Channel to post to. Default 1 (English). (default to 1)
    # @return [Chat]
    def chat_new(message, opts = {})
      data, _status_code, _headers = chat_new_with_http_info(message, opts)
      data
    end

    # Send a chat message.
    # @param message 
    # @param [Hash] opts the optional parameters
    # @option opts [Float] :channel_id Channel to post to. Default 1 (English).
    # @return [Array<(Chat, Fixnum, Hash)>] Chat data, response status code and response headers
    def chat_new_with_http_info(message, opts = {})
      if @api_client.config.debugging
        @api_client.config.logger.debug 'Calling API: ChatApi.chat_new ...'
      end
      # verify the required parameter 'message' is set
      if @api_client.config.client_side_validation && message.nil?
        fail ArgumentError, "Missing the required parameter 'message' when calling ChatApi.chat_new"
      end
      # resource path
      local_var_path = '/chat'

      # query parameters
      query_params = {}

      # header parameters
      header_params = {}
      # HTTP header 'Accept' (if needed)
      header_params['Accept'] = @api_client.select_header_accept(['application/json', 'application/xml', 'text/xml', 'application/javascript', 'text/javascript'])
      # HTTP header 'Content-Type'
      header_params['Content-Type'] = @api_client.select_header_content_type(['application/json', 'application/x-www-form-urlencoded'])

      # form parameters
      form_params = {}
      form_params['message'] = message
      form_params['channelID'] = opts[:'channel_id'] if !opts[:'channel_id'].nil?

      # http body (model)
      post_body = nil
      auth_names = ['apiExpires', 'apiKey', 'apiSignature']
      data, status_code, headers = @api_client.call_api(:POST, local_var_path,
        :header_params => header_params,
        :query_params => query_params,
        :form_params => form_params,
        :body => post_body,
        :auth_names => auth_names,
        :return_type => 'Chat')
      if @api_client.config.debugging
        @api_client.config.logger.debug "API called: ChatApi#chat_new\nData: #{data.inspect}\nStatus code: #{status_code}\nHeaders: #{headers}"
      end
      return data, status_code, headers
    end
  end
end
