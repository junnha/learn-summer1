# C++ STL 요약 정리

---

## STL 목록

### 1. `vector`
- 동적 배열
- 주요 함수:
  - `v.push_back(x)`
  - `v.size()`
  - `v[i]`, `v.at(i)`
  - `v.begin()`, `v.end()`
  - `sort(v.begin(), v.end())`

### 2. `array`
- 정적 배열
- `<array>` 헤더 필요
- `array<int, 5> a = {1,2,3,4,5};`

### 3. `list`
- 이중 연결 리스트 (Doubly Linked List)
- 주요 함수:
  - `l.push_back(x)`
  - `l.push_front(x)`
  - `l.insert(it, x)`
  - `l.erase(it)`
  - `l.begin()`, `l.end()`

### 4. `string`
- 문자열 클래스
- 주요 함수:
  - `s.length()`, `s.size()`
  - `s[i]`
  - `s.substr(start, length)`
  - `s.find("abc")`

### 5. `queue`
- FIFO 구조
- 주요 함수:
  - `q.push(x)`
  - `q.pop()`
  - `q.front()`, `q.back()`
  - `q.empty()`

### 6. `stack`
- LIFO 구조
- 주요 함수:
  - `s.push(x)`
  - `s.pop()`
  - `s.top()`
  - `s.empty()`

### 7. `deque`
- 양방향 큐
- `push_front()`, `push_back()`, `pop_front()`, `pop_back()`

### 8. `set`
- 중복 없이 정렬된 값 저장
- 주요 함수:
  - `s.insert(x)`
  - `s.find(x)`
  - `s.erase(x)`
  - `s.count(x)`

### 9. `map`
- Key-Value 저장
- 주요 함수:
  - `m[key] = value`
  - `m.find(key)`
  - `m.erase(key)`