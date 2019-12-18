<?php
/**
 * UserEvent
 *
 * PHP version 5
 *
 * @category Class
 * @package  Swagger\Client
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */

/**
 * BitMEX API
 *
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section.
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 * Generated by: https://github.com/swagger-api/swagger-codegen.git
 * Swagger Codegen version: 2.4.11-SNAPSHOT
 */

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

namespace Swagger\Client\Model;

use \ArrayAccess;
use \Swagger\Client\ObjectSerializer;

/**
 * UserEvent Class Doc Comment
 *
 * @category Class
 * @description User Events for auditing
 * @package  Swagger\Client
 * @author   Swagger Codegen team
 * @link     https://github.com/swagger-api/swagger-codegen
 */
class UserEvent implements ModelInterface, ArrayAccess
{
    const DISCRIMINATOR = null;

    /**
      * The original name of the model.
      *
      * @var string
      */
    protected static $swaggerModelName = 'UserEvent';

    /**
      * Array of property to type mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerTypes = [
        'id' => 'double',
        'type' => 'string',
        'status' => 'string',
        'user_id' => 'double',
        'created_by_id' => 'double',
        'ip' => 'string',
        'geoip_country' => 'string',
        'geoip_region' => 'string',
        'geoip_sub_region' => 'string',
        'event_meta' => 'object',
        'created' => '\DateTime'
    ];

    /**
      * Array of property to format mappings. Used for (de)serialization
      *
      * @var string[]
      */
    protected static $swaggerFormats = [
        'id' => 'double',
        'type' => null,
        'status' => null,
        'user_id' => 'double',
        'created_by_id' => 'double',
        'ip' => null,
        'geoip_country' => null,
        'geoip_region' => null,
        'geoip_sub_region' => null,
        'event_meta' => null,
        'created' => 'date-time'
    ];

    /**
     * Array of property to type mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function swaggerTypes()
    {
        return self::$swaggerTypes;
    }

    /**
     * Array of property to format mappings. Used for (de)serialization
     *
     * @return array
     */
    public static function swaggerFormats()
    {
        return self::$swaggerFormats;
    }

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @var string[]
     */
    protected static $attributeMap = [
        'id' => 'id',
        'type' => 'type',
        'status' => 'status',
        'user_id' => 'userId',
        'created_by_id' => 'createdById',
        'ip' => 'ip',
        'geoip_country' => 'geoipCountry',
        'geoip_region' => 'geoipRegion',
        'geoip_sub_region' => 'geoipSubRegion',
        'event_meta' => 'eventMeta',
        'created' => 'created'
    ];

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @var string[]
     */
    protected static $setters = [
        'id' => 'setId',
        'type' => 'setType',
        'status' => 'setStatus',
        'user_id' => 'setUserId',
        'created_by_id' => 'setCreatedById',
        'ip' => 'setIp',
        'geoip_country' => 'setGeoipCountry',
        'geoip_region' => 'setGeoipRegion',
        'geoip_sub_region' => 'setGeoipSubRegion',
        'event_meta' => 'setEventMeta',
        'created' => 'setCreated'
    ];

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @var string[]
     */
    protected static $getters = [
        'id' => 'getId',
        'type' => 'getType',
        'status' => 'getStatus',
        'user_id' => 'getUserId',
        'created_by_id' => 'getCreatedById',
        'ip' => 'getIp',
        'geoip_country' => 'getGeoipCountry',
        'geoip_region' => 'getGeoipRegion',
        'geoip_sub_region' => 'getGeoipSubRegion',
        'event_meta' => 'getEventMeta',
        'created' => 'getCreated'
    ];

    /**
     * Array of attributes where the key is the local name,
     * and the value is the original name
     *
     * @return array
     */
    public static function attributeMap()
    {
        return self::$attributeMap;
    }

    /**
     * Array of attributes to setter functions (for deserialization of responses)
     *
     * @return array
     */
    public static function setters()
    {
        return self::$setters;
    }

    /**
     * Array of attributes to getter functions (for serialization of requests)
     *
     * @return array
     */
    public static function getters()
    {
        return self::$getters;
    }

    /**
     * The original name of the model.
     *
     * @return string
     */
    public function getModelName()
    {
        return self::$swaggerModelName;
    }

