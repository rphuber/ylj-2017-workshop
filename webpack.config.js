const path = require('path');

module.exports = {
  webpack: {
    "entry": path.resolve(__dirname, "./lib/js/src/core/client.js"),
    "output": {
      "filename": "bundle.js",
      "path": "/public/"
    },
    "module": {
      "rules": [
        {
          "test": /\\.(js(x)+)$/,
          "use": "babel-loader"
        }
      ]
    },
    "resolve": {
      "extensions": [".ml", ".js"]
    }
  },
  middleware: {
    "publicPath": "/public/",
    "stats": {
	  	colors: true
	  },
    "serverSideRender": true,
  },
};
