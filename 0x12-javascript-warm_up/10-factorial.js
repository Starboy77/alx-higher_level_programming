#!/usr/bin/node

function factorial (num) {
  if (isNaN(num)) return 1;
  if (num === 1) return 1;
  return num * factorial(num - 1);
}
const num = Math.floor(Number(process.argv[2]));
console.log(factorial(num));
