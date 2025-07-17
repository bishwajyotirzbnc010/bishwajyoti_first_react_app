function showTable(num) {
    let newWindow = window.open("", "_blank");

    let htmlContent = `
        <!DOCTYPE html>
        <html>
        <head>
            <title>Table of ${num}</title>
            <link href="https://fonts.googleapis.com/css2?family=Josefin+Sans:wght@400;700&display=swap" rel="stylesheet">
            <style>
                body {
                    background-color: rgb(248, 247, 244);
                    font-family: 'Josefin Sans', sans-serif;
                    text-align: center;
                    padding: 40px;
                }
                h1 {
                    color: black;
                    margin-bottom: 20px;
                }
                .table-box {
                    background-color: rgb(243, 185, 195);
                    border-radius: 20px;
                    padding: 20px;
                    display: inline-block;
                    box-shadow: 0 0 10px rgba(0,0,0,0.2);
                    font-size: 1.5em;
                }
            </style>
        </head>
        <body>
            <h1>Multiplication Table of ${num}</h1>
            <div class="table-box">
                ${generateTable(num)}
            </div>
        </body>
        </html>
    `;

    newWindow.document.write(htmlContent);
}

function generateTable(n) {
    let output = "";
    for (let i = 1; i <= 10; i++) {
        output += `${n} × ${i} = ${n * i}<br>`;
    }
    return output;
}
