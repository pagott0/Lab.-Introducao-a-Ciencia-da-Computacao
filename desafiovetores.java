import java.util.ArrayList;
import java.util.Scanner;
public class desafiovetores {
    public static void main(String[] args) {
        int v[] = new int[15];
        ArrayList<Integer> repetidos = new ArrayList<Integer>();
        int posRepetidos = 0;
        Scanner getEntry = new Scanner(System.in);
        for(int i = 0; i < 15; i++){
            v[i] = getEntry.nextInt();
            for(int j = 0; j < i; j++){
                if(v[j] == v[i]){
                    repetidos.add(v[j]);
                    posRepetidos++;

                }
            }
        }

        for(int i = 0; i < repetidos.size(); i++){
            System.out.println(repetidos.get(i));
        }


    }
}
