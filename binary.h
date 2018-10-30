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

    void bitOn(int position) {
      int arrayIndex = position / 8;
      this->array[arrayIndex] = this->array[arrayIndex] | (1 << (position % 8));
    }

    void bitOff(int position) {
      int arrayIndex = position / 8;
      this->array[arrayIndex] = this->array[arrayIndex] & ~(1 << (position % 8));
    }

    inline bool operator[](int position) const {
      return this->array[(int) position / 8] & (1 << (position % 8));
    }

    void clear() {
      delete [] this->array;
      size = 0;
    }

    ~boolean() {
      this->clear();
    }
};

#endif
