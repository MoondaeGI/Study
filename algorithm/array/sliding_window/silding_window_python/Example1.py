pw_list = list([0, 0, 0, 0])
matching_list = list()
check_match = 0


def match(char: str):
    if char == 'A':
        return 0
    elif char == 'C':
        return 1
    elif char == 'G':
        return 2
    elif char == 'T':
        return 3
    else:
        raise


def add(char):
    global check_match
    global matching_list
    global pw_list

    match_index = match(char)
    pw_list[match_index] += 1
    if matching_list[match_index] == pw_list[match_index]:
        print("match!")
        check_match += 1


def remove(char):
    global check_match
    global matching_list
    global pw_list

    match_index = match(char)
    pw_list[match_index] -= 1
    if matching_list[match_index] == pw_list[match_index]:
        print("reduce check_match")
        check_match -= 1


if __name__ == "__main__":
    length = int(input("리스트 길이값: "))
    window_size = int(input("윈도우 길이값: "))

    dna_string = list(input("dna 문자열값: "))

    matching_list = list(map(int, input("matching_list값: ").split()))

    for index, char in enumerate(dna_string[:window_size]):
        add(char)
        print(f"{char}")

    check_match = 0
    for index, num in enumerate(pw_list):
        if matching_list[index] == num:
            check_match += 1

    print(f"dna_string: {dna_string}")
    print(f"match_count: {check_match}\n")

    start_point, end_point = 0, window_size - 1
    count = 0

    while end_point < length:
        print(f"start_point: {start_point}, {dna_string[start_point]}")
        print(f"end_point: {end_point}, {dna_string[end_point]}")
        print(f"check_match: {check_match}")
        print(f"count: {count}")
        print(f"==========================")

        if check_match == 4:
            print("found")
            print("increase count")
            count += 1
        else:
            print("not found")

        start_char = dna_string[start_point]
        end_char = dna_string[end_point]
        remove(start_char)
        add(end_char)
        start_point += 1
        end_point += 1

        print("")

    print(f"result: {count}")
