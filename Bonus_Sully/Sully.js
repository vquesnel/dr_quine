var fs = require('fs');
var Promise = require('bluebird');
var exec = require('child_process').execSync;
var i = 5;
(function zdp() {
  return Promise.resolve()
    .then(() => {
      if ( i <= 0 ) {
        process.exit();
      }
      return `Sully_${i}.js`;
    })
    .then((file) => {
      if (fs.existsSync(file)) {
        i--;
        return [`Sully_${i}.js`, i];
      }
      return [file, i];
    })
    .tap(([file, i]) => {
      return fs.writeFileSync(file,`var fs = require('fs');\nvar Promise = require('bluebird');\nvar exec = require('child_process').execSync;\nvar i = ${i};\n(${zdp.toString()})()`);
    })
    .then(([file,]) => {
      return exec(`node ${file}`);
    });
})()