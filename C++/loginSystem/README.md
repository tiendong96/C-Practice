<h1> Updates and takeaways </h1>
<h3> 7/2/2021 </h3>
<p> This project is one of many that I found online to help me practice more with C++. There are a lot of things I think that I can do better so far.
    For now here are some of the things I think needs to be implemented or revisited. </p>
<ul>
  <li>Instead of one file with just a string implementation, I need to create a hashmap to create couples of username and password. As it stands right now, the only validation is
  the username. By using a hashmap I will be able to validate user's and their password in a more secure way.</li>
  <li>Username and password codes need to be non case-sensitive to allow better validation. Right now if I used username: tdong and compared it with [T]dong it would flag it
  as the same username.</li>
  <li>Password needs to be put through a validator so that the user is forced to create a password that is at least 8 characters long and has some symbols.</li>
  <li>Need to implement a better way to loop the welcome() function so that when the user does not pass registration or login, the user will be looped until they are successful</li>
</ul>
