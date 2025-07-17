function getValues() {
  var a = parseFloat(document.getElementById("a").value);
  var b = parseFloat(document.getElementById("b").value);
  return [a, b];
}

function calcSquareOfSum() {
  var values = getValues();
  var a = values[0];
  var b = values[1];
  var result = (a + b) * (a + b);
  document.getElementById("result").innerText = "(a + b)² = " + result;
}

function calcDiffOfSquares() {
  var values = getValues();
  var a = values[0];
  var b = values[1];
  var result = (a * a) - (b * b);
  document.getElementById("result").innerText = "a² - b² = " + result;
}

function calcSumOfCubes() {
  var values = getValues();
  var a = values[0];
  var b = values[1];
  var result = (a * a * a) + (b * b * b);
  document.getElementById("result").innerText = "a³ + b³ = " + result;
}
