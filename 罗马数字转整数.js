/**
 * @param {string} s
 * @return {number}
 */
var romanToInt = function (s) {
    const rule = new Map([
        ['I', 1],
        ['V', 5],
        ['X', 10],
        ['L', 50],
        ['C', 100],
        ['D', 500],
        ['M', 1000],
        ['IV', 4],
        ['IX', 9],
        ['XL', 40],
        ['XC', 90],
        ['CD', 400],
        ['CM', 900],
    ])
    let res = 0;
    for (let i = 0, len = s.length; i < len; i++) {
        if (rule.has(s[i] + s[i + 1])) {
            res += rule.get(s[i] + s[i + 1]);
            i++;
        } else {
            res += rule.get(s[i]);
        }
    }
    return res
};

console.log(romanToInt("DCXXI"));