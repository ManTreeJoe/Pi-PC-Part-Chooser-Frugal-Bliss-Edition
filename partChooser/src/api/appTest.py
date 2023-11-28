from flask import Flask, jsonify

app = Flask(__name__)


app.secret_key = 'your_secret_key'

# Placeholder for user authentication
def authenticate_user(username, password):
    # Replace with actual authentication logic
    return True

# Placeholder for user registration
def create_user(username, password):
    # Replace with actual user creation logic
    pass

@app.route('/login', methods=['GET', 'POST'])
def login():
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        if authenticate_user(username, password):
            session['user'] = username  # User is logged in
            return redirect('/')
        else:
            return "Login failed", 401

@app.route('/register', methods=['GET', 'POST'])
def register():
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']
        create_user(username, password)
        return redirect('/login')



# Sample data for each component type
component_data = {
    'cpu': [
        {"id": "cpu-select", "name": "Intel i5-14600KF", "functionality": "Basic functionality", "price": 325},
        {"id": "cpu-select", "name": "Ryzen 5-7600X", "functionality": "Basic functionality", "price": 210},
        {"id": "cpu-select", "name": "Intel i9-14900KF", "functionality": "Advanced functionality", "price": 550},
        {"id": "cpu-select", "name": "Ryzen 9-7950X3D", "functionality": "Advanced functionality", "price": 575}
    ],
    'gpu': [
        {"id": "gpu-select", "name": "Nvidia GeForce RTX 4060", "functionality": "Basic gaming", "price": 300},
        {"id": "gpu-select", "name": "Radeon RX 7600", "functionality": "High-end gaming", "price": 250},
        {"id": "gpu-select", "name": "Nvidia GeForce RTX 4090", "functionality": "High-end gaming", "price": 2000},
        {"id": "gpu-select", "name": "Radeon RX 7900 XTX", "functionality": "High-end gaming", "price": 1000}
    ],
    'motherboard': [
        {"id": "motherboard-select", "name": "Motherboard Model A", "functionality": "Basic functionality", "price": 250},
        {"id": "motherboard-select", "name": "Motherboard Model B", "functionality": "Advanced functionality", "price": 300},
        {"id": "motherboard-select", "name": "Motherboard Model B", "functionality": "Advanced functionality", "price": 300},
        {"id": "motherboard-select", "name": "Motherboard Model B", "functionality": "Advanced functionality", "price": 300}
    ],
    'ram': [
        {"id": "ram-select", "name": "RAM Model A", "functionality": "Basic gaming", "price": 400},
        {"id": "ram-select", "name": "RAM Model B", "functionality": "High-end gaming", "price": 500},
        {"id": "ram-select", "name": "RAM Model B", "functionality": "High-end gaming", "price": 500}
    ],
    'case': [
        {"id": "case-select", "name": "Case Model A", "functionality": "Basic functionality", "price": 250},
        {"id": "case-select", "name": "Case Model B", "functionality": "Advanced functionality", "price": 300},
        {"id": "case-select", "name": "Case Model B", "functionality": "Advanced functionality", "price": 300}
    ],
    'storage': [
        {"id": "storage-select", "name": "Storage Model A", "functionality": "Basic gaming", "price": 400},
        {"id": "storage-select", "name": "Storage Model B", "functionality": "High-end gaming", "price": 500},
        {"id": "storage-select", "name": "Storage Model B", "functionality": "High-end gaming", "price": 500}
    ],
    'cooler': [
        {"id": "cooler-select", "name": "Cooler Model A", "functionality": "Basic functionality", "price": 250},
        {"id": "cooler-select", "name": "Cooler Model B", "functionality": "Advanced functionality", "price": 300},
        {"id": "cooler-select", "name": "Cooler Model B", "functionality": "Advanced functionality", "price": 300}
    ],
    'psu': [
        {"id": "psu-select", "name": "PSU Model A", "functionality": "Basic gaming", "price": 400},
        {"id": "psu-select", "name": "PSU Model B", "functionality": "High-end gaming", "price": 500},
        {"id": "psu-select", "name": "PSU Model B", "functionality": "High-end gaming", "price": 500}
    ]
    # Add similar data for motherboard, ram, case, storage, cooler, powersupply
}

# Creating routes for each component type dynamical

@app.route('/api/cpu')
def get_cpu_data():
    return jsonify(component_data['cpu'])

@app.route('/api/gpu')
def get_gpu_data():
    return jsonify(component_data['gpu'])

@app.route('/api/motherboard')
def get_motherboard_data():
    return jsonify(component_data['motherboard'])

@app.route('/api/ram')
def get_ram_data():
    return jsonify(component_data['ram'])

@app.route('/api/case')
def get_case_data():
    return jsonify(component_data['case'])

@app.route('/api/storage')
def get_storage_data():
    return jsonify(component_data['storage'])

@app.route('/api/cooler')
def get_cooler_data():
    return jsonify(component_data['cooler'])

@app.route('/api/psu')
def get_psu_data():
    return jsonify(component_data['psu'])

if __name__ == '__main__':
    app.run(debug=False)





