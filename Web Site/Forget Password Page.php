<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Forgot Password</title>
    <link rel="stylesheet" href="css/Forget Password.css">
</head>
<body style="background-image: url('image/bg.png'); background-repeat: no-repeat; background-size: cover;"></body>
    <div class="container">
        <h1>Forgot Password</h1>
        <p><b>Enter your email address associated with your account and we'll send you a <u>OTP Number</u> to reset your password.</b></p>
        <form action="#">
            <label for="email"><b>Email Address:</b></label>
            <input type="email" id="email" name="email" placeholder="Enter your email address" required>
            <button type="submit">Send OTP Number </button>
            <label for="OTP"><b>OTP Number:</b></label>
            <input type="text" id="OTP" name="OTP" placeholder="OTP Number" required>
            <button type="submit">Submit </button>
        </form>
    <p class="link-to-login"><b>Already remember your password ?</b> </p><a href="index.php">Login here</a>
    </div>
</body>
</html>
