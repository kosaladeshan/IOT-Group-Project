<!DOCTYPE html>
<html lang="en">
<head>
</div>
<nav class="navbar">
    <ul>
    <li><a href="Dashboard.php"><b>Home</b></a></li>
      <li><a href="Bar chart for entire year.php"><b>Average of Entire Year Garbage Collection</b></a></li>
      <li><a href="Month.php"><b> Monthly Garbage Collection</b></a></li>
      <li><a href="Signup page.php"><b>Sign Up</b></a></li>
      <li><a href="index.php"><b>Login</b></a></li>
    </ul>
  </nav>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Waste Management - Admin Panel</title>
    <link rel="stylesheet" href="css/style.css">
</head>
<body style="background-image: url('image/ks.png'); background-repeat: no-repeat; background-size: cover;"></body>
    <header>
        <h1>Waste Management - Admin Panel</h1>
    </header>
    <main>
        <div class="dashboard-cards">
            <div class="card">
                <h2>Today's Collection : 40</h2>
                <span id="collected-garbage"></span> 10000kg (estimated)
            </div>
            <div class="card">
                <h2>Full Bins</h2>
                <span id="full-bins">50</span> (Locations:50 <span id="full-bin-locations"></span>)
            </div>
       
          
          
        </div>
        <table class="bin-table">
            <thead>
                <tr>
                    <th>Bin ID</th>
                    <th>Location</th>
                    <th>Last Collection</th>
                    <th>Fill Level</th>
                    <th>Actions</th>
                </tr>
                   <td> 001</td>
                   <td> Homagama</td>
                   <td> Kottawa</td>
                   <td> 50%</td>
                   <td> Collected</td>
            </thead>
            <tbody id="bin-data">
                </tbody>
        </table>
    </main>
    <script src="admin.js"></script>
</body>
</html>



