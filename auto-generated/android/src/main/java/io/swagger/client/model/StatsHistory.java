/**
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

import java.math.BigDecimal;
import java.util.Date;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class StatsHistory {
  
  @SerializedName("date")
  private Date date = null;
  @SerializedName("rootSymbol")
  private String rootSymbol = null;
  @SerializedName("currency")
  private String currency = null;
  @SerializedName("volume")
  private BigDecimal volume = null;
  @SerializedName("turnover")
  private BigDecimal turnover = null;

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public Date getDate() {
    return date;
  }
  public void setDate(Date date) {
    this.date = date;
  }

  /**
   **/
  @ApiModelProperty(required = true, value = "")
  public String getRootSymbol() {
    return rootSymbol;
  }
  public void setRootSymbol(String rootSymbol) {
    this.rootSymbol = rootSymbol;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public String getCurrency() {
    return currency;
  }
  public void setCurrency(String currency) {
    this.currency = currency;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getVolume() {
    return volume;
  }
  public void setVolume(BigDecimal volume) {
    this.volume = volume;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public BigDecimal getTurnover() {
    return turnover;
  }
  public void setTurnover(BigDecimal turnover) {
    this.turnover = turnover;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    StatsHistory statsHistory = (StatsHistory) o;
    return (this.date == null ? statsHistory.date == null : this.date.equals(statsHistory.date)) &&
        (this.rootSymbol == null ? statsHistory.rootSymbol == null : this.rootSymbol.equals(statsHistory.rootSymbol)) &&
        (this.currency == null ? statsHistory.currency == null : this.currency.equals(statsHistory.currency)) &&
        (this.volume == null ? statsHistory.volume == null : this.volume.equals(statsHistory.volume)) &&
        (this.turnover == null ? statsHistory.turnover == null : this.turnover.equals(statsHistory.turnover));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.date == null ? 0: this.date.hashCode());
    result = 31 * result + (this.rootSymbol == null ? 0: this.rootSymbol.hashCode());
    result = 31 * result + (this.currency == null ? 0: this.currency.hashCode());
    result = 31 * result + (this.volume == null ? 0: this.volume.hashCode());
    result = 31 * result + (this.turnover == null ? 0: this.turnover.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class StatsHistory {\n");
    
    sb.append("  date: ").append(date).append("\n");
    sb.append("  rootSymbol: ").append(rootSymbol).append("\n");
    sb.append("  currency: ").append(currency).append("\n");
    sb.append("  volume: ").append(volume).append("\n");
    sb.append("  turnover: ").append(turnover).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
