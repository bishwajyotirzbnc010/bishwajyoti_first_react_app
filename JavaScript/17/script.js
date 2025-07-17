function generateStory() {
  var name = document.getElementById("fullname").value;
  var gender = document.getElementById("gender").value;
  var age = document.getElementById("age").value;
  var hobby = document.getElementById("hobby").value;
  var food = document.getElementById("food").value;
  var country = document.getElementById("country").value;

  var message = `
    <html>
      <head>
        <title>My Personal Story</title>
        <style>
              body {
      font-family: 'Josefin Sans', sans-serif;
      margin-top: 50px;
      text-align: center;
      display: flex;
      align-items: center;
      justify-content: center;
      background-color: rgb(231, 239, 255);
    }

    .container {
      width: 500px;
      margin: 0 auto;
      border: 1px solid #000000;
      padding: 20px;
      color: #ffffff;
      border-radius: 20px;
      box-shadow: 4px 4px 10px rgba(0, 0, 0, 0.1);
      background-color: rgb(4, 18, 56);
      display: flex;
      flex-direction: column;
      align-items: center;
      justify-content: center;
      transition: transform 0.8s, background-color 0.3s;
    }

    .container:hover {
      transform: scale(1.03);
    }

    p { 
      font-size: 18px; line-height: 1.6; 
    }
        </style>
      </head>
      <body>
        <div class="container" ><p>Hello guys, my name is <strong>${name}</strong>! I'm ${age} years old and I love <strong>${hobby}</strong>. ${hobby.charAt(0). toUpperCase() + hobby.slice(1)} is really a wonderful activity to stay happy and creative. My favorite food is <strong>${food}</strong>. One day, I wish to visit <strong>${country}</strong> and explore its beautiful culture and sights. Thank you guys, and that's all for today. See you next time!</p></div>
      </body>
    </html>
  `;

  var newWindow = window.open();
  newWindow.document.writeln(message);
  newWindow.document.close();
}