    const TYPE_API_KEY_CREATED = 'apiKeyCreated';
    const TYPE_DELEVERAGE_EXECUTION = 'deleverageExecution';
    const TYPE_DEPOSIT_CONFIRMED = 'depositConfirmed';
    const TYPE_DEPOSIT_PENDING = 'depositPending';
    const TYPE_BAN_ZERO_VOLUME_API_USER = 'banZeroVolumeApiUser';
    const TYPE_LIQUIDATION_ORDER_PLACED = 'liquidationOrderPlaced';
    const TYPE_LOGIN = 'login';
    const TYPE_PGP_MASKED_EMAIL = 'pgpMaskedEmail';
    const TYPE_PGP_TEST_EMAIL = 'pgpTestEmail';
    const TYPE_PASSWORD_CHANGED = 'passwordChanged';
    const TYPE_POSITION_STATE_LIQUIDATED = 'positionStateLiquidated';
    const TYPE_POSITION_STATE_WARNING = 'positionStateWarning';
    const TYPE_RESET_PASSWORD_CONFIRMED = 'resetPasswordConfirmed';
    const TYPE_RESET_PASSWORD_REQUEST = 'resetPasswordRequest';
    const TYPE_TRANSFER_CANCELED = 'transferCanceled';
    const TYPE_TRANSFER_COMPLETED = 'transferCompleted';
    const TYPE_TRANSFER_RECEIVED = 'transferReceived';
    const TYPE_TRANSFER_REQUESTED = 'transferRequested';
    const TYPE_TWO_FACTOR_DISABLED = 'twoFactorDisabled';
    const TYPE_TWO_FACTOR_ENABLED = 'twoFactorEnabled';
    const TYPE_WITHDRAWAL_CANCELED = 'withdrawalCanceled';
    const TYPE_WITHDRAWAL_COMPLETED = 'withdrawalCompleted';
    const TYPE_WITHDRAWAL_CONFIRMED = 'withdrawalConfirmed';
    const TYPE_WITHDRAWAL_REQUESTED = 'withdrawalRequested';
    const TYPE_VERIFY = 'verify';
    const STATUS_SUCCESS = 'success';
    const STATUS_FAILURE = 'failure';
    

    
    /**
     * Gets allowable values of the enum
     *
     * @return string[]
     */
    public function getTypeAllowableValues()
    {
        return [
            self::TYPE_API_KEY_CREATED,
            self::TYPE_DELEVERAGE_EXECUTION,
            self::TYPE_DEPOSIT_CONFIRMED,
            self::TYPE_DEPOSIT_PENDING,
            self::TYPE_BAN_ZERO_VOLUME_API_USER,
            self::TYPE_LIQUIDATION_ORDER_PLACED,
            self::TYPE_LOGIN,
            self::TYPE_PGP_MASKED_EMAIL,
            self::TYPE_PGP_TEST_EMAIL,
            self::TYPE_PASSWORD_CHANGED,
            self::TYPE_POSITION_STATE_LIQUIDATED,
            self::TYPE_POSITION_STATE_WARNING,
            self::TYPE_RESET_PASSWORD_CONFIRMED,
            self::TYPE_RESET_PASSWORD_REQUEST,
            self::TYPE_TRANSFER_CANCELED,
            self::TYPE_TRANSFER_COMPLETED,
            self::TYPE_TRANSFER_RECEIVED,
            self::TYPE_TRANSFER_REQUESTED,
            self::TYPE_TWO_FACTOR_DISABLED,
            self::TYPE_TWO_FACTOR_ENABLED,
            self::TYPE_WITHDRAWAL_CANCELED,
            self::TYPE_WITHDRAWAL_COMPLETED,
            self::TYPE_WITHDRAWAL_CONFIRMED,
            self::TYPE_WITHDRAWAL_REQUESTED,
            self::TYPE_VERIFY,
        ];
    }
    
    /**
     * Gets allowable values of the enum
     *
     * @return string[]
     */
    public function getStatusAllowableValues()
    {
        return [
            self::STATUS_SUCCESS,
            self::STATUS_FAILURE,
        ];
    }
    

    /**
     * Associative array for storing property values
     *
     * @var mixed[]
     */
    protected $container = [];

    /**
     * Constructor
     *
     * @param mixed[] $data Associated array of property values
     *                      initializing the model
     */
    public function __construct(array $data = null)
    {
        $this->container['id'] = isset($data['id']) ? $data['id'] : null;
        $this->container['type'] = isset($data['type']) ? $data['type'] : null;
        $this->container['status'] = isset($data['status']) ? $data['status'] : null;
        $this->container['user_id'] = isset($data['user_id']) ? $data['user_id'] : null;
        $this->container['created_by_id'] = isset($data['created_by_id']) ? $data['created_by_id'] : null;
        $this->container['ip'] = isset($data['ip']) ? $data['ip'] : null;
        $this->container['geoip_country'] = isset($data['geoip_country']) ? $data['geoip_country'] : null;
        $this->container['geoip_region'] = isset($data['geoip_region']) ? $data['geoip_region'] : null;
        $this->container['geoip_sub_region'] = isset($data['geoip_sub_region']) ? $data['geoip_sub_region'] : null;
        $this->container['event_meta'] = isset($data['event_meta']) ? $data['event_meta'] : null;
        $this->container['created'] = isset($data['created']) ? $data['created'] : null;
    }

