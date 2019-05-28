var singleNumber = function (nums) {
    nums = nums.sort();
    console.log(nums);
    const len = nums.length;
    if (nums[0] !== nums[1]) {
        return nums[0];
    }
    if (nums[len - 2] !== nums[len - 1]) {
        return nums[len - 1];
    }
    for (let i = 2; i < len - 1; i++) {
        if (nums[i] !== nums[i - 1] && nums[i] !== nums[i + 1]) {
            return nums[i];
        }
    }
};
console.log(
    singleNumber([
        17,
        12,
        5,
        -6,
        12,
        4,
        17,
        -5,
        2,
        -3,
        2,
        4,
        5,
        16,
        -3,
        -4,
        15,
        15,
        -4,
        -5,
        -6
    ])
);