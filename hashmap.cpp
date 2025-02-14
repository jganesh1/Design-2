//TC:0(1)
//SC:O(1)
Class MyHashMap {
private:
    vector<int> array;
public:
    /** Initialize your data structure here. */
    MyHashMap() {
        array.resize(1000001, -1);
    }

    /** value will always be positive. */
    void put(int key, int value) {
        array[key] = value;
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key) {
        return array[key];
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key) {
        array[key] = -1;
    }
};
