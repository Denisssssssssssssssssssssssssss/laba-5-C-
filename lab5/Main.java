import classes.*;
import java.io.File;
import java.io.IOException;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) { 
        int a = 120;
        String str = "Охранник водитель";
        Jobtitle jt3 = new Jobtitle(str,a);
        String str1 = "Форма";
        Equipment equ3 = new Equipment(str1,a);
        String str2 = "Пистолет";
        Weapon weap3 = new Weapon(str2,a);
        String str3 = "Грузовик";
        Transport jt3 = new Transport(str3,a);
        String jobt3 = "Охранник водитель";
        Jobtitle a3 = new Jobtitle(jobt3,a);
        String equip1 = "Форма";
        Equipment b3 = new Equipment(equip1,a);
        String weapon2 = "Пистолет";
        Weapon c3 = new Weapon(weapon1,a);
        String trans3 = "Грузовик";
        Transport d3 = new Transport(trans1,a);



        Employee[] arr = new Employee[3];
        Employee[][] arr1 = new Employee[2][2];
        int i,j;



        try{
            File file = new File("text.txt");
            for(i = 0; i < 3; i++) {
                System.out.println("arr["+i+"]");
                arr[i] = new Employee();
                arr[i].tofile(file);
                arr[i].output();
            }
        }
        catch(Exception e){
            System.out.println(e);
        }



        try {
            File file = new File("text.txt");
            Scanner sc = new Scanner(file);
            for (i = 0; i < 2; i++) {
                for (j = 0; j < 2; j++) {
                    System.out.println("arr1[" + i + "]" + "[" + j + "]");
                    arr1[i][j] = new Employee();
                    arr1[i][j].getfromfile(file, sc);
                    arr1[i][j].output();
                }
            }
            sc.close();
        }
        catch(Exception e1){
            System.out.println(e1);
        }
    }
}