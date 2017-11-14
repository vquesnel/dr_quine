/*OUTSIDE COMMENT*/
function print(){
}
(function main(){
/*INSIDE COMMENT*/
print();
console.log(`/*OUTSIDE COMMENT*/\n${print.toString()}\n(${main.toString()})()`);
})()
