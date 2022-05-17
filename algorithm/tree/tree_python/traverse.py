class Node:
    def __init__(self, data):
        self.data = data
        self.left_child = None
        self.right_child = None


def pre_order(node=Node):
    """먼저 출력하고 순회한다"""
    if node is not None:
        print(node.data)
        pre_order(node.left_child)
        pre_order(node.right_child)


def post_order(node=Node):
    """먼저 순회하고 출력한다"""
    if node is not None:
        post_order(node.left_child)
        post_order(node.right_child)
        print(node.data)


def in_order(node=Node):
    """왼쪽 자식만 순회 후 출력, 오른쪽 자식을 순회한다"""
    if node is not None:
        in_order(node.left_child)
        print(node.data)
        in_order(node.right_child)


if __name__ == "__main__":
    node_A = Node("A")
    node_B = Node("B")
    node_C = Node("C")
    node_D = Node("D")
    node_E = Node("E")
    node_F = Node("F")
    node_G = Node("G")
    node_H = Node("H")
    node_I = Node("I")

    # 생성한 노드 인스턴스들 연결
    node_F.left_child = node_B
    node_F.right_child = node_G
    node_B.left_child = node_A
    node_B.right_child = node_D
    node_D.left_child = node_C
    node_D.right_child = node_E
    node_G.right_child = node_I
    node_I.left_child = node_H

    # 노드 F를 root 노드로 만든다
    root_node = node_F

    # pre order 순회
    print("pre order")
    pre_order(root_node)
    # post order 순회
    print("\npost order")
    post_order(root_node)
    # in order 순회
    print("\nin order")
    in_order(root_node)
