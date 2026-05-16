async function compressFile()
{
    const fileInput =
        document.getElementById("fileInput");

    const file = fileInput.files[0];

    if (!file)
    {
        alert("Please select a file");

        return;
    }

    const formData = new FormData();

    formData.append("file", file);

    try
    {
        const response = await fetch(
            "http://127.0.0.1:5000/compress",
            {
                method: "POST",
                body: formData
            }
        );

        const data = await response.json();

        console.log(data);

        const originalSize =
            (file.size / 1024).toFixed(2);

        /*
            Simulated compressed size
            using 40% compression
        */

        const compressedSize =
            (file.size * 0.4 / 1024).toFixed(2);

        const ratio =
            (
                (
                    1 -
                    (compressedSize / originalSize)
                ) * 100
            ).toFixed(2);

        document.getElementById("originalSize")
            .innerText =
            originalSize + " KB";

        document.getElementById("compressedSize")
            .innerText =
            compressedSize + " KB";

        document.getElementById("ratio")
            .innerText =
            ratio + "%";

        alert("Compression completed successfully");
    }

    catch (error)
    {
        console.error(error);

        alert("Compression failed");
    }
}

function decompressFile()
{
    alert("Decompression feature coming soon");
}
