/*
 * BitMEX API
 * ## REST API for the BitMEX Trading Platform  [View Changelog](/app/apiChangelog)  -  #### Getting Started  Base URI: [https://www.bitmex.com/api/v1](/api/v1)  ##### Fetching Data  All REST endpoints are documented below. You can try out any query right from this interface.  Most table queries accept `count`, `start`, and `reverse` params. Set `reverse=true` to get rows newest-first.  Additional documentation regarding filters, timestamps, and authentication is available in [the main API documentation](/app/restAPI).  _All_ table data is available via the [Websocket](/app/wsAPI). We highly recommend using the socket if you want to have the quickest possible data without being subject to ratelimits.  ##### Return Types  By default, all data is returned as JSON. Send `?_format=csv` to get CSV data or `?_format=xml` to get XML data.  ##### Trade Data Queries  _This is only a small subset of what is available, to get you started._  Fill in the parameters and click the `Try it out!` button to try any of these queries.  - [Pricing Data](#!/Quote/Quote_get)  - [Trade Data](#!/Trade/Trade_get)  - [OrderBook Data](#!/OrderBook/OrderBook_getL2)  - [Settlement Data](#!/Settlement/Settlement_get)  - [Exchange Statistics](#!/Stats/Stats_history)  Every function of the BitMEX.com platform is exposed here and documented. Many more functions are available.  ##### Swagger Specification  [⇩ Download Swagger JSON](swagger.json)  -  ## All API Endpoints  Click to expand a section. 
 *
 * OpenAPI spec version: 1.2.0
 * Contact: support@bitmex.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */


package io.swagger.client.model;

import java.util.Objects;
import java.util.Arrays;
import com.google.gson.TypeAdapter;
import com.google.gson.annotations.JsonAdapter;
import com.google.gson.annotations.SerializedName;
import com.google.gson.stream.JsonReader;
import com.google.gson.stream.JsonWriter;
import io.swagger.annotations.ApiModel;
import io.swagger.annotations.ApiModelProperty;
import java.io.IOException;
import java.math.BigDecimal;
import org.threeten.bp.OffsetDateTime;

/**
 * Affiliate
 */
@javax.annotation.Generated(value = "io.swagger.codegen.languages.JavaClientCodegen", date = "2019-12-17T20:26:16.019-05:00")
public class Affiliate {
  @SerializedName("account")
  private BigDecimal account = null;

  @SerializedName("currency")
  private String currency = null;

  @SerializedName("prevPayout")
  private BigDecimal prevPayout = null;

  @SerializedName("prevTurnover")
  private BigDecimal prevTurnover = null;

  @SerializedName("prevComm")
  private BigDecimal prevComm = null;

  @SerializedName("prevTimestamp")
  private OffsetDateTime prevTimestamp = null;

  @SerializedName("execTurnover")
  private BigDecimal execTurnover = null;

  @SerializedName("execComm")
  private BigDecimal execComm = null;

  @SerializedName("totalReferrals")
  private BigDecimal totalReferrals = null;

  @SerializedName("totalTurnover")
  private BigDecimal totalTurnover = null;

  @SerializedName("totalComm")
  private BigDecimal totalComm = null;

  @SerializedName("payoutPcnt")
  private Double payoutPcnt = null;

  @SerializedName("pendingPayout")
  private BigDecimal pendingPayout = null;

  @SerializedName("timestamp")
  private OffsetDateTime timestamp = null;

  @SerializedName("referrerAccount")
  private Double referrerAccount = null;

  @SerializedName("referralDiscount")
  private Double referralDiscount = null;

  @SerializedName("affiliatePayout")
  private Double affiliatePayout = null;

  public Affiliate account(BigDecimal account) {
    this.account = account;
    return this;
  }

   /**
   * Get account
   * @return account
  **/
  @ApiModelProperty(required = true, value = "")
  public BigDecimal getAccount() {
    return account;
  }

  public void setAccount(BigDecimal account) {
    this.account = account;
  }

  public Affiliate currency(String currency) {
    this.currency = currency;
    return this;
  }

   /**
   * Get currency
   * @return currency
  **/
  @ApiModelProperty(required = true, value = "")
  public String getCurrency() {
    return currency;
  }

  public void setCurrency(String currency) {
    this.currency = currency;
  }

  public Affiliate prevPayout(BigDecimal prevPayout) {
    this.prevPayout = prevPayout;
    return this;
  }

