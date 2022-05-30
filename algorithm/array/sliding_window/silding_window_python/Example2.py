from collections import deque


class Node:
    def __init__(self, index, value):
        self.index = index
        self.value = value


if __name__ == "__main__":
    deque = deque()
    answer = f""

    N = int(input("list의 길이를 입력하시오: "))
    window_size = int(input("윈도우의 길이를 입력하시오: "))

    array = list(map(int, int(input()).split()))

    for index, value in enumerate(array):
        if deque[0].index < window_size < (N - index):
            deque.popleft()

        deque.append(Node(index, value))
        answer += f"{} "

