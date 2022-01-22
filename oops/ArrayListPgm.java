//Write a program to perform string operations using Array List. Write functions for the following
// a. Append – add at end
// b. Insert – add at index 2
// c. Search
// d. List all string starts with given letter

import java.util.*;
import java.util.ArrayList;
public class ArrayListPgm {
    public static void main(String args[]) {
        List<String> listStrings = new ArrayList <String>();
        listStrings.add("One");
        listStrings.add("Two");
        listStrings.add("Three");
        listStrings.add("Four");
        System.out.println(listStrings);
        listStrings.add(2, "A2");
        System.out.println(listStrings);
        if (listStrings.contains("Hello"))
        System.out.println("Found the element");
        else
        System.out.println("There is no such element");
        for (int i = 0; i < listStrings.size(); i++) {
        String newString = listStrings.get(i);
        if (newString.startsWith("T"))
        System.out.println("The found the element is " + newString);
        }
        }
    }