   /**
   * Get prevPayout
   * @return prevPayout
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getPrevPayout() {
    return prevPayout;
  }

  public void setPrevPayout(BigDecimal prevPayout) {
    this.prevPayout = prevPayout;
  }

  public Affiliate prevTurnover(BigDecimal prevTurnover) {
    this.prevTurnover = prevTurnover;
    return this;
  }

   /**
   * Get prevTurnover
   * @return prevTurnover
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getPrevTurnover() {
    return prevTurnover;
  }

  public void setPrevTurnover(BigDecimal prevTurnover) {
    this.prevTurnover = prevTurnover;
  }

  public Affiliate prevComm(BigDecimal prevComm) {
    this.prevComm = prevComm;
    return this;
  }

   /**
   * Get prevComm
   * @return prevComm
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getPrevComm() {
    return prevComm;
  }

  public void setPrevComm(BigDecimal prevComm) {
    this.prevComm = prevComm;
  }

  public Affiliate prevTimestamp(OffsetDateTime prevTimestamp) {
    this.prevTimestamp = prevTimestamp;
    return this;
  }

   /**
   * Get prevTimestamp
   * @return prevTimestamp
  **/
  @ApiModelProperty(value = "")
  public OffsetDateTime getPrevTimestamp() {
    return prevTimestamp;
  }

  public void setPrevTimestamp(OffsetDateTime prevTimestamp) {
    this.prevTimestamp = prevTimestamp;
  }

  public Affiliate execTurnover(BigDecimal execTurnover) {
    this.execTurnover = execTurnover;
    return this;
  }

   /**
   * Get execTurnover
   * @return execTurnover
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getExecTurnover() {
    return execTurnover;
  }

  public void setExecTurnover(BigDecimal execTurnover) {
    this.execTurnover = execTurnover;
  }

  public Affiliate execComm(BigDecimal execComm) {
    this.execComm = execComm;
    return this;
  }

   /**
   * Get execComm
   * @return execComm
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getExecComm() {
    return execComm;
  }

  public void setExecComm(BigDecimal execComm) {
    this.execComm = execComm;
  }

  public Affiliate totalReferrals(BigDecimal totalReferrals) {
    this.totalReferrals = totalReferrals;
    return this;
  }

   /**
   * Get totalReferrals
   * @return totalReferrals
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getTotalReferrals() {
    return totalReferrals;
  }

  public void setTotalReferrals(BigDecimal totalReferrals) {
    this.totalReferrals = totalReferrals;
  }

  public Affiliate totalTurnover(BigDecimal totalTurnover) {
    this.totalTurnover = totalTurnover;
    return this;
  }

   /**
   * Get totalTurnover
   * @return totalTurnover
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getTotalTurnover() {
    return totalTurnover;
  }

  public void setTotalTurnover(BigDecimal totalTurnover) {
    this.totalTurnover = totalTurnover;
  }

  public Affiliate totalComm(BigDecimal totalComm) {
    this.totalComm = totalComm;
    return this;
  }

   /**
   * Get totalComm
   * @return totalComm
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getTotalComm() {
    return totalComm;
  }

  public void setTotalComm(BigDecimal totalComm) {
    this.totalComm = totalComm;
  }

  public Affiliate payoutPcnt(Double payoutPcnt) {
    this.payoutPcnt = payoutPcnt;
    return this;
  }

   /**
   * Get payoutPcnt
   * @return payoutPcnt
  **/
  @ApiModelProperty(value = "")
  public Double getPayoutPcnt() {
    return payoutPcnt;
  }

  public void setPayoutPcnt(Double payoutPcnt) {
    this.payoutPcnt = payoutPcnt;
  }

  public Affiliate pendingPayout(BigDecimal pendingPayout) {
    this.pendingPayout = pendingPayout;
    return this;
  }

   /**
   * Get pendingPayout
   * @return pendingPayout
  **/
  @ApiModelProperty(value = "")
  public BigDecimal getPendingPayout() {
    return pendingPayout;
  }

  public void setPendingPayout(BigDecimal pendingPayout) {
    this.pendingPayout = pendingPayout;
  }

  public Affiliate timestamp(OffsetDateTime timestamp) {
    this.timestamp = timestamp;
    return this;
  }

   /**
   * Get timestamp
   * @return timestamp
  **/
  @ApiModelProperty(value = "")
  public OffsetDateTime getTimestamp() {
    return timestamp;
  }

  public void setTimestamp(OffsetDateTime timestamp) {
    this.timestamp = timestamp;
  }

  public Affiliate referrerAccount(Double referrerAccount) {
    this.referrerAccount = referrerAccount;
    return this;
  }

   /**
   * Get referrerAccount
   * @return referrerAccount
  **/
  @ApiModelProperty(value = "")
  public Double getReferrerAccount() {
    return referrerAccount;
  }

  public void setReferrerAccount(Double referrerAccount) {
    this.referrerAccount = referrerAccount;
  }

