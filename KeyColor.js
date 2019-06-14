var Colores = ["red","#f45c42","#f27435", "orange", "#f1ac35", "yellow", "#fff135", "#ddff34", "#bbff33", "#69ff32", "#35f296", "#31ff76", "#30ffc1", "#2bfbff", "#77dfff", "blue", "#2a71ff", "#2a71ff", "#2938ff", "purple", "#a528ff", "#f428ff", "#ff28c9", "#ff285d"]; //Loop trough these to make a rainbow effect

                let i = 0;

                document.addEventListener('keydown', function change(event) {

                    console.log("key = " + event.key + " and code = " + event.code); // DEBUG

                    if (event.code == 'Enter') { //enter is 2 buttons, special case
                        document.getElementById("EnterTop").style.backgroundColor = Colores[i]; //Removes the class and CSS of lit up buttons
                        document.getElementById("EnterBottom").style.backgroundColor = Colores[i];
                        document.getElementById("EnterTop").style.transition = "none";
                        document.getElementById("EnterBottom").style.transition = "none";
                        i++;
                    }

                    else {
                        document.getElementById(event.code).style.backgroundColor = Colores[i];
                        document.getElementById(event.code).style.transition = "none";
                        i++;
                    }

                    if (i == 24) { //resets loop
                        i = 0;
                    }
                });

                document.addEventListener('keyup', function change(event) {

                    console.log("key = " + event.key + " and code = " + event.code); // DEBUG



                    if (event.code == 'Enter') { //enter is 2 buttons, special case
                        document.getElementById("EnterTop").style.backgroundColor = "white"; //Removes the class and CSS of lit up buttons
                        document.getElementById("EnterBottom").style.backgroundColor = "white";
                          document.getElementById("EnterTop").style.transition = "0.6s";
                            document.getElementById("EnterBottom").style.transition = "0.6s";
                        i++;
                    }

                    else {
                        document.getElementById(event.code).style.backgroundColor = "white";
                        document.getElementById(event.code).style.transition = "0.6s";
                    }

                    if (i == 24) { //resets loop
                        i = 0;
                    }
                });


 /*document.addEventListener('keydown', function(event) { //When key is pressed down

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
 }); */
