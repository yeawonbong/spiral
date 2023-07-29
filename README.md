# spiral
filling the array spirally.

## 실행방법
- 컴파일: `make`
    - 실행파일 삭제: `make clean`
    - 삭제 후 재실행: `make re`
- 실행: `./spiral`
  
## 설명
- 함수포인터 배열 `fnArr`을 사용하여 이동 방향을 제어하였다.
  - 함수는 각각 '동, 남, 서, 북'으로 한칸씩 이동하는 함수이다.
  - 이동하려는 칸이 배열 밖이거나 이미 채워져있다면, `0`을 반환한다.
  - 정상적으로 이동할 경우 `1`을 반환한다.
- 1부터 25까지 증가하며 수를 채운 뒤 함수를 실행하여 이동한다.
- 이 때 함수에서 `0`반환 시(방향전환이 필요한 시점) 함수포인터 배열의 인덱스를 증가시켜 진행 방향을 바꾼다.
  
## 실행모습
<img width="366" alt="스크린샷 2023-07-29 오후 5 27 44" src="https://github.com/yeawonbong/spiral/assets/75327385/814feb22-d570-4ba9-9d5a-db2065362afa">


## 참고 (문제)
![IMG_4923](https://github.com/yeawonbong/spiral/assets/75327385/cf434de0-e826-442e-b91c-4e87d7eba446)
