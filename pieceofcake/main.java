import java.util.*;
class pieceOfCake {
    public static void main(String[] A) {
        Scanner scanner = new Scanner(System.in);
        int cake_side, w_cut, h_cut;
        final int depth = 4;
        cake_side = scanner.nextInt();
        w_cut =scanner.nextInt();
        h_cut = scanner.nextInt();
        if(cake_side/2.0 > w_cut){
            w_cut = cake_side - w_cut;
        }
        if(cake_side/2.0 > h_cut) {
            h_cut = cake_side - h_cut;
        }
        System.out.println(h_cut * w_cut * depth);
        scanner.close();
    }
}