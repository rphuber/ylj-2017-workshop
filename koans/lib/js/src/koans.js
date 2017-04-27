// Generated by BUCKLESCRIPT VERSION 1.7.1, PLEASE EDIT WITH CARE
'use strict';

var List                         = require("bs-platform/lib/js/list.js");
var Curry                        = require("bs-platform/lib/js/curry.js");
var Mocha                        = require("mocha");
var Koan16_Time                  = require("./koans/koan16_Time.js");
var Koan18_Sets                  = require("./koans/koan18_Sets.js");
var Koan08_Maybe                 = require("./koans/koan08_Maybe.js");
var Koan09_Lists                 = require("./koans/koan09_Lists.js");
var Koan17_Dates                 = require("./koans/koan17_Dates.js");
var Koan10_Arrays                = require("./koans/koan10_Arrays.js");
var Koan11_Tuples                = require("./koans/koan11_Tuples.js");
var Koan01_Expects               = require("./koans/koan01_Expects.js");
var Koan13_Results               = require("./koans/koan13_Results.js");
var Koan14_Strings               = require("./koans/koan14_Strings.js");
var Koan15_Regexes               = require("./koans/koan15_Regexes.js");
var Koan19_Records               = require("./koans/koan19_Records.js");
var Koan02_Literals              = require("./koans/koan02_Literals.js");
var Koan07_Functions             = require("./koans/koan07_Functions.js");
var Koan20_UnionTypes            = require("./koans/koan20_UnionTypes.js");
var Koan12_Dictionaries          = require("./koans/koan12_Dictionaries.js");
var Koan04_LogicalOperators      = require("./koans/koan04_LogicalOperators.js");
var Koan06_NumberConversions     = require("./koans/koan06_NumberConversions.js");
var Koan03_ComparisonOperators   = require("./koans/koan03_ComparisonOperators.js");
var Koan05_MathematicalOperators = require("./koans/koan05_MathematicalOperators.js");

function iterator(M) {
  return Curry._1(M[/* koans */0], /* () */0);
}

Mocha.describe("ReasonML bucklescript Koans", function () {
      return List.iter(iterator, /* :: */[
                  /* Koan01_Expects */[Koan01_Expects.koans],
                  /* :: */[
                    /* Koan02_Literals */[Koan02_Literals.koans],
                    /* :: */[
                      /* Koan03_ComparisonOperators */[Koan03_ComparisonOperators.koans],
                      /* :: */[
                        /* Koan04_LogicalOperators */[Koan04_LogicalOperators.koans],
                        /* :: */[
                          /* Koan05_MathematicalOperators */[Koan05_MathematicalOperators.koans],
                          /* :: */[
                            /* Koan06_NumberConversions */[Koan06_NumberConversions.koans],
                            /* :: */[
                              [Koan07_Functions.koans],
                              /* :: */[
                                /* Koan08_Maybe */[Koan08_Maybe.koans],
                                /* :: */[
                                  [Koan09_Lists.koans],
                                  /* :: */[
                                    [Koan10_Arrays.koans],
                                    /* :: */[
                                      /* Koan11_Tuples */[Koan11_Tuples.koans],
                                      /* :: */[
                                        /* Koan12_Dictionaries */[Koan12_Dictionaries.koans],
                                        /* :: */[
                                          /* Koan13_Results */[Koan13_Results.koans],
                                          /* :: */[
                                            /* Koan14_Strings */[Koan14_Strings.koans],
                                            /* :: */[
                                              /* Koan15_Regexes */[Koan15_Regexes.koans],
                                              /* :: */[
                                                /* Koan16_Time */[Koan16_Time.koans],
                                                /* :: */[
                                                  /* Koan17_Dates */[Koan17_Dates.koans],
                                                  /* :: */[
                                                    /* Koan18_Sets */[Koan18_Sets.koans],
                                                    /* :: */[
                                                      /* Koan19_Records */[Koan19_Records.koans],
                                                      /* :: */[
                                                        /* Koan20_UnionTypes */[Koan20_UnionTypes.koans],
                                                        /* [] */0
                                                      ]
                                                    ]
                                                  ]
                                                ]
                                              ]
                                            ]
                                          ]
                                        ]
                                      ]
                                    ]
                                  ]
                                ]
                              ]
                            ]
                          ]
                        ]
                      ]
                    ]
                  ]
                ]);
    });

exports.iterator = iterator;
/*  Not a pure module */