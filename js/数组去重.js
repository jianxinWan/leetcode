var removeDuplicates = function (nums) {
    return Array.from(new Set(nums));
};
console.log(removeDuplicates([1, 1, 2]));