    /**
     * Show all the invalid properties with reasons.
     *
     * @return array invalid properties with reasons
     */
    public function listInvalidProperties()
    {
        $invalidProperties = [];

        if ($this->container['type'] === null) {
            $invalidProperties[] = "'type' can't be null";
        }
        $allowedValues = $this->getTypeAllowableValues();
        if (!is_null($this->container['type']) && !in_array($this->container['type'], $allowedValues, true)) {
            $invalidProperties[] = sprintf(
                "invalid value for 'type', must be one of '%s'",
                implode("', '", $allowedValues)
            );
        }

        if ($this->container['status'] === null) {
            $invalidProperties[] = "'status' can't be null";
        }
        $allowedValues = $this->getStatusAllowableValues();
        if (!is_null($this->container['status']) && !in_array($this->container['status'], $allowedValues, true)) {
            $invalidProperties[] = sprintf(
                "invalid value for 'status', must be one of '%s'",
                implode("', '", $allowedValues)
            );
        }

        if ($this->container['user_id'] === null) {
            $invalidProperties[] = "'user_id' can't be null";
        }
        if ($this->container['created_by_id'] === null) {
            $invalidProperties[] = "'created_by_id' can't be null";
        }
        if (!is_null($this->container['geoip_country']) && (mb_strlen($this->container['geoip_country']) > 2)) {
            $invalidProperties[] = "invalid value for 'geoip_country', the character length must be smaller than or equal to 2.";
        }

        if (!is_null($this->container['geoip_region']) && (mb_strlen($this->container['geoip_region']) > 3)) {
            $invalidProperties[] = "invalid value for 'geoip_region', the character length must be smaller than or equal to 3.";
        }

        if (!is_null($this->container['geoip_sub_region']) && (mb_strlen($this->container['geoip_sub_region']) > 3)) {
            $invalidProperties[] = "invalid value for 'geoip_sub_region', the character length must be smaller than or equal to 3.";
        }

        if ($this->container['created'] === null) {
            $invalidProperties[] = "'created' can't be null";
        }
        return $invalidProperties;
    }

    /**
     * Validate all the properties in the model
     * return true if all passed
     *
     * @return bool True if all properties are valid
     */
    public function valid()
    {
        return count($this->listInvalidProperties()) === 0;
    }


    /**
     * Gets id
     *
     * @return double
     */
    public function getId()
    {
        return $this->container['id'];
    }

    /**
     * Sets id
     *
     * @param double $id id
     *
     * @return $this
     */
    public function setId($id)
    {
        $this->container['id'] = $id;

        return $this;
    }

    /**
     * Gets type
     *
     * @return string
     */
    public function getType()
    {
        return $this->container['type'];
    }

    /**
     * Sets type
     *
     * @param string $type type
     *
     * @return $this
     */
    public function setType($type)
    {
        $allowedValues = $this->getTypeAllowableValues();
        if (!in_array($type, $allowedValues, true)) {
            throw new \InvalidArgumentException(
                sprintf(
                    "Invalid value for 'type', must be one of '%s'",
                    implode("', '", $allowedValues)
                )
            );
        }
        $this->container['type'] = $type;

        return $this;
    }

    /**
     * Gets status
     *
     * @return string
     */
    public function getStatus()
    {
        return $this->container['status'];
    }

    /**
     * Sets status
     *
     * @param string $status status
     *
     * @return $this
     */
    public function setStatus($status)
    {
        $allowedValues = $this->getStatusAllowableValues();
        if (!in_array($status, $allowedValues, true)) {
            throw new \InvalidArgumentException(
                sprintf(
                    "Invalid value for 'status', must be one of '%s'",
                    implode("', '", $allowedValues)
                )
            );
        }
        $this->container['status'] = $status;

        return $this;
    }

    /**
     * Gets user_id
     *
     * @return double
     */
    public function getUserId()
    {
        return $this->container['user_id'];
    }

    /**
     * Sets user_id
     *
     * @param double $user_id user_id
     *
     * @return $this
     */
    public function setUserId($user_id)
    {
        $this->container['user_id'] = $user_id;

        return $this;
    }

    /**
     * Gets created_by_id
     *
     * @return double
     */
    public function getCreatedById()
    {
        return $this->container['created_by_id'];
    }

