class Bucket {
    // member variables
    std::vector<int> store;
    
public:
    // constructor
    Bucket();
    
    // accessors
    int& operator[](int index);
    
    // basic operations
    void push(int value);
    void remove(int value);
    bool includes(int value) const;
};
