


class MyClass {
 public:
  /*
   * Constructor
   * Initialize our member variable num_ to 0
   */
  MyClass();
  /*
   * Output our member variable using cout
   */
  void Output();
  void SetNumber(int num);
  int GetNumber();
 private:
  int num_;
};

MyClass::MyClass() : num_(0) {}

