class MaxIntSet {
  int max;
  bool* store;
    
public:
  MaxIntSet(int max);
  bool get(int value);
  void set(int value);
  void remove(int value);
  bool includes(int value);
    
private:
  void fillStore();
  void checkIndex(int index);
  bool indexInvalid(int index);
};
