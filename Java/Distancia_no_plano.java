import java.util.Scanner;

public class Distancia_no_plano {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);
        double conta, x1, y1, x2, y2;
        x1 = entrada.nextDouble();
        x2 = entrada.nextDouble();
        y1 = entrada.nextDouble();
        y2 = entrada.nextDouble();
        conta = Math.sqrt(Math.pow((x2 - x1), 2) + Math.pow((y2 - y1), 2));
        System.out.println(String.format("%.4f", conta));
        entrada.close();

        /*
         * same thing but using a while loop.
         * double conta;
         * double[] arrayOfDoubles = new double[4];
         * int c = 0;
         * while (c < 4) {
         * arrayOfDoubles[c] = entrada.nextDouble();
         * c++;
         * }
         * conta = Math.sqrt(Math.pow((arrayOfDoubles[1] - arrayOfDoubles[0]), 2)
         * + Math.pow((arrayOfDoubles[2] - arrayOfDoubles[3]), 2));
         * System.out.println(String.format("%.4f", conta));
         * entrada.close();
         */
    }
}
