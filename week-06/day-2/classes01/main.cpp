#include <iostream>
#include <string>
#include "Student.h"


int main() {
  // Create a new instace of the Student class and set it's name to "John" and
  // it's age to 21

  Student st ("John", 21);
  st.greet();

  st.set_name("Bazsi");
  st.set_age(37);
  st.greet();

  return 0;
}
