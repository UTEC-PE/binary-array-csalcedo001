#ifndef BOOLEAN_H
#define BOOLEAN_H

class boolean {
  private:
    char* array;
    int size;

  public:
    boolean(int size) : size(size) {
      this->array = new char[(int) size / 8 + 1] ();
    }

    inline void bitOn(int position) {
      this->array[position / 8] |= (1 << (position % 8));
    }

    inline void bitOff(int position) {
      this->array[position / 8] &= ~(1 << (position % 8));
    }

    inline bool operator[](int position) const {
      return this->array[(int) position / 8] & (1 << (position % 8));
    }

    void clear() {
      for (int i = 0, l = size / 8; i < l; i++)
        array[i] = 0;
    }

    void print() {
      for (int i = 0, l = size; i < l; i++)
        std::cout << (*this)[i];

      std::cout << std::endl;
    }

    ~boolean() {
      delete [] array;
    }
};

#endif
