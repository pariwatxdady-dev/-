body {
  margin: 0;
  font-family: sans-serif;
  background: #f2f6fc;
}

header {
  background: linear-gradient(to right, #007bff, #00c6ff);
  color: white;
  text-align: center;
  padding: 40px;
}

.topics {
  display: grid;
  grid-template-columns: repeat(auto-fit, minmax(200px, 1fr));
  gap: 15px;
  padding: 20px;
  max-width: 1000px;
  margin: auto;
}

.card {
  background: white;
  padding: 20px;
  text-align: center;
  border-radius: 10px;
  cursor: pointer;
  box-shadow: 0 4px 10px rgba(0,0,0,0.1);
  transition: 0.3s;
  font-weight: bold;
}

.card:hover {
  background: #007bff;
  color: white;
  transform: scale(1.05);
}

.display {
  max-width: 900px;
  margin: 30px auto;
  padding: 20px;
}

#contentBox {
  background: white;
  padding: 25px;
  border-radius: 10px;
  box-shadow: 0 4px 10px rgba(0,0,0,0.1);
}
