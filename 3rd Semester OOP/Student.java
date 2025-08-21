class Student {
    int age;
    String name;

    public boolean isAdult() {
        return age >= 18;
    }

    public void introduce() {
        System.out.println("My name is " + name + " and I am " + age + " years old.");
    }
}

