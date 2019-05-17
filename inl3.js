
 document.addEventListener('keydown', function(event) { //When key is pressed down

     console.log("key = " + event.key + " and code = " + event.code);

     const key = document.getElementById(event.code);

     if (event.code == 'Enter') {
         $("#EnterTop, #EnterBottom").addClass('pressed');
     }
     else {
         $(key).addClass('pressed');
     }

 }, true);

 document.addEventListener('keyup', function(event) { //When key is not pressed anymore

     const key = document.getElementById(event.code);

     if (event.code == 'Enter') {
         $("#EnterTop, #EnterBottom").removeClass('pressed'); //Removes the class and CSS of lit up buttons
     }
     else {
         $(key).removeClass('pressed');
     }
 });
