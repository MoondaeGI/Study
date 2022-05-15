class Node:
    """트리 구성을 위한 노드 생성 클래스"""
    def __init__(self, data):
        self.data = data
        self.left_child = None
        self.right_child = None


if __name__ == "__main__":
    root_node = Node("A")
    second_level_node_1 = Node("B")
    second_level_node_2 = Node("C")
    third_level_node_1 = Node("D")
    third_level_node_2 = Node("E")
    third_level_node_3 = Node("F")
    third_level_node_4 = Node("G")
    forth_level_node_1 = Node("H")
    forth_level_node_2 = Node("I")

    # 트리 제작
    # root node부터 left/right child를 연결시켜서 제작한다
    root_node.left_child = second_level_node_1   # 모든 트리의 시작점 root node
    root_node.right_child = second_level_node_2
    second_level_node_1.left_child = third_level_node_1   # root node의 child, 깊이: 1, 레벨: 2
    second_level_node_1.right_child = third_level_node_2
    second_level_node_2.left_child = third_level_node_3
    second_level_node_2.right_child = third_level_node_4
    # 여기까지 tree가 구현되어 있으면 포화 이진 트리(perfect binary tree)

    third_level_node_1.left_child = forth_level_node_1    # 맨 밑 노드, leaf node, 높이: 4
    third_level_node_1.right_child = forth_level_node_2
    # 여기까지 tree가 구현되어 있으면 완전 이진 트리(complete binary tree)
