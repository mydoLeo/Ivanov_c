#include <stdio.h>

typedef enum {
    DATA_INT,
    DATA_FLOAT,
    DATA_CHAR
} data_type;

typedef union {
    int int_value;
    float float_value;
    char char_value;
} data_union; 

typedef struct {
    data_type type;
    data_union data; 
} node;

void print_container(node c) {
    if (c.type == DATA_INT) {
        printf("Int: %d\n", c.data.int_value);
    } 
    else if (c.type == DATA_FLOAT) {
        printf("Float: %f\n", c.data.float_value);
    } 
    else if (c.type == DATA_CHAR) {
        printf("Char: %c\n", c.data.char_value);
    }
}

int main(void) {
    node c1; 
    c1.type = DATA_INT; 
    c1.data.int_value = 42;

    node c2;
    c2.type = DATA_FLOAT; 
    c2.data.float_value = 6.777777777;
    
    node c3;
    c3.type = DATA_CHAR;
    c3.data.char_value = 'B';
     
    print_container(c1);
    print_container(c2);
    print_container(c3);
     
    return 0;
}