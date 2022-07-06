# 주어진 N개의 수에서 answer의 합을 가진 두개의 수의 갯수를 반환하는 알고리즘
# O(n)의 시간복잡도를 가진 알고리즘
if __name__ == "__main__":
    length = int(input("리스트 길이값: "))
    answer = int(input("원하는 정답값: "))
    array = list[length]

    array = list(map(int, input("리스트 값: ").split()))
    array.sort()  # 리스트 정렬

    start_point, end_point = 0, length -1
    count = 0

    print(f"answer: {answer}")
    print(f"list: {array}\n")

    while start_point < end_point:
        point_sum = array[start_point] + array[end_point]

        print(f"============================")
        print(f"start_point: {start_point}, {array[start_point]}")
        print(f"end_point: {end_point}, {array[end_point]}")
        print(f"sum: {point_sum}")
        print(f"current_count: {count}")

        if answer == point_sum:
            print(f"find\nincrease count")
            count += 1
            start_point += 1
            end_point -= 1
        elif answer < point_sum:
            print(f"not found")
            print(f"reduce end_point")
            end_point -= 1
        else:
            print(f"not found")
            print(f"increase start_point")
            start_point += 1

        print(" ")

    print(f"result: {count}")

