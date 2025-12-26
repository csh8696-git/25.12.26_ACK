#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            answer += i;
        }
    }
    return answer;
}


#include<iostream>
#include<cmath>
using namespace std;

int sumDivisor(int n)
{
    int sum = 0;
    for (int i = 1; i <= sqrt(n); i++) if (n % i == 0) { sum += i; if (n != i * i) sum += n / i; }
    return sum;
}

int main()
{
    int testCase = 12;
    int testAnswer = sumDivisor(testCase);

    cout << testAnswer;
}

#include <cmath>
int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= sqrt(n); i++)
        answer += !(n % i) ? i == n / i ? i : i + n / i : 0;
    return answer;
}