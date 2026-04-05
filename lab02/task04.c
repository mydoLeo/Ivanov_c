#include <stdio.h>
typedef struct{
    float width;
    float height;
}Rectangle;
float plosat(Rectangle ab){
 return (ab.width*ab.height);
}
float perimetr(Rectangle ab){
 return 2*(ab.width+ab.height);
}
float plosat1(Rectangle *ab){
 return ((*ab).width*(*ab).height);
}
float perimetr1(Rectangle *ab){
 return 2*((*ab).width+(*ab).height);
}

int  main(void){
        Rectangle ab1;
        scanf("%f", &ab1.width);
        scanf("%f", &ab1.height);
        printf("%f\n", perimetr(ab1));
        printf("%f\n", plosat(ab1));
        printf("%f\n", perimetr1(&ab1));
        printf("%f\n", plosat1(&ab1));
    }
