// Problem Link: https://www.hackerrank.com/challenges/js10-inheritance/problem

/*
  not to be printed in solution
  class Rectangle {
      constructor(w, h) {
          this.w = w;
          this.h = h;
      }
  }
*/

/*
 *  Write code that adds an 'area' method to the Rectangle class' prototype
 */

Rectangle.prototype.area = function(){
    // console.log(this.w, " ", this.h);
    return (this.w * this.h);
}

/*
 * Create a Square class that inherits from Rectangle and implement its class constructor
 */

class Square extends Rectangle {
    
    constructor(s){
        super(s,s);
        super.area();
    }
}
