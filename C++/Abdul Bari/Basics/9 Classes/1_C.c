#include<stdio.h>

struct Rectangle
{
    int length;
    int width;
};

void initialize(struct Rectangle *r,int l, int w){
    r->length = l;
    r->width = w;
}

void area(struct Rectangle r){
    printf("%d \n", r.length * r.width);
}

void change_length(struct Rectangle *r, int l){
    r->length = l;
}

int main(){
    struct Rectangle r;
    initialize(&r, 10, 5);
    area(r);
    change_length(&r, 5);
    area(r);
    return 0;
}