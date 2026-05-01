let pic = document.getElementById("hoverPic");

pic.addEventListener("mouseover", function () {
    pic.src = "https://idahohighcountry.org/wp-content/uploads/bear-lake-recreation-lodging-utah-idaho.jpg";
});

pic.addEventListener("mouseout", function () {
    pic.src = "https://images.squarespace-cdn.com/content/v1/677ee3b4bb8fde4aa1226f6a/63afa21b-ecbf-4007-b200-f6ad55845faf/bear+lake.png";
});
