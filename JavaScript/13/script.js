document.writeln(`
  <header class="header">
    <img src="images/profile_pic.jpeg" alt="Profile" class="header-img" />
    <h3 class="header-name">tobi memo</h3>
    <button class="header-follow-btn">Follow</button>
  </header>

  <div class="canvas">

    <div class="profile-card">

      <div class="banner">
        <img src="images/banner_pic.jpg" alt="Banner" class="banner-img" />
      </div>

      <div class="profile-section">


          <img src="images/profile_pic.jpeg" alt="Profile" class="profile-pic" id="profilePic" />


        <button class="follow-btn">Follow</button>
        <h2 class="name">tobi memo</h2>
        <p class="username">@tobi_memo</p>
        <p class="bio">Learning, Exploring everything beyond the existence of the reality.</p>
        <div class="stats">
          <span><b>238</b> Points</span>
          <span><b>84</b> Friends</span>
          <span>Joined on Nov <b>2025</b></span>
        </div>
      </div>
    </div>
  </div>
`);

setInterval(() => {
  const pic = document.getElementById("profilePic");
  if (pic) {
    pic.classList.add("shine");
    setTimeout(() => {
      pic.classList.remove("shine");
    }, 1000);
  }
}, 30000);
