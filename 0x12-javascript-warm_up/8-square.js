#!/usr/bin/node

const num = Math.floor(Number(process.argv[2]));
if (!num) {
  console.log('Missing size');
} else {
  let text = '';
  for (let j = 0; j < num; j++) {
    text += 'X';
  }
  for (let i = 0; i < num; i++) {
    console.log(text);
  }
}
