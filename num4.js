function recursiveSum(array){
    if(array.length === 0){
        return 0;
    }
    return array.pop() + recursiveSum(array);
}

console.log(recursiveSum([1,2,3,4,5]));

//recursive lamda sum
lambdaSum = (array) => {
    if(array.length === 0){
        return 0;
    }
    return array.pop() + lambdaSum(array);
}

console.log(lambdaSum([1,2,3,4,5]));