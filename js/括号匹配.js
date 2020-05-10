// 给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串，判断字符串是否有效。
// 有效字符串需满足：
// 左括号必须用相同类型的右括号闭合。
// 左括号必须以正确的顺序闭合。
// 注意空字符串可被认为是有效字符串。
//括号匹配

var isValid = function (s) {
    let stack = [];
    for (let i = 0, len = s.length; i < len; i++) {
        let item = s[i];
        if (item === '(' || item === '[' || item === '{') {
            stack.push(item)
        } else {
            let left = null;
            switch (item) {
                case ')':
                    left = '(';
                    break;
                case ']':
                    left = '[';
                    break;
                case '}':
                    left = '{';
                    break;
            }
            if (left !== stack.pop()) {
                return false;
            }
        }
    }
    return stack.length ? false : true;
};

console.log(isValid("[]()"));