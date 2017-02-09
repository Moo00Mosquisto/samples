/** @file PlainBox.h */
#ifndef _PLAIN_BOX
#define _PLAIN_BOX

// Set the type of data stored in the box
typedef float ItemType;

// Declaration for the class PlainBox
class PlainBox {
private:
    // Data field
    ItemType item;
public:
    // Default constructor
    PlainBox(); //PlainBox pb;

    // Parameterized constructor
    PlainBox(const ItemType &theItem);

    // Method to change the value of the data fi eld
    void setItem(const ItemType &theItem);

    // Method to get the value of the data fi eld
    ItemType getItem() const;

};  // end PlainBox

#endif