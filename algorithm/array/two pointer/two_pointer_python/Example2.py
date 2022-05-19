if __name__ == "__main__":
    length = int(input("리스트 길이값: "))

    array = list[length]
    array = list(map(int, input("리스트값: ").split()))
    array.sort()
    print(f"list: {array}")

    count = 0
    for index, num in enumerate(array):
        start_point, end_point = 0, index
        answer = num

        print(f"current_answer: {answer}")
        print(f"current_count: {count}")
        print(f"===========================")

        while start_point < end_point:
            point_sum = array[start_point] + array[end_point]

            print(f"start_point: {start_point}")
            print(f"end_point: {end_point}")
            print(f"point_sum: {point_sum}")

            if point_sum == answer:
                print("find\nincrease count")
                count += 1
                break
            elif point_sum < answer:
                print("not found")
                print("increase start_point")
                start_point += 1
            else:
                print("not found")
                print("reduce end_point")
                end_point -= 1
            print("")
        print("")

    print(f"result: {count}")
