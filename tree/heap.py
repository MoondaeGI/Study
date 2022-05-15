def swap(tree, index_1, index_2):
    """heapify를 위한 인덱스 2개를 교환하는 함수"""
    temp = tree[index_1]
    tree[index_1] = tree[index_2]
    tree[index_2] = temp


def heapify(tree, index, tree_size):
    """해당 인덱스를 heap속성에 맞춰 이동시키는 메소드"""
    """시간 복잡도 O(logn)"""
    left_child = index * 2
    right_child = index * 2 + 1

    if 0 < left_child < tree_size and 0 < right_child < tree_size:  # 자식 노드가 트리 사이즈를 벗어나지 않는다면,
        if tree[left_child] > tree[right_child]:  # left/right child의 크기를 비교
            max_index = left_child
        else:
            max_index = right_child

        if tree[max_index] > tree[index]:   # 자식 노드가 해당 노드보다 클 경우 swap 실행
            swap(tree, max_index, index)
            heapify(tree, max_index, tree_size)   # 변경된 노드가 그 아래의 자식 노드의 heap 속성을 만족하는지 확인


def heap_tree(tree):
    """임의의 리스트를 heap 자료형으로 바꿔주는 함수"""
    """시간 복잡도: O(nlogn)"""
    for index in range(len(tree) -1, 0, -1):  # leaf부터 root까지 역순으로 반복문 실행
        heapify(tree, index, len(tree))  # heapify 실행
    return tree


if __name__ == "__main__":
    tree_1 = [None, 15, 5, 12, 14, 9, 10, 6, 2, 11, 1]  # heapify하려고 하는 완전 이진 트리
    heapify(tree_1, 2, len(tree_1))  # 노드 2에 heapify 호출
    print(tree_1)

    tree_2 = [None, 5, 1, 11, 2, 10, 6, 15, 14, 12, 9]
    print(heap_tree(tree_2))
