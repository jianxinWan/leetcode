//最长公共字串
/**
 * @param {string[]} strs
 * @return {string}
 */

var longestCommonPrefix = function (strs) {
    let res = "";
    if (strs.length > 0) {
        if (strs[0].length > 0) {
            for (let i = 0, strLen = strs[0].length; i < strLen; i++) {
                res += strs[0][i];
                for (let j = 1, len = strs.length; j < len; j++) {
                    if (strs[j].indexOf(res) !== 0) {
                        return res.slice(0, -1);
                    }
                }
            }
            return res;
        } else {
            return "";
        }
    }
    if (strs.length === 1) {
        return strs[0];
    }
    return "";
};
console.log(longestCommonPrefix(["ca", "a"]));