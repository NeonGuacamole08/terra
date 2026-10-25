.navbar {
  background-color: rgba(213, 211, 204, 0.5);
  overflow: hidden;
  display: flex;
  justify-content: left;
  align-items: center;
  height: 50px;
  margin-top:50px;
  margin-bottom: 50px;
  border-radius: 80px;
}

li{
    list-style-type: none;
}

.menu.list {
 margin-right: 25px;
 
}
.navlink{
    color: rgb(1, 41, 56);
    font-size: 18px;
    width: 600px;
    height: 400px;
    background-color: rgba(213, 211, 204);
    border-radius: 80px;
    padding: 8px 24px;
    font-weight: bold;
    font-family: 'Rockwell Extra Bold', serif;
    text-decoration: none;
    border: 1px solid transparent;
    cusor: pointer;

}

.navlink:hover,   /* Triggers when the mouse pointer is over the pill */
.navlink:active,  /* Triggers the exact moment you click down */
.navlink:focus,   /* Triggers after it's clicked and stays until you click elsewhere */
.navlink.active { /* The manual class you put in HTML for the current page */
  border: 2px solid #1a4a5a;
}

.nav-logo {
  border: 5px solid white;
  padding: 5px 15px;
  color: white;
  font-family: 'Rockwell Extra Bold', serif;
  font-size: 20px;
  font-weight: bold;
  width: 40px;
  align-items: center;
  justify-content: center;
  height: 35px;
  color: rgba(255, 255, 255, 0.85) !important;
  font-size: 20px;
  margin: 0;
  line-height: 1;
  position: absolute; 
  right: 50px; /* Pins it 50px away from the right edge of the screen */
  top: 50px; /* Adjust this number to align it vertically with your buttons */
  text-decoration: none;
}

 .Box {
  background-color: rgba(213, 211, 204, 0.5);
  border-radius: 80px;
  padding: 40px; /* Increased padding slightly to give text room */
  overflow: hidden;
  height: 70%;
  
  /* --- ADD THESE 3 LINES TO CENTER EVERYTHING VERTICALLY --- */
  display: flex;
  flex-direction: column; /* Stacks your title and paragraphs top-to-bottom */
  justify-content: center; /* Centers the whole block vertically inside the box */
  align-items: center;     /* Centers everything horizontally */
}

.Para {
  font-family: 'Bahnschrift Light', serif;
  font-size: 20px;
  color: rgb(1, 41, 56);
  line-height: 1.5;
  
  /* --- CHANGE THIS LINE --- */
  text-align: center; /* Centers the text instead of justifying it */
  
  max-width: 900px; /* Keeps the text lines from getting too wide to read comfortably */
  margin-bottom: 20px; /* Adds a clean gap between paragraphs */
}
