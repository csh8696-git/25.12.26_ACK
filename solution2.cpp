#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 1) {
            answer = i;
            break;
        }
    }
    return answer;
}

int main() {
    solution(15);
}

int solution(int n) {
    if (n & 1) return 2;
    else for (int i = 3; i < n; i += 2) if (n % i == 1) return i;
}