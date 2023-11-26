// Function to fetch component data from the server
function fetchComponentData(componentType) {
  fetch(`http://yourserveraddress/api/${componentType}`)
    .then(response => response.json())
    .then(data => {
      const selectElement = document.getElementById(`${componentType}-select`);
      data.forEach(item => {
        const option = document.createElement('option');
        option.value = item.name;
        option.textContent = item.name;
        selectElement.appendChild(option);
      });
    })
    .catch(error => console.error(`Error fetching ${componentType} data:`, error));
}

// Call these functions on page load for each component type
document.addEventListener('DOMContentLoaded', () => {
  const components = ['cpu', 'gpu', 'motherboard', 'ram', 'case', 'storage', 'cooler', 'powersupply'];
  components.forEach(fetchComponentData);
});

// Function to update the details of the selected component
function updateComponentDetails(selectElement) {
  const componentType = selectElement.name;
  const selectedValue = selectElement.value;

  // Assuming the server sends details like functionality and price in the initial data
  const componentData = selectElement.selectedOptions[0].dataset;
  document.querySelector(`#${componentType}-functionality`).textContent = componentData.functionality;
  document.querySelector(`#${componentType}-price`).textContent = `$${componentData.price}`;
}
