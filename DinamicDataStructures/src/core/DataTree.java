package core;

import java.io.BufferedReader;
import java.io.FileReader;
import java.io.IOException;

public class DataTree {

    private static Node root;

    // Constructor
    public DataTree() {
        root = null;
    }


    public static DataTree readData() {
        DataTree tree = new DataTree();
        BufferedReader reader;
        try {
            reader = new BufferedReader(new FileReader(
                    "dataFile.txt"));
            String line = reader.readLine();
            while (line != null) {
                String[] data = line.split(" ");
                tree.insert(
                        new Record(
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
        return tree;
    }

    public static Node getRoot() {
        return root;
    }

    // This method mainly calls insertRec()
    public void insert(Record key) {
        root = insertRec(root, key);
    }

    /* A recursive function to insert a new key in BST */
    Node insertRec(Node root, Record key) {

        if (root == null) {
            root = new Node(key);
            return root;
        }


        if (key.getId() < root.key.getId())
            root.left = insertRec(root.left, key);
        else if (key.getId() > root.key.getId())
            root.right = insertRec(root.right, key);

        return root;
    }

    public Node find(Integer key) {
        return find(root, key);
    }

    private Node find(Node root, Integer key) {

        if (root == null)
            return null;

        if (key < root.key.getId())
            return find(root.left, key);
        else if (key > root.key.getId())
            return find(root.right, key);
        else if (key == root.key.getId())
            return root;
        return null;
    }

    /**
     * Inner class for Tree Node
     */
    public static class Node {
        Record key;
        Node left, right, top;

        public Node(Record item) {
            key = item;
            left = right = null;
        }

        public Record getKey() {
            return key;
        }

        public void setKey(Record key) {
            this.key = key;
        }

        public Node getLeft() {
            return left;
        }

        public void setLeft(Node left) {
            this.left = left;
        }

        public Node getRight() {
            return right;
        }

        public void setRight(Node right) {
            this.right = right;
        }

        public Node getTop() {
            return top;
        }
    }
}
