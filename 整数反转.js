/**
 * @param {number} x
 * @return {number}
 */
var reverse = function (x) {
    const str = x.toString();
    if (str[0] === '-') {
        return parseInt('-' + str.slice(1).split('').reverse().join(''), 10) < -2147483648 ? 0 : parseInt('-' + str.slice(1).split('').reverse().join(''), 10);
    } else {
        return parseInt(str.split('').reverse().join(''), 10) > 2147483647 ? 0 : parseInt(str.split('').reverse().join(''), 10);
    }
};
console.log(reverse(-123456));