// This is a placeholder data structure. You'd replace this with your actual product data.
const products = {
  cpu: [
    { name: "AMD Ryzen 5 3600", functionality: "6-Core, 3.6 GHz", price: 199.99 },
    { name: "Intel Core i7-9700K", functionality: "8-Core, 3.6 GHz", price: 374.99 }
    // ... more products
  ],
  gpu: [
    // ... GPU products
  ],
  // Add other components here following the same structure.
  motherboard: [
    // ... RAM products
  ],
  ram: [
    // ... GPU products
  ],
  // Add other components here following the same structure.
  case: [
    // ... RAM products
  ],
  storage: [
    // ... GPU products
  ],
  // Add other components here following the same structure.
  cooler: [
    // ... RAM products
  ],
  powersupply: [
    // ... RAM products
  ],
  // ... and so on for each component type
};


// This function would be called on page load to populate the dropdowns
function populateDropdowns() {
  for (const [component, items] of Object.entries(products)) {
    const selectElement = document.querySelector(`select[name=${component}]`);
    items.forEach(item => {
      const option = document.createElement('option');
      option.value = item.name;
      option.textContent = item.name;
      selectElement.appendChild(option);
    });
  }
}

// Call populateDropdowns on page load
window.addEventListener('DOMContentLoaded', populateDropdowns);

// This function updates the functionality and price based on the selected component
function updateComponentDetails(selectElement) {
  const componentType = selectElement.name;
  const selectedValue = selectElement.value;
  const product = products[componentType].find(p => p.name === selectedValue);
  
  if (product) {
    const functionalityCell = selectElement.closest('tr').querySelector('.functionality');
    const priceCell = selectElement.closest('tr').querySelector('.price');
    
    functionalityCell.textContent = product.functionality;
    priceCell.textContent = `$${product.price.toFixed(2)}`;
  }
}


