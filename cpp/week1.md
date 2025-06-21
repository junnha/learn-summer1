# C++ Week 1 Summary

## 1. 입출력 (I/O)
- `cin`, `cout` 사용
- `#include <iostream>`
- `using namespace std;` → 편의성 (주의 필요)

```cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    cout << "입력값: " << a << endl;
}