//
// QuoteFillRatio.swift
//
// Generated by swagger-codegen
// https://github.com/swagger-api/swagger-codegen
//

import Foundation


/** Daily Quote Fill Ratio Statistic */

public struct QuoteFillRatio: Codable {

    public var date: Date
    public var account: Double?
    public var quoteCount: Double?
    public var dealtCount: Double?
    public var quotesMavg7: Double?
    public var dealtMavg7: Double?
    public var quoteFillRatioMavg7: Double?

    public init(date: Date, account: Double?, quoteCount: Double?, dealtCount: Double?, quotesMavg7: Double?, dealtMavg7: Double?, quoteFillRatioMavg7: Double?) {
        self.date = date
        self.account = account
        self.quoteCount = quoteCount
        self.dealtCount = dealtCount
        self.quotesMavg7 = quotesMavg7
        self.dealtMavg7 = dealtMavg7
        self.quoteFillRatioMavg7 = quoteFillRatioMavg7
    }


}

