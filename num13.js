lambdaFactorial = (n) => {
  if (n === 0) {
    return 1;
  } else {
    return n * lambdaFactorial(n - 1);
  }
}

console.log(lambdaFactorial(3));