package main;

import core.DataTree;
import core.Record;

import java.util.Scanner;

public class MainClass {

    private static DataTree tree = DataTree.readData();
    private static Scanner in = new Scanner(System.in);

    public static void main(String[] args) {


        while (true) {
            System.out.println("Binary tree");
            System.out.println(" 1 - Add");
            System.out.println(" 2 - Прямой порядок");
            System.out.println(" 3 - Симетричный порядок");
            System.out.println(" 4 - Обратный порядок");
            System.out.println(" 5 - Search");
            System.out.println("E - for Exit");
            Scanner in = new Scanner(System.in);
            String next = in.next();
            if ("E".equalsIgnoreCase(next))
                break;
            else if ("1".equals(next))
                add();
            else if ("2".equals(next)) {
                System.out.println("Root " + DataTree.getRoot().getKey().getId());
                inOrder(DataTree.getRoot());
            } else if ("3".equals(next)) {
                System.out.println("Root " + DataTree.getRoot().getKey().getId());
                simmetricOrder(DataTree.getRoot());
            } else if ("4".equals(next)) {
                System.out.println("Root " + DataTree.getRoot().getKey().getId());
                postOrder(DataTree.getRoot());
            } else if ("5".equals(next))
                search();
        }
    }

    public static void inOrder(DataTree.Node top) {
        if (top == null) return;
        System.out.print(top.getKey().getId() + " - ");
        postOrder(top.getLeft());
        postOrder(top.getRight());
    }

    public static void simmetricOrder(DataTree.Node top) {
        if (top == null) return;
        postOrder(top.getLeft());
        System.out.print(top.getKey().getId() + " - ");
        postOrder(top.getRight());
    }

    // LTR
    public static void postOrder(DataTree.Node top) {
        if (top == null) return;
        postOrder(top.getLeft());
        postOrder(top.getRight());
        System.out.print(top.getKey().getId() + " - ");
    }

    public static void add() {
        System.out.println("Data insert\n");
        System.out.println("Num Txt Txt Num Char Float");
        String line = in.nextLine();
        tree.insert(build(line));
    }

    public static void search() {
        while (true) {
            System.out.println("id ");
            String next = in.next();

            if ("E".equalsIgnoreCase(next))
                break;
            else if (next == null)
                System.out.println("Number! ");
            else {

                DataTree.Node node = tree.find(Integer.valueOf(next));
                if (node != null)
                    System.out.println(" Found: " + node.getKey().getId() + " " + node.getKey().getName() + " "
                            + node.getKey().getSurname() + " " + node.getKey().getAge()
                            + " " + node.getKey().getGrade() + " " + node.getKey().getSex());
                else
                    System.out.println("No such node");
            }
        }
    }

    private static Record build(String row) {
        String[] data = row.split(" ");
        if (data.length != 6)
            System.out.println("FormatException");
        Record record = null;
        try {

            record = new Record(
                    Integer.valueOf(data[0]),
                    data[1],
                    data[2],
                    Integer.valueOf(data[3]),
                    data[4].charAt(0),
                    Float.valueOf(data[5]));

        } catch (Exception e) {
            System.out.println("Caught formatException " + e.getMessage());
            e.printStackTrace();
        }
        return record;
    }
}