function calculateCube() {
  // Get the value from the input field
  var number = document.getElementById("num").value;
  // Calculate the cube
  var cube = number * number * number;
  // Display the result
  document.getElementById("result").innerText = "Cube: " + cube;
}
