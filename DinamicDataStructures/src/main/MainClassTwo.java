package main;


import core.DataTree;
import core.Record;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;
import java.util.ArrayList;
import java.util.Scanner;

public class MainClassTwo {

    private static DataTree tree = DataTree.readData();
    private static Scanner in = new Scanner(System.in);
    private static ArrayList<Record> records = read();

    public static void main(String[] args) {


        while (true) {
            System.out.println("Lists!");
            System.out.println(" 1. Iterate");
            System.out.println(" 2. Add Node");
            System.out.println(" 3. Search Node");
            System.out.println(" 4. Delete Node");
            System.out.println("e - exit");
            Scanner in = new Scanner(System.in);
            String next = in.next();
            if ("e".equalsIgnoreCase(next))
                break;
            else if ("1".equals(next))
                print();
            else if ("2".equals(next))
                add();
            else if ("3".equals(next))
                search();
            else if ("4".equals(next))
                remove();
        }
    }

    public static void print() {
        for (int i = 0; i < records.size(); i++) {
            Record record = records.get(i);
            System.out.println(record.getId() + " " + record.getName() + " "
                    + record.getSurname() + " " + record.getAge()
                    + " " + record.getGrade() + " " + record.getSex());
        }
    }

    public static ArrayList<Record> read() {
        ArrayList<Record> records = new ArrayList<>();
        BufferedReader reader;
        try {
            reader = new BufferedReader(new FileReader(
                    "dataFile.txt"));
            String line = reader.readLine();
            while (line != null) {
                String[] data = line.split(" ");
                records.add( new Record(
                        Integer.valueOf(data[0]),
                        data[1],
                        data[2],
                        Integer.valueOf(data[3]),
                        data[4].charAt(0),
                        Float.valueOf(data[5])));
                line = reader.readLine();
            }
            reader.close();
        } catch (IOException e) {
            e.printStackTrace();
        }
        return records;
    }

    public static void add() {
        System.out.println("Input data: ");
        System.out.println("Num Txt Txt Num Char Float");
        String newRecord = in.nextLine();
        String[] data = newRecord.split(" ");
        records.add( new Record(
                Integer.valueOf(data[0]),
                data[1],
                data[2],
                Integer.valueOf(data[3]),
                data[4].charAt(0),
                Float.valueOf(data[5])));
        print();

    }

    public static void search() {
        System.out.println("id");
        Integer idRecord = in.nextInt();
        for (int i = 0; i < records.size(); i++) {
            Record record = records.get(i);
            if (idRecord.equals(record.getId()))
                System.out.println(" Found: " + record.getId() + " " + record.getName() + " "
                        + record.getSurname() + " " + record.getAge()
                        + " " + record.getGrade() + " " + record.getSex());
        }
    }

    public static void remove() {
        System.out.println("id to delete");
        Integer idRecord = in.nextInt();
        for (int i = 0; i < records.size(); i++) {
            Record record = records.get(i);
            if (idRecord.equals(record.getId())) {
                records.remove(i);
                System.out.println(" Deleted : " + record.getId() + " " + record.getName() + " "
                        + record.getSurname() + " " + record.getAge()
                        + " " + record.getGrade() + " " + record.getSex());

            }
        }
    }
}