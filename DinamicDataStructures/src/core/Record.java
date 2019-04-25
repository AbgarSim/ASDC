package core;


public class Record {
    private int id;
    private String name;
    private String surname;
    private int age;
    private char sex;
    private float grade;

    public Record(int id, String name, String surname, int age, char sex, float grade) {
        this.id = id;
        this.name = name;
        this.surname = surname;
        this.age = age;
        this.sex = sex;
        this.grade = grade;
    }


    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getSurname() {
        return surname;
    }

    public void setSurname(String surname) {
        this.surname = surname;
    }

    public int getAge() {
        return age;
    }

    public void setAge(int age) {
        this.age = age;
    }

    public char getSex() {
        return sex;
    }

    public void setSex(char sex) {
        this.sex = sex;
    }

    public float getGrade() {
        return grade;
    }

    public void setGrade(float grade) {
        this.grade = grade;
    }
}
