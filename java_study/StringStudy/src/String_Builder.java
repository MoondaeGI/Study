import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.lang.StringBuilder;
import java.util.Objects;

public class String_Builder {
    public static void main(String[] args) throws IOException {
        try (BufferedReader br = new BufferedReader(new InputStreamReader(System.in))) {

            String new_id = br.readLine();
            String answer = "";
            String[] punts = {"~", "!", "@", "#", "$", "%", "\\^", "&", "\\*", "\\(", "\\)", "=", "\\+", "\\[", "\\{", "\\]", "\\}", ":", "\\?", ",", "<", ">", "/"};

            new_id = new_id.toLowerCase();

            for (String punt : punts) {
                new_id = new_id.replaceAll(punt, "");
            }

            String[] answerString = new_id.split("");
            for (int i = 0; i < answerString.length; i++) {
                if (Objects.equals(answerString[i], ".")) {
                    int count = 0;
                    String countString = ".";
                    while ((i + count) != answerString.length && Objects.equals(answerString[i + count], ".")) {
                        count += 1;
                        countString += ".";
                    }
                    new_id = new_id.replace(countString, ".");
                }
            }

            answerString = new_id.split("");
            if (Objects.equals(answerString[0], ".")) {
                if (answerString.length == 1) {
                    new_id = "";
                }
                else
                    new_id = new_id.substring(1);
            }
            if (new_id.length() != 0 && Objects.equals(answerString[new_id.length() - 1], ".")) {
                new_id = new_id.substring(0, new_id.length() - 1);
            }

            if (new_id.length() == 0) {
                new_id = "a";
            }

            if (new_id.length() >= 16) {
                new_id = new_id.substring(0, 15);

                answerString = new_id.split("");
                if (Objects.equals(answerString[new_id.length() - 1], ".")) {
                    new_id = new_id.substring(0, 14);
                }
            }

            if (new_id.length() <= 2) {
                answerString = new_id.split("");
                String lastWord = (new_id.length() != 0) ? answerString[new_id.length() - 1] : "a";
                while(new_id.length() != 3) {
                    new_id += lastWord;
                }
            }

            System.out.println(new_id);

        }
    }
}
