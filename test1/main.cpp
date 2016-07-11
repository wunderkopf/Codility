//
//  main.cpp
//  GL-Codility
//
//  Created by Oleksandr Kurylenko on 7/6/16.
//  Copyright © 2016 Kurylenko. All rights reserved.
//

#include <iostream>

bool isSomethingOnTwo(int num) {
    if (num > 0) {
        for (int i = 1; i < num; ++i) {
            if (i * i == num)
                return true;
        }
    }
    return false;
}

int solution(int A, int B) {
    int count = 0;
    for (int i = A; i <= B; ++i) {
        if (isSomethingOnTwo(i)) {
            ++count;
            //std::cout << "i = " << i << std::endl;
        }
    }
    return count;
}

int main(int argc, const char * argv[]) {
    std::cout << solution(4, 17) << std::endl;
    std::cout << "----" << std::endl;
    std::cout << solution(-5, 17) << std::endl;
    
    return 0;
}
