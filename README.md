# 코딩문제
## 1. 개요
<pre><code>고등학생 개발자 김민성의 좌충우돌 코딩 문제 해결</code></pre>

[Baekjoon](https://www.acmicpc.net)에서 대부분의 문제를 찾고 푼 코드 및 설명을 업로드합니다

## 2. 문제들
### 2.1 [약수문제](https://www.acmicpc.net/problem/1037)
초안: m에 각 약수중 제일 작은거 저장, n에 가장 큰거 저장 왜냐하면 예를들어 12의 약수는 2, 3 , 4 ,6이 나올테니까 근데 이 순서는 알 수 가 없음. 그래서 제일 큰 6과 제일 작은 2를 곱하면 12가 나오게 됨
<pre><code>i는 약수 갯수, max는 최댓값, min은 최솟값. arr에 각 약수들을 넣었습니다. 
위에 작성한 것 처럼 12의 약수는 2, 3, 4, 6이니까 양 끝의 인덱스를 곱하면 될 것 같지만, 
문제에서 3, 6, 2 ,4 이런 식으로 약수를 무슨 순서로 넣을지 모르기 때문에 이 방법은 사용할 수 없습니다. 
그래서 반복문을 이용해서 최댓값 예)6, 최솟값 예) 2를 구한다음, 둘을 곱하여 정답을 구했습니다</code></pre>
### 2.2 추가중...

