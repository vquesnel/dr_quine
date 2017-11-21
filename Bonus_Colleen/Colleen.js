/*
  OUTSIDE COMMENT
*/
function print(){
  return;
}
(function main(){
/*
  INSIDE COMMENT
*/
print();
return console.log(`/*\n  OUTSIDE COMMENT\n*/\n${print.toString()}\n(${main.toString()})()`);
})()
