// Generated by BUCKLESCRIPT VERSION 1.7.1, PLEASE EDIT WITH CARE
'use strict';

var Mocha   = require("mocha");
var Assert  = require("assert");
var Helpers = require("../helpers.js");

function koans() {
  Mocha.describe("Number Conversions", function () {
        Mocha.it("float converts an int to a float", function () {
              Assert.equal(5, Helpers.__(/* () */0));
              return /* () */0;
            });
        Mocha.it("floor rounds a float down", function () {
              Assert.equal(Math.floor(3.6), Helpers.__(/* () */0));
              return /* () */0;
            });
        Mocha.it("floor rounds a negative float down", function () {
              Assert.equal(Math.floor(-3.6), Helpers.__(/* () */0));
              return /* () */0;
            });
        Mocha.it("ceiling rounds a float up", function () {
              Assert.equal(Math.ceil(3.6), Helpers.__(/* () */0));
              return /* () */0;
            });
        Mocha.it("ceiling rounds a negative float up", function () {
              Assert.equal(Math.ceil(-3.6), Helpers.__(/* () */0));
              return /* () */0;
            });
        Mocha.it("truncate converts a float to an int (rounding towards 0)", function () {
              Assert.equal(3, Helpers.__(/* () */0));
              return /* () */0;
            });
        Mocha.it("truncate converts a float to an int (rounding towards 0)", function () {
              Assert.equal(-3, Helpers.__(/* () */0));
              return /* () */0;
            });
        return /* () */0;
      });
  return /* () */0;
}

exports.koans = koans;
/* mocha Not a pure module */
