import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    // Complete the designerPdfViewer function below.
    static int designerPdfViewer(int[] h, char[] c) {
    
        int[] b = new int[26];
        int k;
        for(int i=0;i<c.length;i++)
        {
                k=(char)c[i]-97;
                b[i]=h[k];
                System.out.println(k+" " +b[i]);
        }
        Arrays.sort(b);
        int max = b[b.length-1];
        System.out.println(max*c.length);
return(max*c.length);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int[] h = new int[26];

        String[] hItems = scanner.nextLine().split(" ");
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        for (int i = 0; i < 26; i++) {
            int hItem = Integer.parseInt(hItems[i]);
            h[i] = hItem;
        }

        String word = scanner.nextLine();

        char[] wordToArray = word.toCharArray();

        int result = designerPdfViewer(h, wordToArray);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
