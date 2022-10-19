unsortedArray = [5, 4,2,1,3];
function recursiveInsertionSort(unsortedArray) {
    if (unsortedArray.length <= 1) {
        return unsortedArray;
    }
    var temp = unsortedArray.pop();
    array = recursiveInsertionSort(unsortedArray);

    for(var i=array.length-1; i>=0; i--) {
        if(temp > array[i]) {
            newarray = array.splice(i+1, 0, temp);
            return newarray
        }
    }
    return [temp].concat( array);

}


console.log(recursiveInsertionSort(unsortedArray));