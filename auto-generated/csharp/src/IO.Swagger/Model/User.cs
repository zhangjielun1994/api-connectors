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
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using SwaggerDateConverter = IO.Swagger.Client.SwaggerDateConverter;

namespace IO.Swagger.Model
{
    /// <summary>
    /// Account Operations
    /// </summary>
    [DataContract]
    public partial class User :  IEquatable<User>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="User" /> class.
        /// </summary>
        [JsonConstructorAttribute]
        protected User() { }
        /// <summary>
        /// Initializes a new instance of the <see cref="User" /> class.
        /// </summary>
        /// <param name="id">id.</param>
        /// <param name="ownerId">ownerId.</param>
        /// <param name="firstname">firstname.</param>
        /// <param name="lastname">lastname.</param>
        /// <param name="username">username (required).</param>
        /// <param name="email">email (required).</param>
        /// <param name="phone">phone.</param>
        /// <param name="created">created.</param>
        /// <param name="lastUpdated">lastUpdated.</param>
        /// <param name="preferences">preferences.</param>
        /// <param name="tFAEnabled">tFAEnabled.</param>
        /// <param name="affiliateID">affiliateID.</param>
        /// <param name="pgpPubKey">pgpPubKey.</param>
        /// <param name="country">country.</param>
        /// <param name="geoipCountry">geoipCountry.</param>
        /// <param name="geoipRegion">geoipRegion.</param>
        /// <param name="typ">typ.</param>
        public User(decimal? id = default(decimal?), decimal? ownerId = default(decimal?), string firstname = default(string), string lastname = default(string), string username = default(string), string email = default(string), string phone = default(string), DateTime? created = default(DateTime?), DateTime? lastUpdated = default(DateTime?), UserPreferences preferences = default(UserPreferences), string tFAEnabled = default(string), string affiliateID = default(string), string pgpPubKey = default(string), string country = default(string), string geoipCountry = default(string), string geoipRegion = default(string), string typ = default(string))
        {
            // to ensure "username" is required (not null)
            if (username == null)
            {
                throw new InvalidDataException("username is a required property for User and cannot be null");
            }
            else
            {
                this.Username = username;
            }
            // to ensure "email" is required (not null)
            if (email == null)
            {
                throw new InvalidDataException("email is a required property for User and cannot be null");
            }
            else
            {
                this.Email = email;
            }
            this.Id = id;
            this.OwnerId = ownerId;
            this.Firstname = firstname;
            this.Lastname = lastname;
            this.Phone = phone;
            this.Created = created;
            this.LastUpdated = lastUpdated;
            this.Preferences = preferences;
            this.TFAEnabled = tFAEnabled;
            this.AffiliateID = affiliateID;
            this.PgpPubKey = pgpPubKey;
            this.Country = country;
            this.GeoipCountry = geoipCountry;
            this.GeoipRegion = geoipRegion;
            this.Typ = typ;
        }
        
        /// <summary>
        /// Gets or Sets Id
        /// </summary>
        [DataMember(Name="id", EmitDefaultValue=false)]
        public decimal? Id { get; set; }

        /// <summary>
        /// Gets or Sets OwnerId
        /// </summary>
        [DataMember(Name="ownerId", EmitDefaultValue=false)]
        public decimal? OwnerId { get; set; }

        /// <summary>
        /// Gets or Sets Firstname
        /// </summary>
        [DataMember(Name="firstname", EmitDefaultValue=false)]
        public string Firstname { get; set; }

        /// <summary>
        /// Gets or Sets Lastname
        /// </summary>
        [DataMember(Name="lastname", EmitDefaultValue=false)]
        public string Lastname { get; set; }

        /// <summary>
        /// Gets or Sets Username
        /// </summary>
        [DataMember(Name="username", EmitDefaultValue=false)]
        public string Username { get; set; }

        /// <summary>
        /// Gets or Sets Email
        /// </summary>
        [DataMember(Name="email", EmitDefaultValue=false)]
        public string Email { get; set; }

        /// <summary>
        /// Gets or Sets Phone
        /// </summary>
        [DataMember(Name="phone", EmitDefaultValue=false)]
        public string Phone { get; set; }

        /// <summary>
        /// Gets or Sets Created
        /// </summary>
        [DataMember(Name="created", EmitDefaultValue=false)]
        public DateTime? Created { get; set; }

