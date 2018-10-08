class RingBuffer {
  // variables
  int start;
  int count;
  int capacity;
  int* store;
  
public:
  // constructor & destructor
  RingBuffer();
  ~RingBuffer();
  
  // accessors
  int& operator[] (int index);
  
  // basic operators
  int pop();
  int shift();
  void push(int value);
  void unshift(int value);
  
  // debugger
  void print() const;
  
private:
  // internal functions
  void fill();
  void resize();
  int wrap(int index) const;
  int intern(int index) const;
  bool isInvalid(int index) const;
  void checkIndex(int index) const;
};
