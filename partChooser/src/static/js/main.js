// Function to fetch component data from the server
function fetchComponentData(componentType) {
  fetch(`http://192.168.1.112/api/${componentType}`)
      .then(response => response.json())
      .then(data => {
          const selectElement = document.getElementById(`${componentType}-select`);
          if (selectElement && Array.isArray(data)) {
              data.forEach(item => {
                  const option = document.createElement('option');
                  option.value = item.name;
                  option.textContent = item.name;
                  // Add data attributes for functionality and price
                  option.dataset.functionality = item.functionality;
                  option.dataset.price = item.price;
                  selectElement.appendChild(option);
              });
          }
      })
      .catch(error => console.error(`Error fetching ${componentType} data:`, error));
}

// Call these functions on page load for each component type
document.addEventListener('DOMContentLoaded', () => {
  const components = ['cpu', 'gpu', 'motherboard', 'ram', 'case', 'storage', 'cooler', 'psu'];
  components.forEach(fetchComponentData);
});

// Function to update the details of the selected component
function updateComponentDetails(selectElement) {
  const componentType = selectElement.name;
  const selectedOption = selectElement.selectedOptions[0];
  if (selectedOption) {
      const functionality = selectedOption.dataset.functionality || 'Not available';
      const price = selectedOption.dataset.price || '0.00';
      document.querySelector(`#${componentType}-functionality`).textContent = functionality;
      document.querySelector(`#${componentType}-price`).textContent = `$${price}`;
  }
}
