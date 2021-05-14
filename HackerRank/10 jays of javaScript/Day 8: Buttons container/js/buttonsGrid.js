var arr = [1,2,3,6,9,8,7,4];

function rotate(){
    
    console.log("I am here");
    
    var temp = arr[7];
    
    for(var i=7;i>=1;i--){
        arr[i] = arr[i-1];
    }
    
    arr[0] = temp;
    
    btn1.innerHTML = arr[0];
    btn2.innerHTML = arr[1];
    btn3.innerHTML = arr[2];
    btn6.innerHTML = arr[3];
    btn9.innerHTML = arr[4];
    btn8.innerHTML = arr[5];
    btn7.innerHTML = arr[6];
    btn4.innerHTML = arr[7];
}
