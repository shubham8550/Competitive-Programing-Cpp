function LookSaySequence(num) {
  var arr = num.toString().split("");
  var arr2 = [];
  for (var i = 0; i < arr.length; i++) {
    if (arr[i + 1] !== arr[i]) {
      arr2.push(1, arr[i]);
    }
    if (arr[i + 1] === arr[i] && arr[i + 2] === arr[i]) {
      arr2.push(3, arr[i]);
      i += 2;
    }
    if (arr[i + 1] === arr[i]) {
      arr2.push(2, arr[i]);
      i += 1;
    }
  }
  return arr2.join("");
}
