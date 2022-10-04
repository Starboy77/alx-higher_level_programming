#!/usr/bin/node

const num = Math.floor(Number(process.argv[2]));
if (!num) {
  console.log('Missing number of occurrences');
} else {
  let i = 0;
  while (i < num) {
    console.log('C is fun');
    i++;
  }
}
