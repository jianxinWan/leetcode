//
// Created by 万建新 on 2020-05-30.
//

#include "countAndSay.h"
#include <stack>
string countAndSay::index(int n) {
    if (n == 1)
        return "1";

    string output = "1", seq;
    stack<char> win;
    int count = 1;
    size_t fre = 0;
    char value;

    // 考虑n>=2的情形
    while(count != n) {
        seq.clear();
        seq = output;
        output.clear();

        // n = 2时
        if (seq.size() == 1)
            output = "11";
        else {
            // n > 2时, 滑动窗口(利用stack作为滑动窗口)
            win.push(seq[0]); ///< 从第1个元素开始处理
            for (size_t i = 1; i < seq.size(); i++) {
                // 对seq中剩余元素，逐个判断比较
                if (seq[i] == win.top()) {
                    // 若相等，则入栈
                    win.push(seq[i]);

                } else {
                    // 若不相等，则描述前面相等部分，
                    // 然后删除相等部分，插入新的不等元素
                    fre = win.size();
                    value = win.top();
                    output.push_back(fre + '0');
                    output.push_back(value);
                    while(win.size())
                        win.pop();

                    win.push(seq[i]);
                }

                // 判断是否到seq尾部, 到达尾部后，计算窗口stack中的元素个数和值
                if (i == seq.size()-1) {
                    fre = win.size();
                    value = win.top();
                    output.push_back(fre + '0');
                    output.push_back(value);
                    while(win.size())
                        win.pop();
                }
            }
        }
        count++;
    }
    return output;
}