        /// <summary>
        /// Gets or Sets LastUpdated
        /// </summary>
        [DataMember(Name="lastUpdated", EmitDefaultValue=false)]
        public DateTime? LastUpdated { get; set; }

        /// <summary>
        /// Gets or Sets Preferences
        /// </summary>
        [DataMember(Name="preferences", EmitDefaultValue=false)]
        public UserPreferences Preferences { get; set; }

        /// <summary>
        /// Gets or Sets TFAEnabled
        /// </summary>
        [DataMember(Name="TFAEnabled", EmitDefaultValue=false)]
        public string TFAEnabled { get; set; }

        /// <summary>
        /// Gets or Sets AffiliateID
        /// </summary>
        [DataMember(Name="affiliateID", EmitDefaultValue=false)]
        public string AffiliateID { get; set; }

        /// <summary>
        /// Gets or Sets PgpPubKey
        /// </summary>
        [DataMember(Name="pgpPubKey", EmitDefaultValue=false)]
        public string PgpPubKey { get; set; }

        /// <summary>
        /// Gets or Sets Country
        /// </summary>
        [DataMember(Name="country", EmitDefaultValue=false)]
        public string Country { get; set; }

        /// <summary>
        /// Gets or Sets GeoipCountry
        /// </summary>
        [DataMember(Name="geoipCountry", EmitDefaultValue=false)]
        public string GeoipCountry { get; set; }

        /// <summary>
        /// Gets or Sets GeoipRegion
        /// </summary>
        [DataMember(Name="geoipRegion", EmitDefaultValue=false)]
        public string GeoipRegion { get; set; }

        /// <summary>
        /// Gets or Sets Typ
        /// </summary>
        [DataMember(Name="typ", EmitDefaultValue=false)]
        public string Typ { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class User {\n");
            sb.Append("  Id: ").Append(Id).Append("\n");
            sb.Append("  OwnerId: ").Append(OwnerId).Append("\n");
            sb.Append("  Firstname: ").Append(Firstname).Append("\n");
            sb.Append("  Lastname: ").Append(Lastname).Append("\n");
            sb.Append("  Username: ").Append(Username).Append("\n");
            sb.Append("  Email: ").Append(Email).Append("\n");
            sb.Append("  Phone: ").Append(Phone).Append("\n");
            sb.Append("  Created: ").Append(Created).Append("\n");
            sb.Append("  LastUpdated: ").Append(LastUpdated).Append("\n");
            sb.Append("  Preferences: ").Append(Preferences).Append("\n");
            sb.Append("  TFAEnabled: ").Append(TFAEnabled).Append("\n");
            sb.Append("  AffiliateID: ").Append(AffiliateID).Append("\n");
            sb.Append("  PgpPubKey: ").Append(PgpPubKey).Append("\n");
            sb.Append("  Country: ").Append(Country).Append("\n");
            sb.Append("  GeoipCountry: ").Append(GeoipCountry).Append("\n");
            sb.Append("  GeoipRegion: ").Append(GeoipRegion).Append("\n");
            sb.Append("  Typ: ").Append(Typ).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as User);
        }

