#include <string>
#include <vector>

using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    int x = 1;
    int i = 1;
    while (1) {
        i = n % 10;
        n = n / 10;
        answer.push_back(i);
        x = n;
        if (x == 0) {
            break;
        }
    }
    return answer;
}

vector<int> solution(long long n) {
    vector<int> answer;
    while (n) {
        answer.push_back(n % 10);
        n /= 10;
    }
    return answer;
}

#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
using namespace std;

vector<int> solution(long long n) {
    vector<int> answer;
    stringstream ss;
    ss << n;
    string str = ss.str();
    int strLength = str.length();

    for (int i = 0; i < strLength; i++)
    {
        answer.push_back(atoi(str.substr(i, 1).c_str()));
    }

    std::reverse(answer.begin(), answer.end());
    return answer;
}

#include <vector>
std::vector<int> solution(long long n) {
    std::vector<int> answer{ (int)(n % 10) };
    while (n /= 10) answer.push_back(n % 10);
    return answer;
}