document.writeln(`<div class="card">
    <h2>Divide and Square</h2>
    <input type="number" id="a" placeholder="Enter value a" />
    <input type="number" id="b" placeholder="Enter value b" />
    <br />
    <button onclick="calculate()">Calculate</button>
    <div class="result" id="result"></div>
  </div>`);
function calculate() {
      const a = parseFloat(document.getElementById('a').value);
      const b = parseFloat(document.getElementById('b').value);
      const output = document.getElementById('result');

      if (isNaN(a) || isNaN(b)) {
        output.textContent = "Please enter valid numbers!";
        return;
      }

      if (b === 0) {
        output.textContent = "Cannot divide by zero!";
        return;
      }

      const division = a / b;
      const square = division * division;

      output.textContent = `(${a} ÷ ${b})² = ${square.toFixed(4)}`;
    }