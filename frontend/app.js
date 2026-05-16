function compressFile()
{
    const file =
        document.getElementById("fileInput").files[0];

    if (!file)
    {
        alert("Please select a file");

        return;
    }

    const original =
        (file.size / 1024).toFixed(2);

    const compressed =
        (file.size * 0.4 / 1024).toFixed(2);

    const ratio =
        ((1 - compressed / original) * 100)
        .toFixed(2);

    document.getElementById("originalSize")
        .innerText = original + " KB";

    document.getElementById("compressedSize")
        .innerText = compressed + " KB";

    document.getElementById("ratio")
        .innerText = ratio + "%";

    alert("Compression simulated successfully");
}

function decompressFile()
{
    alert("Decompression simulated");
}
