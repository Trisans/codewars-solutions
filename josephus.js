function josephus(nums, inc) {
    let solution = [];
    let idx = 0;

    while (nums.length > 0) {
        idx += inc - 1;
        idx %= nums.length;
        solution.push(nums[idx]);
        nums.splice(idx, 1);
    }
    return solution;
}

console.log(josephus([1, 2, 3, 4, 5, 6, 7], 3));