        /// <summary>
        /// Returns true if User instances are equal
        /// </summary>
        /// <param name="input">Instance of User to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(User input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.Id == input.Id ||
                    (this.Id != null &&
                    this.Id.Equals(input.Id))
                ) && 
                (
                    this.OwnerId == input.OwnerId ||
                    (this.OwnerId != null &&
                    this.OwnerId.Equals(input.OwnerId))
                ) && 
                (
                    this.Firstname == input.Firstname ||
                    (this.Firstname != null &&
                    this.Firstname.Equals(input.Firstname))
                ) && 
                (
                    this.Lastname == input.Lastname ||
                    (this.Lastname != null &&
                    this.Lastname.Equals(input.Lastname))
                ) && 
                (
                    this.Username == input.Username ||
                    (this.Username != null &&
                    this.Username.Equals(input.Username))
                ) && 
                (
                    this.Email == input.Email ||
                    (this.Email != null &&
                    this.Email.Equals(input.Email))
                ) && 
                (
                    this.Phone == input.Phone ||
                    (this.Phone != null &&
                    this.Phone.Equals(input.Phone))
                ) && 
                (
                    this.Created == input.Created ||
                    (this.Created != null &&
                    this.Created.Equals(input.Created))
                ) && 
                (
                    this.LastUpdated == input.LastUpdated ||
                    (this.LastUpdated != null &&
                    this.LastUpdated.Equals(input.LastUpdated))
                ) && 
                (
                    this.Preferences == input.Preferences ||
                    (this.Preferences != null &&
                    this.Preferences.Equals(input.Preferences))
                ) && 
                (
                    this.TFAEnabled == input.TFAEnabled ||
                    (this.TFAEnabled != null &&
                    this.TFAEnabled.Equals(input.TFAEnabled))
                ) && 
                (
                    this.AffiliateID == input.AffiliateID ||
                    (this.AffiliateID != null &&
                    this.AffiliateID.Equals(input.AffiliateID))
                ) && 
                (
                    this.PgpPubKey == input.PgpPubKey ||
                    (this.PgpPubKey != null &&
                    this.PgpPubKey.Equals(input.PgpPubKey))
                ) && 
                (
                    this.Country == input.Country ||
                    (this.Country != null &&
                    this.Country.Equals(input.Country))
                ) && 
                (
                    this.GeoipCountry == input.GeoipCountry ||
                    (this.GeoipCountry != null &&
                    this.GeoipCountry.Equals(input.GeoipCountry))
                ) && 
                (
                    this.GeoipRegion == input.GeoipRegion ||
                    (this.GeoipRegion != null &&
                    this.GeoipRegion.Equals(input.GeoipRegion))
                ) && 
                (
                    this.Typ == input.Typ ||
                    (this.Typ != null &&
                    this.Typ.Equals(input.Typ))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.Id != null)
                    hashCode = hashCode * 59 + this.Id.GetHashCode();
                if (this.OwnerId != null)
                    hashCode = hashCode * 59 + this.OwnerId.GetHashCode();
                if (this.Firstname != null)
                    hashCode = hashCode * 59 + this.Firstname.GetHashCode();
                if (this.Lastname != null)
                    hashCode = hashCode * 59 + this.Lastname.GetHashCode();
                if (this.Username != null)
                    hashCode = hashCode * 59 + this.Username.GetHashCode();
                if (this.Email != null)
                    hashCode = hashCode * 59 + this.Email.GetHashCode();
                if (this.Phone != null)
                    hashCode = hashCode * 59 + this.Phone.GetHashCode();
                if (this.Created != null)
                    hashCode = hashCode * 59 + this.Created.GetHashCode();
                if (this.LastUpdated != null)
                    hashCode = hashCode * 59 + this.LastUpdated.GetHashCode();
                if (this.Preferences != null)
                    hashCode = hashCode * 59 + this.Preferences.GetHashCode();
                if (this.TFAEnabled != null)
                    hashCode = hashCode * 59 + this.TFAEnabled.GetHashCode();
                if (this.AffiliateID != null)
                    hashCode = hashCode * 59 + this.AffiliateID.GetHashCode();
                if (this.PgpPubKey != null)
                    hashCode = hashCode * 59 + this.PgpPubKey.GetHashCode();
                if (this.Country != null)
                    hashCode = hashCode * 59 + this.Country.GetHashCode();
                if (this.GeoipCountry != null)
                    hashCode = hashCode * 59 + this.GeoipCountry.GetHashCode();
                if (this.GeoipRegion != null)
                    hashCode = hashCode * 59 + this.GeoipRegion.GetHashCode();
                if (this.Typ != null)
                    hashCode = hashCode * 59 + this.Typ.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            // AffiliateID (string) maxLength
            if(this.AffiliateID != null && this.AffiliateID.Length > 6)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for AffiliateID, length must be less than 6.", new [] { "AffiliateID" });
            }

            // PgpPubKey (string) maxLength
            if(this.PgpPubKey != null && this.PgpPubKey.Length > 16384)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for PgpPubKey, length must be less than 16384.", new [] { "PgpPubKey" });
            }

            // Country (string) maxLength
            if(this.Country != null && this.Country.Length > 3)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for Country, length must be less than 3.", new [] { "Country" });
            }

            // GeoipCountry (string) maxLength
            if(this.GeoipCountry != null && this.GeoipCountry.Length > 2)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for GeoipCountry, length must be less than 2.", new [] { "GeoipCountry" });
            }

            // GeoipRegion (string) maxLength
            if(this.GeoipRegion != null && this.GeoipRegion.Length > 2)
            {
                yield return new System.ComponentModel.DataAnnotations.ValidationResult("Invalid value for GeoipRegion, length must be less than 2.", new [] { "GeoipRegion" });
            }

            yield break;
        }
    }

}
