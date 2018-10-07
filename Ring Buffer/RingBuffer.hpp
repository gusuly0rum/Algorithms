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
  int get(int index);
  
  // basic operators
  int pop();
  int shift();
  void push(int value);
  void unshift(int value);
  
  // debugger
  void print();
  
private:
  // internal functions
  void fill();
  void resize();
  void checkIndex(int index);
  bool indexInvalid(int index);
};
