#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    for (int i = x; answer.size() < n; i += x) {
        answer.push_back(i);
    }
    return answer;
}

vector<long long> solution(int x, int n) {
    vector<long long> answer(n, x);

    for (int i = 1; i < n; i++)
        answer[i] = answer[i - 1] + x;

    return answer;
}

vector<long long> solution(int x, int n) {
    vector<long long> answer;

    for (int i = 0; i < n; i++) {
        answer.push_back((i + 1) * x);
    }
    return answer;
}

vector<long long> solution(int x, int n) {
    vector<long long> answer;

    for (int i = 1; i <= n; ++i)
        answer.push_back((long long)x * i);

    return answer;
}

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    int num = x;
    for (int i = 0; i < n; i++)
    {
        num = x + i * x;
        answer.push_back(num);
    }

    return answer;
}

std::vector<long long> solution(int x, int n) {
    std::vector<long long> v;
    v.reserve(n); int N = n;
    while (n--) v.push_back(x * (N - n));
    return v;
}