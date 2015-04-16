Please add detail to this file on how you implement polymorphism in Book and it's subclasses.

In this program, polymorphism is shown in toString() method. It is first changed into pure virtual function in the Book class which is our super class / base class. Once the pure virtual function is made, it is necessary for that function to be available in child classes, which are Novel and TextBook in this case. toString()method in Novel class behaves in a certain way whereas, the same signatured function behaves in a different way in TextBook class.

Book Class pointer object once points to Novel class object and once to TextBook class object in main.cpp; each time it behaves differently.

Hence polymorphism is implemented in the program.
