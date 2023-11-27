from flask import Flask, jsonify

app = Flask(__name__)

# Sample data for each component type
component_data = {
    'cpu': [
        {"id": 1, "name": "Intel i5-14600KF", "functionality": "Basic functionality", "price": 325},
        {"id": 2, "name": "Ryzen 5-7600X", "functionality": "Basic functionality", "price": 210},
        {"id": 3, "name": "Intel i9-14900KF", "functionality": "Advanced functionality", "price": 550},
        {"id": 4, "name": "Ryzen 9-7950X3D", "functionality": "Advanced functionality", "price": 575}
    ],
    'gpu': [
        {"id": 4, "name": "GPU Model A", "functionality": "Basic gaming", "price": 400},
        {"id": 5, "name": "GPU Model B", "functionality": "High-end gaming", "price": 500},
    ],
    'motherboard': [
        {"id": 6, "name": "CPU Model A", "functionality": "Basic functionality", "price": 250},
        {"id": 7, "name": "CPU Model B", "functionality": "Advanced functionality", "price": 300}
    ],
    'ram': [
        {"id": 8, "name": "GPU Model A", "functionality": "Basic gaming", "price": 400},
        {"id": 9, "name": "GPU Model B", "functionality": "High-end gaming", "price": 500}
    ],
    'storage': [
        {"id": 10, "name": "CPU Model A", "functionality": "Basic functionality", "price": 250},
        {"id": 11, "name": "CPU Model B", "functionality": "Advanced functionality", "price": 300}
    ],
    'case': [
        {"id": 12, "name": "GPU Model A", "functionality": "Basic gaming", "price": 400},
        {"id": 13, "name": "GPU Model B", "functionality": "High-end gaming", "price": 500}
    ],
    'cooler': [
        {"id": 14, "name": "CPU Model A", "functionality": "Basic functionality", "price": 250},
        {"id": 15, "name": "CPU Model B", "functionality": "Advanced functionality", "price": 300}
    ],
    'psu': [
        {"id": 16, "name": "GPU Model A", "functionality": "Basic gaming", "price": 400},
        {"id": 17, "name": "GPU Model B", "functionality": "High-end gaming", "price": 500}
    ]
    # Add similar data for motherboard, ram, case, storage, cooler, powersupply
}

# Creating routes for each component type dynamically
for component in component_data:
    @app.route(f'/api/{component}')
    def get_component_data(component=component):
        return jsonify(component_data.get(component, "Component not found"))
    get_component_data.__name__ = f'get_{component}_data'

if __name__ == '__main__':
    app.run(debug=True)