    /**
     * Sets created_by_id
     *
     * @param double $created_by_id created_by_id
     *
     * @return $this
     */
    public function setCreatedById($created_by_id)
    {
        $this->container['created_by_id'] = $created_by_id;

        return $this;
    }

    /**
     * Gets ip
     *
     * @return string
     */
    public function getIp()
    {
        return $this->container['ip'];
    }

    /**
     * Sets ip
     *
     * @param string $ip ip
     *
     * @return $this
     */
    public function setIp($ip)
    {
        $this->container['ip'] = $ip;

        return $this;
    }

    /**
     * Gets geoip_country
     *
     * @return string
     */
    public function getGeoipCountry()
    {
        return $this->container['geoip_country'];
    }

    /**
     * Sets geoip_country
     *
     * @param string $geoip_country geoip_country
     *
     * @return $this
     */
    public function setGeoipCountry($geoip_country)
    {
        if (!is_null($geoip_country) && (mb_strlen($geoip_country) > 2)) {
            throw new \InvalidArgumentException('invalid length for $geoip_country when calling UserEvent., must be smaller than or equal to 2.');
        }

        $this->container['geoip_country'] = $geoip_country;

        return $this;
    }

    /**
     * Gets geoip_region
     *
     * @return string
     */
    public function getGeoipRegion()
    {
        return $this->container['geoip_region'];
    }

    /**
     * Sets geoip_region
     *
     * @param string $geoip_region geoip_region
     *
     * @return $this
     */
    public function setGeoipRegion($geoip_region)
    {
        if (!is_null($geoip_region) && (mb_strlen($geoip_region) > 3)) {
            throw new \InvalidArgumentException('invalid length for $geoip_region when calling UserEvent., must be smaller than or equal to 3.');
        }

        $this->container['geoip_region'] = $geoip_region;

        return $this;
    }

    /**
     * Gets geoip_sub_region
     *
     * @return string
     */
    public function getGeoipSubRegion()
    {
        return $this->container['geoip_sub_region'];
    }

    /**
     * Sets geoip_sub_region
     *
     * @param string $geoip_sub_region geoip_sub_region
     *
     * @return $this
     */
    public function setGeoipSubRegion($geoip_sub_region)
    {
        if (!is_null($geoip_sub_region) && (mb_strlen($geoip_sub_region) > 3)) {
            throw new \InvalidArgumentException('invalid length for $geoip_sub_region when calling UserEvent., must be smaller than or equal to 3.');
        }

        $this->container['geoip_sub_region'] = $geoip_sub_region;

        return $this;
    }

    /**
     * Gets event_meta
     *
     * @return object
     */
    public function getEventMeta()
    {
        return $this->container['event_meta'];
    }

    /**
     * Sets event_meta
     *
     * @param object $event_meta event_meta
     *
     * @return $this
     */
    public function setEventMeta($event_meta)
    {
        $this->container['event_meta'] = $event_meta;

        return $this;
    }

    /**
     * Gets created
     *
     * @return \DateTime
     */
    public function getCreated()
    {
        return $this->container['created'];
    }

    /**
     * Sets created
     *
     * @param \DateTime $created created
     *
     * @return $this
     */
    public function setCreated($created)
    {
        $this->container['created'] = $created;

        return $this;
    }
    /**
     * Returns true if offset exists. False otherwise.
     *
     * @param integer $offset Offset
     *
     * @return boolean
     */
    public function offsetExists($offset)
    {
        return isset($this->container[$offset]);
    }

    /**
     * Gets offset.
     *
     * @param integer $offset Offset
     *
     * @return mixed
     */
    public function offsetGet($offset)
    {
        return isset($this->container[$offset]) ? $this->container[$offset] : null;
    }

    /**
     * Sets value based on offset.
     *
     * @param integer $offset Offset
     * @param mixed   $value  Value to be set
     *
     * @return void
     */
    public function offsetSet($offset, $value)
    {
        if (is_null($offset)) {
            $this->container[] = $value;
        } else {
            $this->container[$offset] = $value;
        }
    }

    /**
     * Unsets offset.
     *
     * @param integer $offset Offset
     *
     * @return void
     */
    public function offsetUnset($offset)
    {
        unset($this->container[$offset]);
    }

    /**
     * Gets the string presentation of the object
     *
     * @return string
     */
    public function __toString()
    {
        if (defined('JSON_PRETTY_PRINT')) { // use JSON pretty print
            return json_encode(
                ObjectSerializer::sanitizeForSerialization($this),
                JSON_PRETTY_PRINT
            );
        }

        return json_encode(ObjectSerializer::sanitizeForSerialization($this));
    }
}


