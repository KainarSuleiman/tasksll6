

//task1

#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}

//task2



#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}


//task3


#include <iostream>
#include <string>
using namespace std;

void reverseString(string &str, int start, int end) {
    if (start >= end) {
        return;
    }
    swap(str[start], str[end]);
    reverseString(str, start + 1, end - 1);
}

int main() {
    string s;
    cin >> s;
    reverseString(s, 0, s.length() - 1);
    cout << s << endl;
    return 0;
}

//task4


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> nums;
    int num, target;
    
    while (cin >> num) {
        nums.push_back(num);
    }
    cin.clear();
    
    // Last number is the target to count
    target = nums.back();
    nums.pop_back();
    
    int count_val = count(nums.begin(), nums.end(), target);
    auto min_val = *min_element(nums.begin(), nums.end());
    auto max_val = *max_element(nums.begin(), nums.end());
    
    cout << "Count of " << target << ": " << count_val << endl;
    cout << "Min: " << min_val << endl;
    cout << "Max: " << max_val << endl;
    
    return 0;
}


//task5 

#include <iostream>
using namespace std;

int power(int a, int b) {
    if (b == 0) return 1;
    return a * power(a, b - 1);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << power(a, b) << endl;
    return 0;
}
