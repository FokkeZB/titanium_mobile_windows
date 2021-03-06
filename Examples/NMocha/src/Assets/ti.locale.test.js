/*
 * Appcelerator Titanium Mobile
 * Copyright (c) 2015 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 */

var should = require('./should');

describe('Titanium.Locale', function () {
    it('Ti.Locale', function (finish) {
        should(Ti.Locale).not.be.undefined;
        should(Ti.Locale).not.be.null;
        should(Ti.Locale).be.an.Object;
        finish();
    });

    it('Ti.Locale.getString', function (finish) {
        should(Ti.Locale.getString).be.a.Function;
        finish();
    });

    it('L', function (finish) {
        should(L).be.a.Function;
        should(L).eql(Ti.Locale.getString);
        finish();
    });

    it('Ti.Locale.getCurrentCountry', function (finish) {
        should(Ti.Locale.getCurrentCountry).be.a.Function;
        finish();
    });

    it('Ti.Locale.getCurrentLanguage', function (finish) {
        should(Ti.Locale.getCurrentLanguage).be.a.Function;
        finish();
    });

    it('Ti.Locale.getLocaleCurrencySymbol', function (finish) {
        should(Ti.Locale.getLocaleCurrencySymbol).be.a.Function;
        finish();
    });

    it('Ti.Locale.getCurrencySymbol', function (finish) {
        should(Ti.Locale.getCurrencySymbol).be.a.Function;
        finish();
    });

    it('Ti.Locale.getCurrencyCode', function (finish) {
        should(Ti.Locale.getCurrencyCode).be.a.Function;
        finish();
    });

    it('Ti.Locale.formatTelephoneNumber', function (finish) {
        should(Ti.Locale.formatTelephoneNumber).be.a.Function;
        finish();
    });

    it('Ti.Locale.currentCountry', function (finish) {
        should(Ti.Locale.currentCountry).be.a.String;
        finish();
    });

    it('Ti.Locale.currentLanguage', function (finish) {
        should(Ti.Locale.currentLanguage).be.a.String;
        finish();
    });
    
    it('Ti.Locale.currentLocale', function (finish) {
        should(Ti.Locale.currentLocale).be.a.String;
        finish();
    });

    it.skip('Ti.Locale.getString_format', function (finish) {
        var i18nMissingMsg = '<no translation available>';
        var string1 = 'You say ' + Ti.Locale.getString('signoff', i18nMissingMsg) + ' and I say ' + Ti.Locale.getString('greeting', i18nMissingMsg) + '!';
        var string2 = String.format(L('phrase'), L('greeting', i18nMissingMsg), L('signoff', i18nMissingMsg));

        if (Ti.Locale.currentLanguage == 'en') {
            should(string1).eql('You say goodbye and I say hello!');
            should(string2).eql('You say goodbye and I say hello!');
        } else if (Ti.Locale.currentLanguage == 'ja') {
            should(string1).eql('You say さようなら and I say こんにちは!');
            should(string2).eql('You say さようなら and I say こんにちは!');
        }

        finish();
    });
});
