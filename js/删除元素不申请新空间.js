// 删除数组中指定元素，不申请新的空间

/**
 * @param {number[]} nums
 * @param {number} val
 * @return {number}
 */
var removeElement = function (nums, val) {
    const len = nums.length;
    let sameCount = 0;
    let temp = null;
    for (let i = 0; i < len; i++) {
        if (nums[i] === val) {
            sameCount++;
        } else {
            temp = nums[i];
            nums[i] = nums[i - sameCount];
            nums[i - sameCount] = temp;
        }
    }
    console.log(nums, len - sameCount);
    return len - sameCount;
};

removeElement([2, 3, 3, 4, 2], 3);