var fs = require("fs");
(function zdp() {
	fs.writeFileSync("Grace_kid.js", "var fs = require(\"fs\");\n(" + zdp.toString() + ")()");
})()