// Function to fetch component data from the server
function fetchComponentData(componentType) {
  fetch(`http://192.168.1.209/api/${componentType}`)
    .then(response => response.json())
    .then(data => {
      const selectElement = document.getElementById(`${componentType}-select`);
      if (selectElement && Array.isArray(data)) {
        data.forEach(item => {
          const option = document.createElement('option');
          option.value = item.name;
          option.textContent = item.name;
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
  const selectedValue = selectElement.value;

  const selectedOption = selectElement.selectedOptions[0];
  if (selectedOption) {
    const componentData = selectedOption.dataset;
    document.querySelector(`#${componentType}-functionality`).textContent = componentData.functionality || 'Not available';
    document.querySelector(`#${componentType}-price`).textContent = `$${componentData.price || '0.00'}`;
  }
}


