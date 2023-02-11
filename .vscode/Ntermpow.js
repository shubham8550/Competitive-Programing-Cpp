let current = 3;
let result = [];
let powersOfThree = [];
let i = 0;

// Generate the first few powers of three
while (Math.pow(3, i) <= 1000) {
  powersOfThree.push(Math.pow(3, i));
  i++;
}

for (let j = 0; j < 20; j++) {
  if (!powersOfThree.includes(current)) {
    result.push(current);
    current += 3;
  } else {
    for (let k = 0; k < powersOfThree.length; k++) {
      for (let l = k + 1; l < powersOfThree.length; l++) {
        if (powersOfThree[k] + powersOfThree[l] === current) {
          result.push(current);
          current += 3;
        }
      }
    }
  }
}

console.log(result);
