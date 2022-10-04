#!/usr/bin/node

const arr = process.argv.slice(2, process.argv.length);
if (process.argv.length <= 3) console.log(0);
else {
  const big = arr.reduce((a, b) => a > b ? a : b);
  const index = arr.indexOf(big);
  if (index && index > -1) {
    arr.splice(index, 1);
  }
  const again = arr.reduce((a, b) => a > b ? a : b);
  console.log(again);
}
