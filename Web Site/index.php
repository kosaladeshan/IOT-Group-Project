
<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Welcome to DK Cleaners</title>
  <link rel="stylesheet" href="css/loginstyle.css">
  <style>
    body {
      display: flex;
      justify-content: center;
      align-items: center;
      height: 100vh;
      margin: 0;
      padding: 0;
    }
  
    .container {
      text-align: center;
    }
  </style>
</head>
<body style="background-image: url('image/bbg.png'); background-repeat: no-repeat; background-size: cover;"> 
<div class="container">
    <div class="form">
    <form onsubmit="login(event)">
        <label for="User Name"><b>User Name:</b></label>
        <input type="text" id="User Name" name="User Name" required placeholder="Enter Username">
        <label for="password"><b>Password:</b></label>
        <input type="text" id="password" name="password" required placeholder="Enter password">
        <label for="remember-me"><b>Remember Me:</b></label><input type="checkbox" id="remember-me" name="remember-me"><br>
        <a href="Forget Password Page.php">Forget Password?</a><br><br>
        <button type="submit">Sign In</button>
      </form>
    </div>
    <div class="create-account">
      <p>Don't have an Account? <a href="Signup page.php">Sign Up</a></p>
    </div>
    
  </div>
 

  <script src="script.js"></script>
</body>
</html>

