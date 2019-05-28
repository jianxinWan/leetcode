// 给定一个包含 n 个整数的数组 nums 和一个目标值 target，判断 nums 中是否存在四个元素 a，b，c 和 d ，使得 a + b + c + d 的值与 target 相等？找出所有满足条件且不重复的四元组。
// 注意：
// 答案中不可以包含重复的四元组。
// 示例：
// 给定数组 nums = [1, 0, -1, 0, -2, 2]，和 target = 0。
// 满足要求的四元组集合为：
// [
//   [-1,  0, 0, 1],
//   [-2, -1, 1, 2],
//   [-2,  0, 0, 2]
// ]

var fourSum = function (nums, target) {
    const len = nums.length;
    let res = [];
    if (len < 4) return [];
    nums = nums.sort(function (a, b) {
        if (a < b) {
            return -1;
        }
        if (a > b) {
            return 1;
        }
        return 0;
    });
    for (let i = 0; i < len - 3; i++) {
        //最小的相加大于target
        if (nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target) break;
        //当前数加上
        if (nums[i] + nums[len - 1] + nums[len - 2] + nums[len - 3] < target)
            continue;
        //数字重复
        if (i > 0 && nums[i] === nums[i - 1]) continue;

        for (let j = i + 1; j < len - 2; j++) {
            //最小的相加大于target
            if (nums[i] + nums[j] + nums[j + 1] + nums[j + 2] > target) break;
            //当前数加上
            if (nums[i] + nums[j] + nums[len - 1] + nums[len - 2] < target) continue;
            //数字重复
            if (j - i > 1 && nums[j] === nums[j - 1]) continue;
            //定义两个指针
            left = j + 1;
            right = len - 1;
            while (left < right) {
                temp = nums[i] + nums[j] + nums[left] + nums[right];
                if (temp === target) {
                    res.push([nums[i], nums[j], nums[left], nums[right]]);
                    while (left < right && nums[left] === nums[left + 1]) {
                        left += 1;
                    }
                    while (left < right && nums[right] === nums[right - 1]) {
                        right -= 1;
                    }
                    left += 1;
                    right -= 1;
                } else if (temp > target) {
                    right -= 1;
                } else {
                    left += 1;
                }
            }
        }
    }
    return res;
};

console.log(fourSum([-1, 0, -5, -2, -2, -4, 0, 1, -2], -9));