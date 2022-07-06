package day01.dtoExmaple;

public class SomeLogic {
    public static void invokeSomeLogic(String keyword) {
        System.out.println();
        System.out.println(keyword);
        System.out.println();
    }

    public static void main(String[] args) {
        ClientSomethingRequestDTO clientSomethingRequestDTO = new ClientSomethingRequestDTO();
        clientSomethingRequestDTO.setPdSearchingKeyword("미네랄워터");

        invokeSomeLogic(clientSomethingRequestDTO.getPdSearchingKeyword());
    }
}
