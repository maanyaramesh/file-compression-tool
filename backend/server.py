from flask import Flask, request, jsonify
from flask_cors import CORS

import os
import subprocess

app = Flask(__name__)

CORS(app)

UPLOAD_FOLDER = "uploads"

os.makedirs(UPLOAD_FOLDER, exist_ok=True)


@app.route("/")
def home():
    return "ZipLite Backend Running"


@app.route("/compress", methods=["POST"])
def compress_file():

    if "file" not in request.files:
        return jsonify({"error": "No file uploaded"}), 400

    file = request.files["file"]

    input_path = os.path.join(UPLOAD_FOLDER, file.filename)

    compressed_path = os.path.join(
        UPLOAD_FOLDER,
        "compressed.txt"
    )

    file.save(input_path)

    compressor_path = "../compressor/compressor"

    command = [
        compressor_path,
        "compress",
        "rle",
        input_path,
        compressed_path
    ]

    result = subprocess.run(
        command,
        capture_output=True,
        text=True
    )

    return jsonify({
        "message": "Compression completed",
        "output": result.stdout
    })


if __name__ == "__main__":
    app.run(debug=True)
