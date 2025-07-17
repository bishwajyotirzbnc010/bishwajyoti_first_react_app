const updateClock = () => {
      const now = new Date();
      let hours = now.getHours();
      const minutes = now.getMinutes();
      const seconds = now.getSeconds();
      const dayIndex = now.getDay();

      let ampm = "AM";
      if (hours >= 12) {
        ampm = "PM";
        if (hours > 12) hours -= 12;
      }
      if (hours === 0) hours = 12;

      const format = (num) => (num < 10 ? "0" + num : num);

      const day = (() => {
        switch (dayIndex) {
          case 0: return "Sun";
          case 1: return "Mon";
          case 2: return "Tue";
          case 3: return "Wed";
          case 4: return "Thu";
          case 5: return "Fri";
          case 6: return "Sat";
          default: return "";
        }
      })();

      document.getElementById("time").innerHTML = `${format(hours)}:${format(minutes)}:${format(seconds)} <span class="ampm text-yellow-500 text-3xl ml-2">${ampm}</span>`;
      document.getElementById("day").textContent = day;
    };

    setInterval(() => updateClock(), 1000);
    updateClock();
