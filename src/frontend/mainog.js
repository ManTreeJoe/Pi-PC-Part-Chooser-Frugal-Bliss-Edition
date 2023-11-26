// Function to fetch component data from the server
function fetchComponentData(componentType) {
  fetch(`http://yourserveraddress/api/${componentType}.php`) // Update the URL to point to PHP scripts
    .then(response => response.json())
    .then(data => {
      const selectElement = document.getElementById(`${componentType}-select`);
      data.forEach(item => {
        const option = document.createElement('option');
        option.value = item.id;
        option.textContent = item.name;
        selectElement.appendChild(option);
      });
    })
    .catch(error => console.error(`Error fetching ${componentType} data:`, error));
}

// Call these functions on page load for each component type
document.addEventListener('DOMContentLoaded', () => {
  fetchComponentData('cpu');
  fetchComponentData('gpu');
  fetchComponentData('motherboard');
  fetchComponentData('ram');
  fetchComponentData('case');
  fetchComponentData('storage');
  fetchComponentData('cooler');
  fetchComponentData('powersupply');
  // Add more component types as necessary
  updateAuthUI();
});

function updateAuthUI() {
  const isAuthenticated = checkAuth(); // Implement this to check auth status
  const authNav = document.getElementById('nav-auth');

  authNav.innerHTML = isAuthenticated
    ? '<li><a href="/profile">Profile</a></li><li><button onclick="logout()">Logout</button></li>'
    : '<li><a href="/login">Login</a></li>';
}

function checkAuth() {
  // Check authentication, e.g., check for a valid session cookie or JWT token
}

function logout() {
  // Implement logout functionality
}

// Update this function as per your server's response structure
function updateComponentDetails(selectElement) {
  const componentType = selectElement.name;
  const selectedValue = selectElement.value;
  // Fetch and update functionality and price based on selected component
  // This part needs implementation based on how your server sends this data.
}
