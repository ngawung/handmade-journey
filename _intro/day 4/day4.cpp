struct obj {
    char unsigned onFire;
    int damage;
    int bullet;
    short health;
};

// 1 byte, 4 byte, 4 byte, 2 byte = 11 byte (16 byte)

int main() {
    int sizeObj = sizeof(obj);

    obj myObj[40]; // uninitialized biasanya isinya 0xcc
    obj* p_myObj = myObj;

    myObj[10].bullet = 1;
    (p_myObj + 10)->bullet = 2; // sama aja

    return 0;
}