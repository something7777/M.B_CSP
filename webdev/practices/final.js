let pic = document.getElementById("hoverPic");

pic.addEventListener("mouseover", function () {
    pic.src = "https://parksandrecreation.idaho.gov/wp-content/uploads/North-Beach.jpg";
});

pic.addEventListener("mouseout", function () {
    pic.src = "https://images.squarespace-cdn.com/content/v1/677ee3b4bb8fde4aa1226f6a/63afa21b-ecbf-4007-b200-f6ad55845faf/bear+lake.png";
});
function toggleContent() {
  const content = document.getElementById("random");

  if (content.style.display === "none") {
    content.style.display = "block";
  } else {
    content.style.display = "none";
    }
}
