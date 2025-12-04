#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v1 = {1, 3, 5, 7};
    std::vector<int> v2 = {2, 4, 6, 8};
    std::vector<int> merged;

    std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), std::back_inserter(merged));

    std::cout << "Merged Vector: ";
    for (int num : merged)
        std::cout << num << " ";

    return 0;
}
