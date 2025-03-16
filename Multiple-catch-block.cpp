 #include <iostream>
using namespace std;
int main()
 {
    
   float a, b, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;
    
    cout<<"Enter array index: ";
    cin>>index;
    
    try {
        
        // throw exception if array out of bounds
        if (index>=4)
            throw "Error: Array out of bounds!";
            
        // not executed if array is out of bounds
        cout<<"Enter a two numbers:  ";
        cin>>a>>b;
    
       // throw exception if b is 0
        if (b == 0)
            throw 0;

        // not executed if b is 0
        arr[index] = a / b;
        cout<<arr[index]<<endl;
    }

    // catch "Array out of bounds" exception
    catch (const char * msg) {
        cout<<msg<<endl;
    }

    // catch "Divide by 0" exception
    catch (int num) {
        cout << "Error: Cannot divide by " << num << endl;
    }

    // catch any other exception
    catch (...) 
    {
        cout << "Unexpected exception!" << endl;
    }
    
    return 0;    
}

// The type const char* represents a pointer to a constant character array, which is commonly used to represent strings in C-style programming.
// const means that the string (or character array) it points to cannot be modified.
// It's used because exceptions often involve messages or error descriptions, and those messages are usually strings.