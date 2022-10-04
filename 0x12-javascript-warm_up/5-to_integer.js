#!/usr/bin/node

if (typeof process.argv[2] !== 'number') {
  const num = Math.floor(Number(process.argv[2]));
  if (!num) console.log('Not a number');
  else console.log(`My number: ${num}`);
}
