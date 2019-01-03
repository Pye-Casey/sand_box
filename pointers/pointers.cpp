Pointers
    Working with addresses rather than with data
    We need to remember to treat pointers differently than data variables because we need the dereference operator ( * ) when accessing data. To help remember, always prefix a pointer variable with a p . This will make it less likely to confuse a pointer variable with a regular data variable.

For something to be considered a pointer, it must exhibit the following properties:
    Points: Each pointer must point to something. This could be data, a physical object, an idea, or whatever.
    Mapping: There must be a unique mapping. In other words, for every pointer, there must be exactly one object it is referring to.
    Addressing scheme: There must be some way to retrieve the data the pointer is referring to.

Syntax
{
    int speed = 65;     // Every pointer needs to point to something. In this case, the pointer will point to speed.
    int * pSpeed;       // The data-type of pointer is “pointer to an integer.” Notice that there are two parts to the declaration: 
                        // the type it is pointing to “int” and the fact that it is a pointer “*”.

    pSpeed = &speed;    // To get the address of speed, we use the address-of operator “&”. 
                        // Since the data- type of speed is int, the data-type of &speed is “int *” or pointer to int.

    cout << *pSpeed;    // Use the dereference operator “*” to retrieve the data that pSpeed points to.
}

Declaring a Pointer
    <data-type> * <pointer variable>;
   Example:
    float * pGPA;

Get address of a variable
    With & address-of operator can query a var for its address.
    {
        // normal data variable    
        int valueInteger;

        // pointer variable
        int * pInteger;
        // assignmnents
        pInteger = &valueInteger;   // both sides of = are pointers to integers
    }

Retrieve data from pointer
    Retrieve the data from a given address using the dereference operator ( * )
    {
        int speed = 65; // the location in memory we will be pointing to
        int * pSpeed; // currently uninitialized. Don’t dereference it!
        
        pSpeed = &speed; // now it is initialized to the address of speed
        cout << *pSpeed << endl; // need to use the * to get the data
    }
    If we skipped the initialization step in the above code ( pSpeed = &speed ), then the variable pSpeed would remain un-initialized. Thus, when we dereference it, it would refer to a location in memory (segment) the program does not own. This would cause a segmentation fault (a.k.a “crash”) at run-time:
    Segmentation fault (core dumped)


