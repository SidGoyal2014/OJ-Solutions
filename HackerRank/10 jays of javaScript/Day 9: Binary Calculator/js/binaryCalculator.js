const res = document.getElementById("res");

var operand1 = operator = operand2 = '';

function append(val) {
    
    if(operator == ""){
        operand1 += val;
    }
    else{
        operand2 += val;
    }
    renderResDiv();
}

function clearRes() {
    operand1 = operator = operand2 = '';
    renderResDiv();
}

function equal() {
    operand1 = parseInt(operand1, 2);
    operand2 = parseInt(operand2, 2);
    
    operand1 = eval((operand1 + operator + operand2));

    operand1 = parseInt(operand1).toString(2);
    operator = operand2 = '';
    renderResDiv();
}

function assignOperator(val) {
    operator = val;
    renderResDiv();
}

function renderResDiv() {
    res.innerHTML = operand1 + operator + operand2;
}
