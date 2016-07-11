//
//  main.cpp
//  GL-Codility2
//
//  Created by Oleksandr Kurylenko on 7/6/16.
//  Copyright © 2016 Kurylenko. All rights reserved.
//

#include <iostream>

int digit(int val, int n) {
    std::string number = std::to_string(val);
    if (n <= number.length() - 1) {
        return (int)number[n] - '0';
    }
    return -1;
}

int count(int val) {
    std::string number = std::to_string(val);
    return (int)number.length();
}

int solution(int A, int B) {
    std::string result;
    for (int i = 0; i < count(A) + count(B); ++i) {
        int a = digit(A, i);
        int b = digit(B, i);
        if (a != -1)
            result.push_back(a + '0');
        if (b != -1)
            result.push_back(b + '0');
    }
    int res = std::stoi(result);
    if (res >= 100000000)
        return -1;
    
    return res;
}

int main(int argc, const char * argv[]) {
    std::cout << solution(12345, 678) << "\n";
    std::cout << solution(12, 56) << "\n";
    std::cout << solution(56, 12) << "\n";
    std::cout << solution(123, 67890) << "\n";
    return 0;
}