  public Affiliate referralDiscount(Double referralDiscount) {
    this.referralDiscount = referralDiscount;
    return this;
  }

   /**
   * Get referralDiscount
   * @return referralDiscount
  **/
  @ApiModelProperty(value = "")
  public Double getReferralDiscount() {
    return referralDiscount;
  }

  public void setReferralDiscount(Double referralDiscount) {
    this.referralDiscount = referralDiscount;
  }

  public Affiliate affiliatePayout(Double affiliatePayout) {
    this.affiliatePayout = affiliatePayout;
    return this;
  }

   /**
   * Get affiliatePayout
   * @return affiliatePayout
  **/
  @ApiModelProperty(value = "")
  public Double getAffiliatePayout() {
    return affiliatePayout;
  }

  public void setAffiliatePayout(Double affiliatePayout) {
    this.affiliatePayout = affiliatePayout;
  }


  @Override
  public boolean equals(java.lang.Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    Affiliate affiliate = (Affiliate) o;
    return Objects.equals(this.account, affiliate.account) &&
        Objects.equals(this.currency, affiliate.currency) &&
        Objects.equals(this.prevPayout, affiliate.prevPayout) &&
        Objects.equals(this.prevTurnover, affiliate.prevTurnover) &&
        Objects.equals(this.prevComm, affiliate.prevComm) &&
        Objects.equals(this.prevTimestamp, affiliate.prevTimestamp) &&
        Objects.equals(this.execTurnover, affiliate.execTurnover) &&
        Objects.equals(this.execComm, affiliate.execComm) &&
        Objects.equals(this.totalReferrals, affiliate.totalReferrals) &&
        Objects.equals(this.totalTurnover, affiliate.totalTurnover) &&
        Objects.equals(this.totalComm, affiliate.totalComm) &&
        Objects.equals(this.payoutPcnt, affiliate.payoutPcnt) &&
        Objects.equals(this.pendingPayout, affiliate.pendingPayout) &&
        Objects.equals(this.timestamp, affiliate.timestamp) &&
        Objects.equals(this.referrerAccount, affiliate.referrerAccount) &&
        Objects.equals(this.referralDiscount, affiliate.referralDiscount) &&
        Objects.equals(this.affiliatePayout, affiliate.affiliatePayout);
  }

  @Override
  public int hashCode() {
    return Objects.hash(account, currency, prevPayout, prevTurnover, prevComm, prevTimestamp, execTurnover, execComm, totalReferrals, totalTurnover, totalComm, payoutPcnt, pendingPayout, timestamp, referrerAccount, referralDiscount, affiliatePayout);
  }


  @Override
  public String toString() {
    StringBuilder sb = new StringBuilder();
    sb.append("class Affiliate {\n");
    
    sb.append("    account: ").append(toIndentedString(account)).append("\n");
    sb.append("    currency: ").append(toIndentedString(currency)).append("\n");
    sb.append("    prevPayout: ").append(toIndentedString(prevPayout)).append("\n");
    sb.append("    prevTurnover: ").append(toIndentedString(prevTurnover)).append("\n");
    sb.append("    prevComm: ").append(toIndentedString(prevComm)).append("\n");
    sb.append("    prevTimestamp: ").append(toIndentedString(prevTimestamp)).append("\n");
    sb.append("    execTurnover: ").append(toIndentedString(execTurnover)).append("\n");
    sb.append("    execComm: ").append(toIndentedString(execComm)).append("\n");
    sb.append("    totalReferrals: ").append(toIndentedString(totalReferrals)).append("\n");
    sb.append("    totalTurnover: ").append(toIndentedString(totalTurnover)).append("\n");
    sb.append("    totalComm: ").append(toIndentedString(totalComm)).append("\n");
    sb.append("    payoutPcnt: ").append(toIndentedString(payoutPcnt)).append("\n");
    sb.append("    pendingPayout: ").append(toIndentedString(pendingPayout)).append("\n");
    sb.append("    timestamp: ").append(toIndentedString(timestamp)).append("\n");
    sb.append("    referrerAccount: ").append(toIndentedString(referrerAccount)).append("\n");
    sb.append("    referralDiscount: ").append(toIndentedString(referralDiscount)).append("\n");
    sb.append("    affiliatePayout: ").append(toIndentedString(affiliatePayout)).append("\n");
    sb.append("}");
    return sb.toString();
  }

  /**
   * Convert the given object to string with each line indented by 4 spaces
   * (except the first line).
   */
  private String toIndentedString(java.lang.Object o) {
    if (o == null) {
      return "null";
    }
    return o.toString().replace("\n", "\n    ");
  }

}

