<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Sign Up</title>
  <link rel="stylesheet" href="css/signstyle.css">
</head>
<body style="background-image: url('image/bg.png'); background-repeat: no-repeat; background-size: cover;">
  <h1>Sign Up</h1>
  <div class="container">
<form action="submit.php" method="post">
    <label for="Full Name"><b>Full Name:</b></label>
      <input type="text" name="Full Name" id="Full Name" required>
      <label for="Middle Name"><b>Middle Name:</b></label>
      <input type="text" name="Middle Name" id="Middle Name" required>
      <label for="Employee Number"><b>Employee Number:</b></label>
      <input type="text" name="Employee Number" id="Employee Number" required>
      <label for="email"><b>Email:</b></label>
      <input type="email" name="email" id="email" required>
      <label for="password"><b>Password:</b></label>
      <input type="password" name="password" id="password" required>
      <label for="Confirm Password"><b>Confirm Password:</b></label>
      <input type="password" name="Confirm Password" id="Confirm Password" required>
      <button type="submit">Create Your Account</button>
    </form>
    <p><b>Already have an account?</b> <a href="index.php">Log in</a></p>
  </div>
</body>
</html>
