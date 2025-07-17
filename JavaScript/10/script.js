    // Get current hour from system time
    const now = new Date();
    const hour = now.getHours(); // 0 to 23

    let dayGreeting = "";

    // Use if-else to determine the greeting
    if (hour >= 5 && hour < 12) {
      dayGreeting = "Good Morning";
    } else if (hour >= 12 && hour < 17) {
      dayGreeting = "Good Afternoon";
    } else {
      dayGreeting = "Good Evening";
    }

    // Build the full message
    const message = `${dayGreeting}, sir. I trust this time brings you renewed energy and a fresh perspective. May it be filled with productivity, joy, and countless opportunities to achieve your goals. Here's to a wonderful day ahead.`;

    // Display the message in the HTML
    document.getElementById("greetingMessage").innerText = message;